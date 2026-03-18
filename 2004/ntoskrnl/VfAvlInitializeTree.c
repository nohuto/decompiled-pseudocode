/*
 * XREFs of VfAvlInitializeTree @ 0x14059D11C
 * Callers:
 *     VfInitVerifierComponents @ 0x1409C3E60 (VfInitVerifierComponents.c)
 * Callees:
 *     VfAvlInitializeTreeEx @ 0x1409BF634 (VfAvlInitializeTreeEx.c)
 */

__int64 __fastcall VfAvlInitializeTree(void *a1, __int64 a2, __int64 a3, RTL_AVL_FREE_ROUTINE *FreeRoutine)
{
  return VfAvlInitializeTreeEx(a1, FreeRoutine);
}
