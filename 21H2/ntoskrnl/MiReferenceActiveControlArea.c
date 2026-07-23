/*
 * XREFs of MiReferenceActiveControlArea @ 0x140362098
 * Callers:
 *     MiReferenceExistingControlArea @ 0x140262384 (MiReferenceExistingControlArea.c)
 *     MiReferenceControlArea @ 0x140361574 (MiReferenceControlArea.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x1403620F8 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1403621D0 (MiBuildWakeList.c)
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
