/*
 * XREFs of HalpGetIrtEntryCount @ 0x1404CC638
 * Callers:
 *     HalpIommuInitializeAll @ 0x140997E14 (HalpIommuInitializeAll.c)
 *     HsaInitializeInterruptRemapping @ 0x1409A75E8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
