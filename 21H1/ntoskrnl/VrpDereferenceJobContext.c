/*
 * XREFs of VrpDereferenceJobContext @ 0x1405C8980
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x140200010 (VrpOriginalKeyNameParameterCleanup.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C8674 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
