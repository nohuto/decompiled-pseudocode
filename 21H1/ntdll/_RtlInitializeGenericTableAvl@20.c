/*
 * XREFs of _RtlInitializeGenericTableAvl@20 @ 0x4B2ED5D0
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void __cdecl RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  size_t v5; // [esp-4h] [ebp-8h]

  LODWORD(v5) = 56;
  memset(Table, 0, v5);
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__stdcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->AllocateRoutine = (void *(__stdcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
  Table->FreeRoutine = (void (__stdcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->TableContext = TableContext;
}
