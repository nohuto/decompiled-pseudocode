/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJPEAUIPolicyConfigInternal@@@Z @ 0x180056570
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@@Z @ 0x1800564D8 (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPol.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristicsCache::RuntimeClassInitialize(
        RTL_SRWLOCK *this,
        struct IPolicyConfigInternal *a2)
{
  __int64 v3; // rbx

  InitializeSRWLock(this + 2);
  v3 = g_policyConfigInternal;
  g_policyConfigInternal = (__int64)a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IPolicyConfigInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
