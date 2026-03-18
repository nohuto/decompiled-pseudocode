/*
 * XREFs of __RegisterDManipHook@0 @ 0xE43A6
 * Callers:
 *     _NtUserRegisterDManipHook@0 @ 0xE4372 (_NtUserRegisterDManipHook@0.c)
 * Callees:
 *     _AddHmodDependency@4 @ 0x15F82 (_AddHmodDependency@4.c)
 *     _GetHmodTableIndex@4 @ 0x15FAE (_GetHmodTableIndex@4.c)
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsPrivileged@4 @ 0xCB7DA (_IsPrivileged@4.c)
 *     ?RtlStringCbCatW@@YGJPAGIPBG@Z @ 0xE44C0 (-RtlStringCbCatW@@YGJPAGIPBG@Z.c)
 *     RtlStringCopyWorkerW_0 @ 0xE44F8 (RtlStringCopyWorkerW_0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall _RegisterDManipHook()
{
  PKTHREAD CurrentThread; // eax
  size_t NtSystemRoot; // eax
  NTSTRSAFE_PWSTR v2; // ecx
  unsigned __int16 *v3; // ecx
  int HmodTableIndex; // eax
  const wchar_t *v6; // [esp+0h] [ebp-218h]
  unsigned int v7; // [esp+0h] [ebp-218h]
  unsigned int v8; // [esp+0h] [ebp-218h]
  struct _UNICODE_STRING DestinationString; // [esp+4h] [ebp-214h] BYREF
  WCHAR SourceString[260]; // [esp+Ch] [ebp-20Ch] BYREF

  if ( gihmodDManipHook >= 0
    || (CurrentThread = KeGetCurrentThread(), (unsigned __int8)IsRestricted(CurrentThread))
    || *(_DWORD *)(PsGetCurrentProcessWin32Process() + 424) != _luidSystem[0]
    || *(_DWORD *)(PsGetCurrentProcessWin32Process() + 428) != _luidSystem[1]
    || !IsPrivileged(_psTcb) )
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
  DestinationString.Buffer = 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  if ( RtlStringCopyWorkerW_0(v2, NtSystemRoot, (size_t *)v2, v6, 0) < 0
    || RtlStringCbCatW(v3, v7, *(const unsigned __int16 **)&DestinationString.Length) < 0 )
  {
    UserSetLastError((struct _NT_TIB *)3);
    return 0;
  }
  RtlStringCchCopyW(
    260,
    (char *)gszModuleDManipHook,
    SourceString,
    v8,
    *(const unsigned __int16 **)&DestinationString.Length);
  RtlInitUnicodeString(&DestinationString, SourceString);
  HmodTableIndex = GetHmodTableIndex((int *)&DestinationString);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    UserSetLastError((struct _NT_TIB *)0x7E);
    return 0;
  }
  AddHmodDependency(HmodTableIndex);
  _gppiDManipHook = PsGetCurrentProcessWin32Process();
  _InterlockedOr(_gpsi, 0x10u);
  return 1;
}
