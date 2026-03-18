/*
 * XREFs of ntoskrnl_27 @ 0x140674760
 * Callers:
 *     NtQueryLicenseValue @ 0x1406747F0 (NtQueryLicenseValue.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     SLQueryLicenseValueInternal @ 0x140791E84 (SLQueryLicenseValueInternal.c)
 */

__int64 __fastcall ntoskrnl_27(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v9; // rcx

  v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( qword_140D2C4F8 )
    return qword_140D2C4F8(v9, a1, a2, a3, a4, a5);
  else
    return SLQueryLicenseValueInternal(v9, a1, a2, a3, a4, a5);
}
