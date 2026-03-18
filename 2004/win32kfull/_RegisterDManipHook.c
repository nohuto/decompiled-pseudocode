/*
 * XREFs of _RegisterDManipHook @ 0x1C011C264
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1C011C210 (NtUserRegisterDManipHook.c)
 * Callees:
 *     IsPrivileged @ 0x1C0039594 (IsPrivileged.c)
 *     AddHmodDependency @ 0x1C0046128 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C004616C (GetHmodTableIndex.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00AE624 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C011C3AC (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCopyWorkerW @ 0x1C011C418 (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterDManipHook(__int64 a1, unsigned __int64 a2, const unsigned __int16 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  const wchar_t *NtSystemRoot; // rax
  size_t *v8; // r8
  int HmodTableIndex; // eax
  __int64 v10; // rcx
  __int64 v12; // rcx
  size_t v13; // [rsp+20h] [rbp-248h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  if ( gihmodDManipHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v4 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v3) + 780), (_DWORD)v4 != luidSystem[0])
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4),
        a2 = (unsigned int)luidSystem[1],
        *(_DWORD *)(CurrentProcessWin32Process + 784) != (_DWORD)a2)
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v10 = 5LL;
    goto LABEL_10;
  }
  DestinationString = 0LL;
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot(v6, a2);
  if ( RtlStringCopyWorkerW(pszDest, 0x82uLL, v8, NtSystemRoot, v13) < 0 || (int)RtlStringCbCatW(pszDest, a2, a3) < 0 )
  {
    v10 = 3LL;
    goto LABEL_10;
  }
  RtlStringCchCopyW((char *)gszModuleDManipHook, 260LL, (char *)pszDest);
  RtlInitUnicodeString(&DestinationString, pszDest);
  HmodTableIndex = GetHmodTableIndex((unsigned int *)&DestinationString.Length);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v10 = 126LL;
LABEL_10:
    UserSetLastError(v10, a2, (__int64)a3);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  gppiDManipHook = PsGetCurrentProcessWin32Process(v12);
  _InterlockedOr(gpsi, 0x10u);
  return 1LL;
}
