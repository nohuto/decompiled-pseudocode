/*
 * XREFs of HalpGetIrtEntryCount @ 0x14051DB18
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A543D8 (HalpIommuInitializeAll.c)
 *     HsaInitializeInterruptRemapping @ 0x140A64868 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
