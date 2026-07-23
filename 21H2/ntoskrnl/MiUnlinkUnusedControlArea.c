/*
 * XREFs of MiUnlinkUnusedControlArea @ 0x140362218
 * Callers:
 *     MiRemoveUnusedSegment @ 0x1403620F8 (MiRemoveUnusedSegment.c)
 *     MiDeleteCachedSegment @ 0x140528DF8 (MiDeleteCachedSegment.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140529FA8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14052A1D8 (MiProcessDeleteOnClose.c)
 * Callees:
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     MiComputePagedPoolSegmentBytes @ 0x1403623AC (MiComputePagedPoolSegmentBytes.c)
 */

_QWORD *__fastcall MiUnlinkUnusedControlArea(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  _QWORD *result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  v2 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v3 = MiComputePagedPoolSegmentBytes();
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
  *(_DWORD *)(a1 + 56) &= ~0x8000000u;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *result = result;
  *(_QWORD *)(v2 + 1696) -= v3;
  _InterlockedExchangeAdd64(&qword_140C4C9D8, -v3);
  return result;
}
