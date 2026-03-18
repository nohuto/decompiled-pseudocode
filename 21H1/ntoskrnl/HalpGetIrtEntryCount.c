/*
 * XREFs of HalpGetIrtEntryCount @ 0x1404CC188
 * Callers:
 *     HalpIommuInitializeAll @ 0x140996A44 (HalpIommuInitializeAll.c)
 *     HsaInitializeInterruptRemapping @ 0x1409A67A8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
