/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1402E9860
 * Callers:
 *     RtlLookupFunctionEntry @ 0x1402E9520 (RtlLookupFunctionEntry.c)
 *     KiLockServiceTable @ 0x14039C404 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403D88C8 (KiLockExtendedServiceTable.c)
 *     RtlMarkExceptionHandlingPages @ 0x140748A78 (RtlMarkExceptionHandlingPages.c)
 *     CcInitializeBcbProfiler @ 0x140A18354 (CcInitializeBcbProfiler.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
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
