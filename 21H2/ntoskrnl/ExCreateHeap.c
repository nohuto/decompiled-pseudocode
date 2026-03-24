/*
 * XREFs of ExCreateHeap @ 0x14039D748
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x14039D5C4 (ExInitializeSessionHeapManager.c)
 *     ExInitializePoolHeapManagement @ 0x1403C3924 (ExInitializePoolHeapManagement.c)
 *     ExInitializePagedHeaps @ 0x1403C3B30 (ExInitializePagedHeaps.c)
 * Callees:
 *     RtlpHpHeapCreate @ 0x14037AF24 (RtlpHpHeapCreate.c)
 */

__int64 __fastcall ExCreateHeap(__int128 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a1;
  v4 = RtlpHpHeapCreate(a2, a2, (__int64)a3, &v6);
  result = 0LL;
  if ( !v4 )
    return 3221225495LL;
  *a3 = v4;
  return result;
}
