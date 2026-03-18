/*
 * XREFs of MiCombineWorkingSetTail @ 0x140557960
 * Callers:
 *     MiCombinePte @ 0x140557460 (MiCombinePte.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x140339578 (MiReleaseWalkLocks.c)
 *     MiProcessCrcList @ 0x1407150D0 (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineWorkingSetTail(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 168);
  if ( v1[1] )
  {
    MiReleaseWalkLocks(a1);
    MiProcessCrcList(
      v1[3],
      v1[4],
      v1[1],
      *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL));
    v1[1] = 0LL;
  }
  return 0LL;
}
