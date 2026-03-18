/*
 * XREFs of ObKillProcess @ 0x14065E678
 * Callers:
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14027C5F0 (IoSetThreadHardErrorMode.c)
 *     ExSweepHandleTable @ 0x14065C780 (ExSweepHandleTable.c)
 *     ExpRemoveHandleTable @ 0x14065C8E8 (ExpRemoveHandleTable.c)
 *     ExpFreeHandleTable @ 0x14065C994 (ExpFreeHandleTable.c)
 */

void __fastcall ObKillProcess(_KPROCESS *a1)
{
  _QWORD *v1; // rdi
  BOOLEAN v3; // bl

  v1 = (_QWORD *)a1[1].AffinityPadding[8];
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(a1, (__int64)v1, 0);
    IoSetThreadHardErrorMode(v3);
    a1[1].AffinityPadding[8] = 0LL;
    ExpRemoveHandleTable((__int64)v1);
    ExpFreeHandleTable(v1);
  }
}
