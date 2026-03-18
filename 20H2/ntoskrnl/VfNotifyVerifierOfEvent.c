/*
 * XREFs of VfNotifyVerifierOfEvent @ 0x1409C9060
 * Callers:
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x1409ADED8 (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x1409BA028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409BA190 (KdExitDebugger.c)
 *     IoInitSystem @ 0x140A4899C (IoInitSystem.c)
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 * Callees:
 *     VfClearVerifierSettings @ 0x14059E8B0 (VfClearVerifierSettings.c)
 *     VfUtilDbgPrint @ 0x14059ECC4 (VfUtilDbgPrint.c)
 *     VfNotifyDifPlugins @ 0x1409CB9B8 (VfNotifyDifPlugins.c)
 *     VfNotifyVerifierExtensions @ 0x1409CBA98 (VfNotifyVerifierExtensions.c)
 *     VfInitializeBranchTracing @ 0x1409DB3A4 (VfInitializeBranchTracing.c)
 *     VfStartBranchTracing @ 0x1409DB53C (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x1409DB5C8 (VfStopBranchTracing.c)
 */

void __fastcall VfNotifyVerifierOfEvent(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int started; // eax
  __int32 v6; // r9d
  int v7; // eax

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( !v2 )
      {
        _InterlockedAdd(&dword_140C1CF68, 1u);
        _InterlockedExchange(&ViKeTrackIrqlDisabled, 1);
        VfStopBranchTracing();
        _InterlockedExchange(&ViFaultsDisabled, v6);
        return;
      }
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            _InterlockedAdd(&dword_140C1CF74, 1u);
            started = VfStartBranchTracing();
            if ( started < 0 && (MmVerifierData & 0x8000000) != 0 )
              VfUtilDbgPrint("Failed to start branch tracing. <Status == 0x%08X>\n", started);
            if ( (VfOptionFlags & 0x10) != 0 )
            {
              VfUtilDbgPrint("Driver Verifier: VERIFIER_OPTION_ONEBOOT set before boot. Clearing Verifier options from Registry.\n");
              VfClearVerifierSettings();
            }
            VfNotifyVerifierExtensions(0LL, 2LL);
            VfNotifyDifPlugins(0LL, 0LL);
          }
        }
        else
        {
          _InterlockedAdd(&dword_140C1CF70, 1u);
          VfStartBranchTracing();
        }
        return;
      }
      _InterlockedAdd(&dword_140C1CF6C, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_140C1CF64, 1u);
    }
    VfStopBranchTracing();
    return;
  }
  _InterlockedAdd(&ViNotifyEvent, 1u);
  v7 = VfInitializeBranchTracing();
  if ( v7 < 0 && (MmVerifierData & 0x8000000) != 0 )
    VfUtilDbgPrint("Failed to initialize branch tracing. <Status == 0x%08X>\n", v7);
}
