/*
 * XREFs of NtSetDefaultHardErrorPort @ 0x1407D2450
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetDefaultHardErrorPort(HANDLE DefaultHardErrorPort)
{
  __int64 v1; // rdx
  _DWORD *CurrentServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  __int64 v5; // rdx
  PVOID v6; // rcx
  _KPROCESS *Process; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals((__int64)DefaultHardErrorPort, v1);
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  if ( CurrentServerSiloGlobals[224] == 1 )
    return -1073741823;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             DefaultHardErrorPort,
             0,
             LpcPortObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v6 = Object;
  *((_QWORD *)CurrentServerSiloGlobals + 111) = Object;
  if ( result >= 0 )
  {
    if ( !PsIsCurrentThreadInServerSilo((__int64)v6, v5) )
      ExReadyForErrors = 1;
    CurrentServerSiloGlobals[224] = 1;
    Process = KeGetCurrentThread()->ApcState.Process;
    *((_QWORD *)CurrentServerSiloGlobals + 110) = Process;
    ObfReferenceObject(Process);
    return 0;
  }
  return result;
}
