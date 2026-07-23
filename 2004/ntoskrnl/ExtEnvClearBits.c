/*
 * XREFs of ExtEnvClearBits @ 0x1404D0414
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409A75E8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     RtlClearBits @ 0x140281070 (RtlClearBits.c)
 */

void __fastcall ExtEnvClearBits(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}
