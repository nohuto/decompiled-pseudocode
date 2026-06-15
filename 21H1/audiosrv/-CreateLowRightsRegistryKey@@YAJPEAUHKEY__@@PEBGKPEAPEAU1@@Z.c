/*
 * XREFs of ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180004A90
 * Callers:
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180003D14 (-OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180003F10 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     sub_18009D320 @ 0x18009D320 (sub_18009D320.c)
 * Callees:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180004C14 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180006478 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180051F64 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B6198 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800D939C (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreateLowRightsRegistryKey(HKEY a1, const unsigned __int16 *a2, int a3, HKEY *a4)
{
  int v8; // eax
  unsigned int v9; // r8d
  unsigned __int16 *v10; // r9
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int LastError; // edi
  const char *v14; // r9
  HKEY v15; // rax
  void *lpSecurityDescriptor; // rbx
  HANDLE ProcessHeap; // rax
  int v19; // eax
  unsigned int v20; // [rsp+28h] [rbp-29h]
  int v21; // [rsp+28h] [rbp-29h]
  unsigned int *v22; // [rsp+48h] [rbp-9h]
  HKEY hKey; // [rsp+58h] [rbp+7h] BYREF
  PSID Sid[2]; // [rsp+60h] [rbp+Fh] BYREF
  char v25; // [rsp+70h] [rbp+1Fh]
  struct _SECURITY_ATTRIBUTES lpMem; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  memset(&lpMem, 0, sizeof(lpMem));
  lpMem.nLength = 24;
  v8 = DetermineLowRightsKeySecurityDescriptor(a1, &lpMem.lpSecurityDescriptor);
  v11 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A4,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v8,
      v20);
    return v11;
  }
  else
  {
    Sid[1] = &lpMem;
    v25 = 1;
    hKey = 0LL;
    v12 = SafeRegCreateKeyEx(a1, a2, v9, v10, v20, a3 | ((a3 & 0x20006) != 0 ? 655360 : 0x20000), &lpMem, &hKey, v22);
    LastError = v12;
    if ( v12 > 0 )
      LastError = (unsigned __int16)v12 | 0x80070000;
    if ( (LastError & 0x80000000) != 0 )
    {
      if ( LastError != -2147024891 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3AE,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)LastError,
          v21);
    }
    else
    {
      Sid[0] = 0LL;
      if ( ConvertStringSidToSidW(L"LW", Sid) )
      {
        if ( (int)SetRegistryKeyIntegrityLevel(hKey, Sid[0]) >= 0
          || (v19 = SetRegistryHandleIntegrityLevel(hKey, Sid[0]), LastError = v19, v19 >= 0) )
        {
          v15 = hKey;
          hKey = 0LL;
          *a4 = v15;
          LastError = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3BB,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)(unsigned int)v19,
            v21);
        }
        LocalFree(Sid[0]);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x3B2,
                      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                      v14);
      }
    }
    if ( hKey )
      RegCloseKey(hKey);
    lpSecurityDescriptor = lpMem.lpSecurityDescriptor;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpSecurityDescriptor);
    return LastError;
  }
}
