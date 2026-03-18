/*
 * XREFs of ExtEnvZeroMemory @ 0x14036B0E0
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409A75E8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void __stdcall ExtEnvZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
