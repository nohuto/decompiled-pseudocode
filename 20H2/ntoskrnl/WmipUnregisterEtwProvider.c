/*
 * XREFs of WmipUnregisterEtwProvider @ 0x1407C34A0
 * Callers:
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x1407689DC (WmipUnlinkInstanceSetFromGuidEntry.c)
 * Callees:
 *     WmipQueueLegacyEtwWork @ 0x1407C3588 (WmipQueueLegacyEtwWork.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

void __fastcall WmipUnregisterEtwProvider(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *PoolWithTag; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_DWORD *)(v1 + 152))-- == 1 )
  {
    *(_QWORD *)(v1 + 112) = 0LL;
    *(_QWORD *)(v1 + 120) = 0LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x70696D57u);
    if ( PoolWithTag )
    {
      PoolWithTag[4] = 1;
      WmipQueueLegacyEtwWork(PoolWithTag, v1, 0LL);
    }
  }
}
