/*
 * XREFs of CmAllocateExtraParameter @ 0x1405D3740
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1405D4420 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x1405D4868 (VrpPreOpenOrCreate.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 */

_QWORD *__fastcall CmAllocateExtraParameter(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  _QWORD *result; // rax
  _QWORD *v5; // rbx

  result = CmpAllocateTransientPoolWithTag(PagedPool, 0x50uLL, 0x50454D43u, a4);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0x50uLL);
    v5[5] = 32LL;
    v5[4] = VrpOriginalKeyNameParameterCleanup;
    result = v5 + 6;
    *((_OWORD *)v5 + 1) = VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
  }
  return result;
}
