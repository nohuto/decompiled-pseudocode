/*
 * XREFs of ?pop_front@?$deque@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@QEAAXXZ @ 0x1801A5A64
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A4EA0 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800520D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 */

__int64 __fastcall std::deque<CComputeScribbleScheduler::ScribbleFrame>::pop_front(_QWORD *a1)
{
  __int64 result; // rax
  CDrawListEntry *v3; // rcx

  result = a1[1];
  v3 = **(CDrawListEntry ***)(result + 8 * (a1[3] & (a1[2] - 1LL)));
  if ( v3 )
    result = CDrawListEntry::Release(v3);
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
  else
    ++a1[3];
  return result;
}
