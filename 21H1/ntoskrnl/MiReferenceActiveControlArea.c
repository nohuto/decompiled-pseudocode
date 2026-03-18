/*
 * XREFs of MiReferenceActiveControlArea @ 0x14028164C
 * Callers:
 *     MiReferenceControlArea @ 0x140281B54 (MiReferenceControlArea.c)
 *     MiReferenceExistingControlArea @ 0x14030651C (MiReferenceExistingControlArea.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x1402816AC (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x140281784 (MiBuildWakeList.c)
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
