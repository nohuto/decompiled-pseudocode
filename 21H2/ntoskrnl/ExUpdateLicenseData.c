/*
 * XREFs of ExUpdateLicenseData @ 0x140622A20
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
 */

__int64 __fastcall ExUpdateLicenseData(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx

  v3 = a1;
  v4 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 113);
  if ( qword_140D2D500 )
    return qword_140D2D500(v4, v3, a2);
  else
    return SLUpdateLicenseDataInternal(v4, v3, a2);
}
