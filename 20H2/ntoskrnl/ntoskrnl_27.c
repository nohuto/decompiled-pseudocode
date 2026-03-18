/*
 * XREFs of ntoskrnl_27 @ 0x14062C800
 * Callers:
 *     NtQueryLicenseValue @ 0x14062C890 (NtQueryLicenseValue.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     SLQueryLicenseValueInternal @ 0x1407A0F5C (SLQueryLicenseValueInternal.c)
 */

__int64 __fastcall ntoskrnl_27(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v9; // rcx

  v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( qword_140D2D500 )
    return qword_140D2D500(v9, a1, a2, a3, a4, a5);
  else
    return SLQueryLicenseValueInternal(v9, a1, a2, a3, a4, a5);
}
