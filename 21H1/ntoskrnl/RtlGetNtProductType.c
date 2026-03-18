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

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  char v2; // bl
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
    *a1 = *(_DWORD *)(v5[139] + 16LL);
  }
  else
  {
    v2 = 1;
    if ( MEMORY[0xFFFFF78000000268] )
    {
      *a1 = MEMORY[0xFFFFF78000000264];
    }
    else if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(a1) < 0 )
    {
      *a1 = 1;
      return 0;
    }
  }
  return v2;
}
