/*
 * XREFs of WmipAllocGuidEntry @ 0x140751258
 * Callers:
 *     WmipOpenBlock @ 0x140667E58 (WmipOpenBlock.c)
 *     WmipLinkDataSourceToList @ 0x140751120 (WmipLinkDataSourceToList.c)
 * Callees:
 *     WmipAllocEntry @ 0x1407512F0 (WmipAllocEntry.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

_QWORD *WmipAllocGuidEntry()
{
  _QWORD *v0; // rbx
  _QWORD *PoolWithTag; // rdi
  _QWORD *v2; // rax

  v0 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70696D57u);
  if ( PoolWithTag )
  {
    v2 = (_QWORD *)WmipAllocEntry(&WmipGEChunkInfo);
    v0 = v2;
    if ( v2 )
    {
      v2[12] = PoolWithTag;
      v2[8] = v2 + 7;
      v2[7] = v2 + 7;
      v2[6] = v2 + 5;
      v2[5] = v2 + 5;
      v2[18] = v2 + 17;
      v2[17] = v2 + 17;
      PoolWithTag[3] = 0LL;
      PoolWithTag[5] = WmipLegacyEtwWorker;
      PoolWithTag[6] = v2;
      PoolWithTag = 0LL;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x70696D57u);
  }
  return v0;
}
