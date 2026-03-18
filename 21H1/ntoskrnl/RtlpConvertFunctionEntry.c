/*
 * XREFs of RtlpConvertFunctionEntry @ 0x14032E9A0
 * Callers:
 *     RtlLookupFunctionEntry @ 0x14032E660 (RtlLookupFunctionEntry.c)
 *     KiLockServiceTable @ 0x14039BC74 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403D7A88 (KiLockExtendedServiceTable.c)
 *     RtlMarkExceptionHandlingPages @ 0x140746EF8 (RtlMarkExceptionHandlingPages.c)
 *     CcInitializeBcbProfiler @ 0x140A18354 (CcInitializeBcbProfiler.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
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
