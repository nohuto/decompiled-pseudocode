/*
 * XREFs of HalpMceRecoveryNotRequiredAmd @ 0x1404D07DC
 * Callers:
 *     HalpMceRecovery @ 0x1404D04E0 (HalpMceRecovery.c)
 * Callees:
 *     HalpMemoryErrorDeferredRecovery @ 0x1404D0170 (HalpMemoryErrorDeferredRecovery.c)
 */

char __fastcall HalpMceRecoveryNotRequiredAmd(__int64 a1)
{
  __int64 v1; // rdx
  char result; // al
  char v3; // al
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  result = 0;
  if ( (v1 & 0x4000000000000000LL) == 0 || HalpMcaOverflowRecoverySupported )
  {
    result = v1 & 0x80;
    if ( (v1 & 0xEF80) == 0x80
      || *(_DWORD *)(a1 + 4) == 2 && (result = 0, (v1 & 0xEF00) == 0x100) && (result = v1 & 3, (v1 & 3) != 1) )
    {
      result = 0;
      if ( (v1 & 0x400000000000000LL) != 0 )
      {
        v3 = 0;
        v4 = *(_QWORD *)(a1 + 48);
        if ( HalpMcaScalableRasSupported )
          v3 = (v1 & 0x100000000000LL) != 0;
        return HalpMemoryErrorDeferredRecovery(v4, 0, 0LL, 0, v1, 0, 1, v3);
      }
    }
  }
  return result;
}
