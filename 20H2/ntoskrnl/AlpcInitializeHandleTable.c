/*
 * XREFs of AlpcInitializeHandleTable @ 0x1405E82E4
 * Callers:
 *     AlpcpCreateClientPort @ 0x1405E751C (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406CD198 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140205EF4 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall AlpcInitializeHandleTable(__int64 a1)
{
  PVOID v2; // rax

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = ExAllocateFromNPagedLookasideList(&stru_140CEBD00);
  *(_QWORD *)a1 = v2;
  if ( !v2 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 16) = 16LL;
  memset(v2, 0, 0x80uLL);
  return 0LL;
}
