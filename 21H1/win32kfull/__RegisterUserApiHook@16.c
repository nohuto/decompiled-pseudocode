/*
 * XREFs of __RegisterUserApiHook@16 @ 0xEABF4
 * Callers:
 *     _NtUserRegisterUserApiHook@16 @ 0xEABB6 (_NtUserRegisterUserApiHook@16.c)
 * Callees:
 *     _AddHmodDependency@4 @ 0x15F82 (_AddHmodDependency@4.c)
 *     _GetHmodTableIndex@4 @ 0x15FAE (_GetHmodTableIndex@4.c)
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsPrivileged@4 @ 0xCB7DA (_IsPrivileged@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall _RegisterUserApiHook(int *a1, int *a2, int a3, int a4)
{
  PKTHREAD CurrentThread; // eax
  int v7; // ecx
  unsigned __int16 *v8; // edx
  ULONG v9; // esi
  int HmodTableIndex; // eax
  unsigned int v12; // [esp+0h] [ebp-38h]
  const unsigned __int16 *v13; // [esp+4h] [ebp-34h]
  int v14; // [esp+1Ch] [ebp-1Ch]

  if ( gihmodUserApiHook >= 0
    || (CurrentThread = KeGetCurrentThread(), (unsigned __int8)IsRestricted(CurrentThread))
    || *(_DWORD *)(PsGetCurrentProcessWin32Process() + 424) != _luidSystem[0]
    || *(_DWORD *)(PsGetCurrentProcessWin32Process() + 428) != _luidSystem[1]
    || !IsPrivileged(_psTcb) )
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
  if ( (unsigned int)a2 >= _MmUserProbeAddress )
    a2 = (int *)_MmUserProbeAddress;
  v7 = *a2;
  v14 = *a2;
  v8 = (unsigned __int16 *)a2[1];
  v9 = (ULONG)v8 + (unsigned __int16)*a2 + 2;
  if ( v9 <= (unsigned int)v8 || v9 >= _MmUserProbeAddress )
LABEL_17:
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v7 > HIWORD(v14) )
  {
    if ( (v7 & 1) == 0 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( (v7 & 1) != 0 )
  {
LABEL_16:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    goto LABEL_17;
  }
  RtlStringCchCopyW(260, (char *)gszFunctionUserApiHook, v8, v12, v13);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodUserApiHook = HmodTableIndex;
  if ( HmodTableIndex != -1 )
  {
    AddHmodDependency(HmodTableIndex);
    _gppiUserApiHook = PsGetCurrentProcessWin32Process();
    _InterlockedOr(_gpsi, 0x10u);
    return 1;
  }
  UserSetLastError((struct _NT_TIB *)0x7E);
  return 0;
}
