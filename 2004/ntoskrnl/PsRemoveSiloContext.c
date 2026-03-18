/*
 * XREFs of PsRemoveSiloContext @ 0x1409027B0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C9A44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x14090367C (PspSiloInitializeSystemRootBuffer.c)
 * Callees:
 *     PspStorageRemoveObject @ 0x14090BBFC (PspStorageRemoveObject.c)
 */

__int64 __fastcall PsRemoveSiloContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1304);
  else
    v3 = qword_140D24988;
  return PspStorageRemoveObject(v3, a2, 0LL, a3);
}
