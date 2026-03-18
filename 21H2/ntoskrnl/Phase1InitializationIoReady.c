/*
 * XREFs of Phase1InitializationIoReady @ 0x140B020A4
 * Callers:
 *     Phase1Initialization @ 0x14084C160 (Phase1Initialization.c)
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     InbvSetProgressBarSubset @ 0x1403CFCF0 (InbvSetProgressBarSubset.c)
 *     ExLogTimeZoneInformation @ 0x1403DB94C (ExLogTimeZoneInformation.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403DE6E0 (RtlpInitializeNonVolatileFlush.c)
 *     Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled @ 0x140416F1C (Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled.c)
 *     FsRtlInitSystem2 @ 0x1404173C8 (FsRtlInitSystem2.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     VfClearVerifierSettings @ 0x1405FDAE4 (VfClearVerifierSettings.c)
 *     CarInitLogging @ 0x140602EB8 (CarInitLogging.c)
 *     CarReportUnusualShutdown @ 0x140604224 (CarReportUnusualShutdown.c)
 *     ExInitLicenseData @ 0x14082D3F8 (ExInitLicenseData.c)
 *     ExInitializeNls @ 0x14085A828 (ExInitializeNls.c)
 *     ExQueryBootEntropyInformation @ 0x14086423C (ExQueryBootEntropyInformation.c)
 *     VfNotifyVerifierOfEvent @ 0x140A81780 (VfNotifyVerifierOfEvent.c)
 *     CcInitializeCacheManager @ 0x140AFC9DC (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 *     PsInitSystem @ 0x140B02300 (PsInitSystem.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 *     SaveNodeDistanceInformation @ 0x140B063D4 (SaveNodeDistanceInformation.c)
 *     MmInitSystem @ 0x140B07AB0 (MmInitSystem.c)
 *     EmInitSystem @ 0x140B0B630 (EmInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140B1C0FC (BootApplicationPersistentDataProcess.c)
 *     VmInitSystem @ 0x140B1E5EC (VmInitSystem.c)
 *     SeRmInitPhase1 @ 0x140B21F30 (SeRmInitPhase1.c)
 *     CmInitSystem2 @ 0x140B2359C (CmInitSystem2.c)
 *     SmInitSystem @ 0x140B255E4 (SmInitSystem.c)
 *     StartFirstUserProcess @ 0x140B263A0 (StartFirstUserProcess.c)
 *     KeInitializeClock @ 0x140B27884 (KeInitializeClock.c)
 *     MmInitSystemDll @ 0x140B30EE0 (MmInitSystemDll.c)
 *     InitSafeBoot @ 0x140B4B918 (InitSafeBoot.c)
 *     ExInitTraceLogging @ 0x140B5446C (ExInitTraceLogging.c)
 */

__int64 __fastcall Phase1InitializationIoReady(__int64 a1, char a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int inited; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax

  RtlpInitializeNonVolatileFlush();
  v4 = ExInitializeNls();
  if ( v4 < 0 )
    KeBugCheckEx(0x32u, v4, 7uLL, 0LL, 0LL);
  LOBYTE(v5) = CmStateSeparationEnabled != 0;
  v6 = ExpInitializeStateSeparationPhase1(v5);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  CmInitSystem2();
  inited = EmInitSystem(1LL, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset();
  if ( (_DWORD)InitSafeBootMode )
  {
    LOBYTE(v8) = a2;
    InitSafeBoot(v8);
  }
  SmInitSystem(2LL);
  VmInitSystem(2LL);
  MmInitSystem(2LL, a1);
  if ( (unsigned int)Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled() )
    CcInitializeCacheManager(2);
  ObInitSystem(2);
  SaveNodeDistanceInformation();
  if ( !(unsigned __int8)PoInitSystem(3LL, a1, v9) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL);
  KeInitSystem(3LL);
  ExInitTraceLogging();
  ExLogTimeZoneInformation();
  ExInitLicenseData();
  if ( !(unsigned __int8)PsInitSystem(2LL, a1) )
    goto LABEL_28;
  MmInitSystemDll();
  if ( !(unsigned __int8)SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  BootApplicationPersistentDataProcess(2LL);
  if ( !(unsigned __int8)PsInitSystem(3LL, a1) )
LABEL_28:
    KeBugCheck(0x6Bu);
  FsRtlInitSystem2();
  StartFirstUserProcess();
  LODWORD(InitializationPhase) = InitializationPhase + 1;
  ExNotifyCallback(ExCbPhase1InitComplete, 0LL, 0LL);
  if ( ViVerifierEnabled )
  {
    CarInitLogging();
    VfNotifyVerifierOfEvent(5);
  }
  if ( VfClearanceFlag )
    VfClearVerifierSettings();
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) == 0 && !(_DWORD)InitSafeBootMode )
    CarReportUnusualShutdown();
  ExQueryBootEntropyInformation(0LL);
  result = KeInitSystem(4LL);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  return result;
}
