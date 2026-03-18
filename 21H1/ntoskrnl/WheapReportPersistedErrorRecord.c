/*
 * XREFs of WheapReportPersistedErrorRecord @ 0x1405B52BC
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403B68B8 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     WheapWorkQueueAddItem @ 0x1405B7AD8 (WheapWorkQueueAddItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

char __fastcall WheapReportPersistedErrorRecord(_DWORD *Src)
{
  _QWORD *WheaInfo; // rdi
  unsigned int v3; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rbx

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo )
    return 0;
  v3 = Src[5] + 40;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x61656857u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, v3);
  v5[4] = v3;
  v5[6] = 2;
  memmove(v5 + 10, Src, (unsigned int)Src[5]);
  WheapWorkQueueAddItem(WheaInfo[2], v5);
  return 1;
}
