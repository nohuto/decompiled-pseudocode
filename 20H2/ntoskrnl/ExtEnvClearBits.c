/*
 * XREFs of ExtEnvClearBits @ 0x1404D39B4
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409AD558 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     RtlClearBits @ 0x140268180 (RtlClearBits.c)
 */

void __fastcall ExtEnvClearBits(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}
