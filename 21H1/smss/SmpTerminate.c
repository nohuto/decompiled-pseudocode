/*
 * XREFs of SmpTerminate @ 0x140015498
 * Callers:
 *     wmain @ 0x140001840 (wmain.c)
 *     SmpDereferenceKnownSubSys @ 0x140003A84 (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x140003BE4 (SmpDestroyControlBlock.c)
 *     SmpInitializeKnownDllsInternal @ 0x140007C70 (SmpInitializeKnownDllsInternal.c)
 *     SmpCreateInitialSession @ 0x14000E330 (SmpCreateInitialSession.c)
 *     SmpInitializeKnownDllsWorker @ 0x14000EA00 (SmpInitializeKnownDllsWorker.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x14000EA88 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpUnhandledExceptionFilter @ 0x140015540 (SmpUnhandledExceptionFilter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpTerminate(PULONG_PTR Parameters, ULONG UnicodeStringParameterMask, ULONG NumberOfParameters)
{
  NTSTATUS v6; // eax
  ULONG Response[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 OldValue; // [rsp+68h] [rbp+20h] BYREF

  if ( RtlAdjustPrivilege(0x13u, 1u, 1u, &OldValue) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1u, 0, &OldValue);
  v6 = NtRaiseHardError(-1073741286, NumberOfParameters, UnicodeStringParameterMask, Parameters, 6u, Response);
  return NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
}
