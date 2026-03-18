/*
 * XREFs of ExUpdateLicenseData @ 0x1406E4160
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 */

__int64 __fastcall ExUpdateLicenseData(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( qword_140D2D520 )
    return qword_140D2D520(v4, a1, a2);
  else
    return SLUpdateLicenseDataInternal(v4, a1, a2);
}
