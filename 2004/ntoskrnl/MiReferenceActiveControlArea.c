/*
 * XREFs of MiReferenceActiveControlArea @ 0x1402285FC
 * Callers:
 *     MiReferenceControlArea @ 0x140228B04 (MiReferenceControlArea.c)
 *     MiReferenceExistingControlArea @ 0x140344320 (MiReferenceExistingControlArea.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x14022865C (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x140228734 (MiBuildWakeList.c)
 */

__int64 __fastcall MiReferenceActiveControlArea(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi

  v4 = MiBuildWakeList(a2, 4LL);
  ++*(_QWORD *)(a2 + 24);
  v5 = v4;
  MiRemoveUnusedSegment(a2);
  if ( (*a1 & 1) != 0 )
    *(_DWORD *)(a2 + 56) |= 0x8000u;
  else
    ++*(_QWORD *)(a2 + 48);
  return v5;
}
