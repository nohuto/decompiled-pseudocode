/*
 * XREFs of RtlGetNtProductType @ 0x1403207E0
 * Callers:
 *     IoFillDumpHeader @ 0x1404FFF78 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1405034C0 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x1405372BC (MmWriteTriageInformation.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1405D9630 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlGetVersion @ 0x1406CE590 (RtlGetVersion.c)
 *     RtlRestoreBootStatusDefaults @ 0x140917DF8 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140297450 (PsGetThreadServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F1894 (KeIsExecutingInArbitraryThreadContext.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140776A4C (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __cdecl RtlGetNtProductType(PNT_PRODUCT_TYPE NtProductType)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  BOOLEAN v4; // bl
  __int64 ThreadServerSilo; // rax
  _QWORD *v6; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(v3, v2)
      || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
    {
      v6 = &PspHostSiloGlobals;
    }
    else
    {
      v6 = *(_QWORD **)(ThreadServerSilo + 1272);
    }
    v4 = 1;
    *NtProductType = *(PNT_PRODUCT_TYPE)(v6[141] + 16LL);
  }
  else
  {
    v4 = 1;
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
  return v4;
}
