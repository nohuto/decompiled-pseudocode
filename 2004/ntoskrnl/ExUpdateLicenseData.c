/*
 * XREFs of ExUpdateLicenseData @ 0x140711660
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
 */

__int64 __fastcall ExUpdateLicenseData(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( qword_140D2D518 )
    return qword_140D2D518(v4, a1, a2);
  else
    return SLUpdateLicenseDataInternal(v4, a1, a2);
}
