/*
 * XREFs of ExtEnvClearBits @ 0x140522654
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140A64868 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 */

void __fastcall ExtEnvClearBits(RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}
