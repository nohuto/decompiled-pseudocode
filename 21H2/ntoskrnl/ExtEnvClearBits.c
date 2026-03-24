/*
 * XREFs of ExtEnvClearBits @ 0x1404D5384
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409AA448 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     RtlClearBits @ 0x140206E00 (RtlClearBits.c)
 */

void __fastcall ExtEnvClearBits(RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}
