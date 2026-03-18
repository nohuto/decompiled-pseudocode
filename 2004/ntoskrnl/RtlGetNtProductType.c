/*
 * XREFs of RtlGetNtProductType @ 0x140350110
 * Callers:
 *     IoFillDumpHeader @ 0x1404FC6A8 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1404FFBF0 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x1405338EC (MmWriteTriageInformation.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140634700 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlGetVersion @ 0x1406FBC60 (RtlGetVersion.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409122B8 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x1402BE900 (PsGetThreadServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140768444 (RtlpGetNtProductTypeFromRegistry.c)
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
    *a1 = *(_DWORD *)(v5[140] + 16LL);
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
