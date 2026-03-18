/*
 * XREFs of VrpDereferenceJobContext @ 0x1405CFF08
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x140200010 (VrpOriginalKeyNameParameterCleanup.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405CFBFC (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
