/*
 * XREFs of SepRmReferenceFindCap @ 0x140596424
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140223E30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeComputeCreatorDeniedRights @ 0x140225DE0 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140229080 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372D04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SeRmReferenceFindCapName @ 0x1405962A4 (SeRmReferenceFindCapName.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlEqualSid @ 0x140210C40 (RtlEqualSid.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     RtlLookupEntryHashTable @ 0x1402E1630 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140305CF0 (RtlGetNextEntryHashTable.c)
 *     SepRmDereferenceCapTable @ 0x140594960 (SepRmDereferenceCapTable.c)
 *     SepComputeSidSignature @ 0x14068E294 (SepComputeSidSignature.c)
 */

__int64 __fastcall SepRmReferenceFindCap(PSID Sid1, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // esi
  _RTL_DYNAMIC_HASH_TABLE *v6; // rdi
  ULONG_PTR v7; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY NextEntryHashTable; // rbx
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-38h] BYREF

  *a2 = 0LL;
  memset(&Context, 0, sizeof(Context));
  CurrentThread = KeGetCurrentThread();
  v5 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&SepRmCapTableLock, 0LL);
  v6 = SepRmCapTable;
  if ( SepRmCapTable && _InterlockedIncrement64((volatile signed __int64 *)&SepRmCapTable[1]) <= 1 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock);
  KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
  KeLeaveCriticalRegion();
  if ( v6 )
  {
    if ( !SepRmEnforceCap )
      goto LABEL_13;
    v7 = SepComputeSidSignature(Sid1);
    NextEntryHashTable = RtlLookupEntryHashTable(v6, v7, &Context);
    if ( !NextEntryHashTable )
      goto LABEL_13;
    do
    {
      if ( RtlEqualSid(Sid1, NextEntryHashTable[1].Linkage.Flink) == 1 )
        break;
      NextEntryHashTable = RtlGetNextEntryHashTable(v6, &Context);
    }
    while ( NextEntryHashTable );
    if ( NextEntryHashTable )
    {
      *a2 = NextEntryHashTable;
      return 0;
    }
    else
    {
LABEL_13:
      SepRmDereferenceCapTable((volatile signed __int64 *)v6);
    }
  }
  return v5;
}
