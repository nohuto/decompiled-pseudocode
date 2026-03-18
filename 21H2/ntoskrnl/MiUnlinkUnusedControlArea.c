/*
 * XREFs of MiUnlinkUnusedControlArea @ 0x14028AF80
 * Callers:
 *     MiRemoveUnusedSegment @ 0x140287A2C (MiRemoveUnusedSegment.c)
 *     MiDeleteCachedSegment @ 0x14058A4E8 (MiDeleteCachedSegment.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x14058B540 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14058B784 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiComputePagedPoolSegmentBytes @ 0x1402880B4 (MiComputePagedPoolSegmentBytes.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 */

_QWORD *__fastcall MiUnlinkUnusedControlArea(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  _QWORD *result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  v2 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v3 = MiComputePagedPoolSegmentBytes(a1);
  if ( (*(_DWORD *)(a1 + 56) & 0x40000) != 0 && (*(_DWORD *)(v2 + 1348))-- == 1 )
  {
    KeCancelTimer((PKTIMER)(v2 + 1616));
    *(_BYTE *)(v2 + 1680) = 0;
  }
  result = (_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v5 + 8) != a1 + 8 || (v6 = *(_QWORD **)(a1 + 16), (_QWORD *)*v6 != result) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *(_DWORD *)(a1 + 56) &= ~0x10000000u;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *result = result;
  *(_QWORD *)(v2 + 1696) -= v3;
  _InterlockedExchangeAdd64(&qword_140C4F118, -v3);
  return result;
}
