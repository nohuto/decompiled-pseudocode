/*
 * XREFs of ExtEnvZeroMemory @ 0x14036D0C0
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409AD558 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

void __stdcall ExtEnvZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
