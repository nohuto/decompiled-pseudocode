/*
 * XREFs of ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C00B3A00
 * Callers:
 *     ?EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B3980 (-EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?PrivateEmitUpdateCommand@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F95AC (-PrivateEmitUpdateCommand@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0074C80 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0074CC0 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C00B45A0 (ReferenceDwmProcess.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

void *__fastcall DirectComposition::CDCompMappedSharedSectionMarshaler::CreateDwmHandle(PVOID *this)
{
  struct _KPROCESS *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  struct _KPROCESS *v6; // rbx
  void *Handle; // [rsp+40h] [rbp-48h] BYREF
  _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  Handle = 0LL;
  GreLockDwmState();
  v2 = (struct _KPROCESS *)ReferenceDwmProcess();
  v6 = v2;
  if ( v2 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v2, &ApcState);
    ObOpenObjectByPointer(this[7], 0xC0000000, 0LL, 6u, MmSectionObjectType, 1, &Handle);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v6);
  }
  GreUnlockDwmState(v4, v3, v5);
  return Handle;
}
