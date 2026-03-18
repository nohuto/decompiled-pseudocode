/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1402E6500
 * Callers:
 *     RtlLookupFunctionEntry @ 0x1402E61C0 (RtlLookupFunctionEntry.c)
 *     KiLockServiceTable @ 0x14039F554 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403DB558 (KiLockExtendedServiceTable.c)
 *     RtlMarkExceptionHandlingPages @ 0x140757658 (RtlMarkExceptionHandlingPages.c)
 *     CcInitializeBcbProfiler @ 0x140A1E354 (CcInitializeBcbProfiler.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpConvertFunctionEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    v2 = *(unsigned int *)(a1 + 8);
    if ( (v2 & 1) != 0 )
    {
      a1 = v2 + a2 - 1;
      if ( a2 <= 0x7FFFFFFEFFFFLL && (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
  }
  return a1;
}
