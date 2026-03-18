/*
 * XREFs of ExUpdateLicenseData @ 0x1406EDCD0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
 */

__int64 __fastcall ExUpdateLicenseData(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( qword_140D2C518 )
    return qword_140D2C518(v4, a1, a2);
  else
    return SLUpdateLicenseDataInternal(v4, a1, a2);
}
