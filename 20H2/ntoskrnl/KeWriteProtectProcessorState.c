/*
 * XREFs of KeWriteProtectProcessorState @ 0x1409A24B0
 * Callers:
 *     MakeGdtReadOnly @ 0x1403B503C (MakeGdtReadOnly.c)
 *     KiDynamicProcessorInitialization @ 0x14051090C (KiDynamicProcessorInitialization.c)
 * Callees:
 *     MmSetPageProtection @ 0x140379A80 (MmSetPageProtection.c)
 *     KeBugCheck @ 0x1403FBC80 (KeBugCheck.c)
 *     VslFinishStartSecureProcessor @ 0x1404FA7D4 (VslFinishStartSecureProcessor.c)
 *     KiShadowProcessorAllocation @ 0x1409A2120 (KiShadowProcessorAllocation.c)
 */

char __fastcall KeWriteProtectProcessorState(__int64 *a1)
{
  __int64 v1; // rsi
  bool v3; // bl
  int v4; // eax
  unsigned int v5; // ecx

  v1 = *a1;
  v3 = VslVsmEnabled != 0;
  LOBYTE(v4) = MmSetPageProtection(a1[7], 0x1000uLL, 2u);
  if ( v3 )
  {
    LOBYTE(v4) = MmSetPageProtection(v1 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL, 2u);
    if ( KiKvaShadow )
      LOBYTE(v4) = MmSetPageProtection(a1[1], 0x1000uLL, 2u);
  }
  v5 = *((_DWORD *)a1 + 105);
  if ( v5 )
  {
    if ( VslVsmEnabled )
      LOBYTE(v4) = VslFinishStartSecureProcessor(v5);
  }
  else
  {
    v4 = KiShadowProcessorAllocation((__int64)(a1 + 48), v1 - 12208);
    if ( !v4 )
      KeBugCheck(0x7Du);
  }
  return v4;
}
