/*
 * XREFs of ExUpdateLicenseData @ 0x1406EB170
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA6E0 (SLUpdateLicenseDataInternal.c)
 */

__int64 ExUpdateLicenseData()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // r9d

  v1 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( qword_140D3B4D0 )
    return qword_140D3B4D0(v1, v2, v0);
  else
    return SLUpdateLicenseDataInternal(v1, v2, v0);
}
