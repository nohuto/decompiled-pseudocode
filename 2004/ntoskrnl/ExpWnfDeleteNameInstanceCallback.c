/*
 * XREFs of ExpWnfDeleteNameInstanceCallback @ 0x14070F578
 * Callers:
 *     ExpWnfFreeScopeInstance @ 0x14070D1B0 (ExpWnfFreeScopeInstance.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExpWnfDeleteNameInstance @ 0x140620DAC (ExpWnfDeleteNameInstance.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstanceCallback(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rbx

  v2 = (struct _EX_RUNDOWN_REF *)(a1 - 16);
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 - 16 + 8));
  return ExpWnfDeleteNameInstance(a2, v2, 0);
}
