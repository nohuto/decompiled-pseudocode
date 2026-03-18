/*
 * XREFs of VrpFreeKeyContext @ 0x1405CB270
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C8674 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpRegistryCallback @ 0x1405C9BA0 (VrpRegistryCallback.c)
 *     VrpPostOpenOrCreate @ 0x1405C9FF0 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14087EFAC (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14024CFC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     VrpDecommissionKeyContext @ 0x1405CB2A8 (VrpDecommissionKeyContext.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall VrpFreeKeyContext(PVOID *P)
{
  VrpDecommissionKeyContext();
  ObDereferenceObjectDeferDeleteWithTag(P[5], 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
