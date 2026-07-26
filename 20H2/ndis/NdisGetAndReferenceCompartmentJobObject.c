/*
 * XREFs of NdisGetAndReferenceCompartmentJobObject @ 0x1C00B0B50
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfGetCompartmentJobObject @ 0x1C00B07D4 (ndisIfGetCompartmentJobObject.c)
 */

__int64 __fastcall NdisGetAndReferenceCompartmentJobObject(unsigned int a1, unsigned int *a2, __int64 a3)
{
  return ndisIfGetCompartmentJobObject(a1, a2, a3);
}
