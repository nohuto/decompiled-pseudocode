/*
 * XREFs of ObKillProcess @ 0x1405D8378
 * Callers:
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140203230 (IoSetThreadHardErrorMode.c)
 *     ExSweepHandleTable @ 0x1405D5FF0 (ExSweepHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1405D6158 (ExpRemoveHandleTable.c)
 *     ExpFreeHandleTable @ 0x1405D6204 (ExpFreeHandleTable.c)
 */

void __fastcall ObKillProcess(_KPROCESS *a1)
{
  _QWORD *v1; // rdi
  BOOLEAN v3; // bl
  _DWORD *v4; // r9

  v1 = (_QWORD *)a1[1].AffinityPadding[8];
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(a1, (__int64)v1, 0, v4);
    IoSetThreadHardErrorMode(v3);
    a1[1].AffinityPadding[8] = 0LL;
    ExpRemoveHandleTable((__int64)v1);
    ExpFreeHandleTable(v1);
  }
}
