/*
 * XREFs of RtlGetNtProductType @ 0x140312380
 * Callers:
 *     IoFillDumpHeader @ 0x1404FC058 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1404FF5A0 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x14053329C (MmWriteTriageInformation.c)
 *     RtlGetVersion @ 0x1406D8200 (RtlGetVersion.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140702DB0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlRestoreBootStatusDefaults @ 0x140910F38 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14022BC80 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14076605C (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __cdecl RtlGetNtProductType(PNT_PRODUCT_TYPE NtProductType)
{
  BOOLEAN v2; // bl
  __int64 ThreadServerSilo; // rax
  _QWORD *v5; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
    if ( ThreadServerSilo )
      v5 = *(_QWORD **)(ThreadServerSilo + 1272);
    else
      v5 = &PspHostSiloGlobals;
    v2 = 1;
    *NtProductType = *(PNT_PRODUCT_TYPE)(v5[139] + 16LL);
  }
  else
  {
    v2 = 1;
    if ( MEMORY[0xFFFFF78000000268] )
    {
      *NtProductType = MEMORY[0xFFFFF78000000264];
    }
    else if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(NtProductType) < 0 )
    {
      *NtProductType = NtProductWinNt;
      return 0;
    }
  }
  return v2;
}
