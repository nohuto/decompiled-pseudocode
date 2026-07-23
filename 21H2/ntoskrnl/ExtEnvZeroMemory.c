/*
 * XREFs of ExtEnvZeroMemory @ 0x14036D8A0
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409AB378 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void __stdcall ExtEnvZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
