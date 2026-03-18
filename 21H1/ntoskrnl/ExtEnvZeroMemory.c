/*
 * XREFs of ExtEnvZeroMemory @ 0x14036A720
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409A67A8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void __stdcall ExtEnvZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
