/*
 * XREFs of DifpExAllocatePoolWithTagPriority_LwSP_Enter @ 0x140AA6D70
 * Callers:
 *     <none>
 * Callees:
 *     DifpLwSPProcessPrePoolAlloc @ 0x140AA6E1C (DifpLwSPProcessPrePoolAlloc.c)
 */

__int64 __fastcall DifpExAllocatePoolWithTagPriority_LwSP_Enter(__int64 a1)
{
  return DifpLwSPProcessPrePoolAlloc(*(unsigned int *)(a1 + 36), *(_QWORD *)(a1 + 40));
}
