/*
 * XREFs of ObKillProcess @ 0x140632108
 * Callers:
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14023DB40 (IoSetThreadHardErrorMode.c)
 *     ExSweepHandleTable @ 0x140631740 (ExSweepHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406318A8 (ExpRemoveHandleTable.c)
 *     ExpFreeHandleTable @ 0x140631954 (ExpFreeHandleTable.c)
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
