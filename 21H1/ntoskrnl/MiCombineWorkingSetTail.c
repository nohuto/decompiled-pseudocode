/*
 * XREFs of MiCombineWorkingSetTail @ 0x140557310
 * Callers:
 *     MiCombinePte @ 0x140556E10 (MiCombinePte.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x1402FC23C (MiReleaseWalkLocks.c)
 *     MiProcessCrcList @ 0x140712D40 (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineWorkingSetTail(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx

  v3 = *(_QWORD **)(a1 + 168);
  if ( v3[1] )
  {
    MiReleaseWalkLocks(a1, a2, a3);
    MiProcessCrcList(
      v3[3],
      v3[4],
      v3[1],
      *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL));
    v3[1] = 0LL;
  }
  return 0LL;
}
