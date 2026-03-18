/*
 * XREFs of SeCodeIntegrityQueryInformation @ 0x1406CEFD0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     PsNotifyCoreDriversInitialized @ 0x140A5E3F4 (PsNotifyCoreDriversInitialized.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityQueryInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v5; // ecx

  v3 = a3;
  if ( !qword_140C1D958 )
    return 3221225473LL;
  v5 = (unsigned __int8)SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v5 = (unsigned __int8)SeILSigningPolicyRuntime;
  LOBYTE(a3) = v5 != 0;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_140C1D958)(a1, a2, a3, v3);
}
