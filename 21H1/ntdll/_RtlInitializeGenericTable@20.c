/*
 * XREFs of _RtlInitializeGenericTable@20 @ 0x4B2EB660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInitializeGenericTable(
        PRTL_GENERIC_TABLE Table,
        PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine,
        PRTL_GENERIC_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_GENERIC_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  Table->TableRoot = 0;
  InitializeListHead(&Table->InsertOrderList);
  Table->OrderedPointer = &Table->InsertOrderList;
  Table->CompareRoutine = CompareRoutine;
  Table->AllocateRoutine = AllocateRoutine;
  Table->FreeRoutine = FreeRoutine;
  Table->NumberGenericTableElements = 0;
  Table->WhichOrderedElement = 0;
  Table->TableContext = TableContext;
}
