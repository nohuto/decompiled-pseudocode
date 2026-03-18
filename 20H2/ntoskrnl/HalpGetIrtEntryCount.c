/*
 * XREFs of HalpGetIrtEntryCount @ 0x1404CFB98
 * Callers:
 *     HalpIommuInitializeAll @ 0x14099DE54 (HalpIommuInitializeAll.c)
 *     HsaInitializeInterruptRemapping @ 0x1409AD558 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
