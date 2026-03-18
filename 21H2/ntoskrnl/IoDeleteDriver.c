/*
 * XREFs of IoDeleteDriver @ 0x140936380
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140857064 (EtwTiLogDriverObjectUnLoad.c)
 */

LONG_PTR __fastcall IoDeleteDriver(unsigned __int16 *Object)
{
  EtwTiLogDriverObjectUnLoad(Object + 28);
  ObMakeTemporaryObject(Object);
  return ObfDereferenceObject(Object);
}
