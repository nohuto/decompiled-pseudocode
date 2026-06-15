/*
 * XREFs of sub_180004620 @ 0x180004620
 * Callers:
 *     sub_1800038A4 @ 0x1800038A4 (sub_1800038A4.c)
 *     sub_180003AA0 @ 0x180003AA0 (sub_180003AA0.c)
 *     sub_18009C938 @ 0x18009C938 (sub_18009C938.c)
 * Callees:
 *     sub_1800047A4 @ 0x1800047A4 (sub_1800047A4.c)
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180051794 @ 0x180051794 (sub_180051794.c)
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 *     sub_1800D88DC @ 0x1800D88DC (sub_1800D88DC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180004620(HKEY a1, int a2, int a3, HKEY *a4)
{
  int v7; // r14d
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // edi
  HKEY v14; // rax
  void *lpSecurityDescriptor; // rbx
  HANDLE ProcessHeap; // rax
  int v18; // eax
  int v19; // [rsp+28h] [rbp-29h]
  HKEY hKey; // [rsp+58h] [rbp+7h] BYREF
  PSID Sid[2]; // [rsp+60h] [rbp+Fh] BYREF
  char v22; // [rsp+70h] [rbp+1Fh]
  struct _SECURITY_ATTRIBUTES lpMem; // [rsp+78h] [rbp+27h] BYREF
  void *retaddr; // [rsp+B0h] [rbp+5Fh]

  v7 = (int)a1;
  memset(&lpMem, 0, sizeof(lpMem));
  lpMem.nLength = 24;
  v8 = sub_180006008(a1);
  v11 = v8;
  if ( v8 < 0 )
  {
    sub_18004BD84(retaddr, 932LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v8);
    return v11;
  }
  else
  {
    Sid[1] = &lpMem;
    v22 = 1;
    hKey = 0LL;
    v12 = sub_1800047A4(v7, a2, v9, v10, v19, a3 | ((a3 & 0x20006) != 0 ? 655360 : 0x20000), &lpMem, (__int64)&hKey);
    v13 = v12;
    if ( v12 > 0 )
      v13 = (unsigned __int16)v12 | 0x80070000;
    if ( (v13 & 0x80000000) != 0 )
    {
      if ( v13 != -2147024891 )
        sub_18004BD84(retaddr, 942LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v13);
    }
    else
    {
      Sid[0] = 0LL;
      if ( ConvertStringSidToSidW(L"LW", Sid) )
      {
        if ( (int)sub_180051794(hKey, Sid[0]) >= 0 || (v18 = sub_1800D88DC(hKey), v13 = v18, v18 >= 0) )
        {
          v14 = hKey;
          hKey = 0LL;
          *a4 = v14;
          v13 = 0;
        }
        else
        {
          sub_18004BD84(retaddr, 955LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v18);
        }
        LocalFree(Sid[0]);
      }
      else
      {
        v13 = sub_1800B5768(retaddr, 946LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp");
      }
    }
    if ( hKey )
      RegCloseKey(hKey);
    lpSecurityDescriptor = lpMem.lpSecurityDescriptor;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpSecurityDescriptor);
    return v13;
  }
}
