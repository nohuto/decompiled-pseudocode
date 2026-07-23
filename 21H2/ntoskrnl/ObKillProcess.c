/*
 * XREFs of ObKillProcess @ 0x1406F2C20
 * Callers:
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402F4B10 (IoSetThreadHardErrorMode.c)
 *     ExpFreeHandleTable @ 0x1406F3AA8 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406F3C54 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x1406F3D00 (ExSweepHandleTable.c)
 */

void __fastcall ObKillProcess(__int64 a1)
{
  void *v1; // rdi
  BOOLEAN v3; // bl

  v1 = *(void **)(a1 + 1392);
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(a1, v1, 0LL);
    IoSetThreadHardErrorMode(v3);
    *(_QWORD *)(a1 + 1392) = 0LL;
    ExpRemoveHandleTable(v1);
    ExpFreeHandleTable(v1);
  }
}
