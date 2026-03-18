/*
 * XREFs of ObKillProcess @ 0x14070BCA4
 * Callers:
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     ExpFreeHandleTable @ 0x1406AC130 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406AC404 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x1407A2CB0 (ExSweepHandleTable.c)
 */

void __fastcall ObKillProcess(__int64 a1)
{
  _QWORD *v1; // rdi
  BOOLEAN v3; // bl

  v1 = *(_QWORD **)(a1 + 1392);
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(a1, v1, 0LL);
    IoSetThreadHardErrorMode(v3);
    *(_QWORD *)(a1 + 1392) = 0LL;
    ExpRemoveHandleTable((__int64)v1);
    ExpFreeHandleTable(v1);
  }
}
