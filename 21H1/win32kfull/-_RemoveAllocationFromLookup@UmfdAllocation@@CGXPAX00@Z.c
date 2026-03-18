/*
 * XREFs of ?_RemoveAllocationFromLookup@UmfdAllocation@@CGXPAX00@Z @ 0xCFE0A
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z @ 0xCFE32 (-Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z.c)
 */

void __stdcall UmfdAllocation::_RemoveAllocationFromLookup(void *a1, _DWORD *a2, void *a3)
{
  void *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = 0;
  NSInstrumentation::CPointerHashTable::Remove(UmfdAllocation::s_allocationLookup, a1, &v3);
  *(a2 - 2) = 0;
}
