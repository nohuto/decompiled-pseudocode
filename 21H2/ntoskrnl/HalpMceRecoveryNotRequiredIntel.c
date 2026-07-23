/*
 * XREFs of HalpMceRecoveryNotRequiredIntel @ 0x1404D08A4
 * Callers:
 *     HalpMceRecovery @ 0x1404D04E0 (HalpMceRecovery.c)
 * Callees:
 *     HalpMemoryErrorDeferredRecovery @ 0x1404D0170 (HalpMemoryErrorDeferredRecovery.c)
 */

__int64 __fastcall HalpMceRecoveryNotRequiredIntel(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = a1[5];
  result = 0LL;
  if ( ((v1 & 0x4000000000000000LL) == 0 || HalpMcaOverflowRecoverySupported)
    && (v1 & 0x100000000000000LL) != 0
    && ((v1 & 0xEF80) == 0x80 || (v1 & 0xEF00) == 0x100 && (v1 & 3) == 2 && (unsigned __int8)v1 >> 4 == 7)
    && (v1 & 0xC00000000000000LL) == 0xC00000000000000LL )
  {
    v4 = a1[7];
    if ( (a1[7] & 0x1C0LL) == 0x80 )
      return HalpMemoryErrorDeferredRecovery(
               HalpMcaPhysicalAddressMask & a1[6] & ~((1LL << (v4 & 0x3F)) - 1),
               0,
               0LL,
               0,
               v1,
               0,
               1,
               0);
  }
  return result;
}
