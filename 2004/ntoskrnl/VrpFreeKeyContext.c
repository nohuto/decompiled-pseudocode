/*
 * XREFs of VrpFreeKeyContext @ 0x1405CC640
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C9A44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpRegistryCallback @ 0x1405CAF70 (VrpRegistryCallback.c)
 *     VrpPostOpenOrCreate @ 0x1405CB3C0 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14088029C (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140289860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     VrpDecommissionKeyContext @ 0x1405CC678 (VrpDecommissionKeyContext.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall VrpFreeKeyContext(PVOID *P)
{
  VrpDecommissionKeyContext();
  ObDereferenceObjectDeferDeleteWithTag(P[5], 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
