/*
 * XREFs of HalpGetIrtEntryCount @ 0x1404D1568
 * Callers:
 *     HalpIommuInitializeAll @ 0x14099B3D4 (HalpIommuInitializeAll.c)
 *     HsaInitializeInterruptRemapping @ 0x1409AA448 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
