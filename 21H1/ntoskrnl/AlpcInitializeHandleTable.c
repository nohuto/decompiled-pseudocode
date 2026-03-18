/*
 * XREFs of AlpcInitializeHandleTable @ 0x140649C64
 * Callers:
 *     AlpcpCreateClientPort @ 0x140648EB8 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406D6E78 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1284 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall AlpcInitializeHandleTable(__int64 a1)
{
  PVOID v2; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = ExAllocateFromNPagedLookasideList(&stru_140CEBD80);
  *(_QWORD *)a1 = v2;
  if ( !v2 )
    return 3221225626LL;
  *(_DWORD *)(a1 + 8) = 16;
  memset(v2, 0, 0x80uLL);
  return 0LL;
}
