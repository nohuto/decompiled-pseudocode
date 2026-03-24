/*
 * XREFs of ExtEnvZeroMemory @ 0x14036D6F0
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409AA448 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 */

void __stdcall ExtEnvZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
