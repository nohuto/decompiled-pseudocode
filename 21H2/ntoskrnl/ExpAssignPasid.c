/*
 * XREFs of ExpAssignPasid @ 0x140A02994
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExpFreeAsid @ 0x140640EE8 (ExpFreeAsid.c)
 */

__int64 __fastcall ExpAssignPasid(volatile signed __int32 *Object, signed __int32 a2)
{
  ObfReferenceObject((PVOID)Object);
  if ( !_InterlockedCompareExchange(Object + 544, a2, 0) )
    return 1LL;
  ExpFreeAsid(a2 - 1);
  ObfDereferenceObject((PVOID)Object);
  return 0LL;
}
