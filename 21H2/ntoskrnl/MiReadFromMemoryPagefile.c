/*
 * XREFs of MiReadFromMemoryPagefile @ 0x14059A410
 * Callers:
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiPfExecuteReadList @ 0x1406F4E78 (MiPfExecuteReadList.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MiTransferMemoryPagefileData @ 0x14059A568 (MiTransferMemoryPagefileData.c)
 */

LONG __fastcall MiReadFromMemoryPagefile(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  MiTransferMemoryPagefileData(a1, a2 + 272, *(_QWORD *)(a2 + 96) >> 12, 1LL);
  v3 = *(unsigned int *)(a2 + 312);
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a2 + 88) = v3;
  return KeSetEvent((PRKEVENT)(a2 + 32), 0, 0);
}
