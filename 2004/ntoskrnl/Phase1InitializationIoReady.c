/*
 * XREFs of Phase1InitializationIoReady @ 0x140A447A8
 * Callers:
 *     Phase1Initialization @ 0x140786180 (Phase1Initialization.c)
 * Callees:
 *     ExNotifyCallback @ 0x14033CED0 (ExNotifyCallback.c)
 *     InbvSetProgressBarSubset @ 0x1403B0840 (InbvSetProgressBarSubset.c)
 *     ExLogTimeZoneInformation @ 0x1403B09C4 (ExLogTimeZoneInformation.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403CBFA4 (RtlpInitializeNonVolatileFlush.c)
 *     KeBugCheck @ 0x1403F70B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     VfClearVerifierSettings @ 0x14059AE10 (VfClearVerifierSettings.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14077ACB4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ExQueryBootEntropyInformation @ 0x140786960 (ExQueryBootEntropyInformation.c)
 *     ExInitLicenseData @ 0x1407943A8 (ExInitLicenseData.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C3040 (VfNotifyVerifierOfEvent.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 *     EmInitSystem @ 0x140A4009C (EmInitSystem.c)
 *     CmInitSystem2 @ 0x140A42768 (CmInitSystem2.c)
 *     SaveNodeDistanceInformation @ 0x140A427D0 (SaveNodeDistanceInformation.c)
 *     KeInitializeClock @ 0x140A428AC (KeInitializeClock.c)
 *     MmInitSystemDll @ 0x140A42ACC (MmInitSystemDll.c)
 *     BootApplicationPersistentDataProcess @ 0x140A42FD0 (BootApplicationPersistentDataProcess.c)
 *     StartFirstUserProcess @ 0x140A44218 (StartFirstUserProcess.c)
 *     PsInitSystem @ 0x140A44918 (PsInitSystem.c)
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 *     KiInitializeReservedCpuSets @ 0x140A4555C (KiInitializeReservedCpuSets.c)
 *     MmInitSystem @ 0x140A520E4 (MmInitSystem.c)
 *     VmInitSystem @ 0x140A5E40C (VmInitSystem.c)
 *     SeRmInitPhase1 @ 0x140A63E7C (SeRmInitPhase1.c)
 *     PspInitPhase3 @ 0x140A70F94 (PspInitPhase3.c)
 *     InitSafeBoot @ 0x140A89860 (InitSafeBoot.c)
 */

__int64 __fastcall Phase1InitializationIoReady(__int64 a1, char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int inited; // eax
  __int64 v7; // rcx
  __int64 result; // rax

  RtlpInitializeNonVolatileFlush();
  LOBYTE(v4) = CmStateSeparationEnabled != 0;
  v5 = ExpInitializeStateSeparationPhase1(v4);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  CmInitSystem2();
  inited = EmInitSystem(1, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset();
  if ( InitSafeBootMode )
  {
    LOBYTE(v7) = a2;
    InitSafeBoot(v7);
  }
  VmInitSystem(2LL);
  MmInitSystem(2LL, a1);
  SaveNodeDistanceInformation();
  if ( !PoInitSystem(3, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL, a1);
  KiInitializeReservedCpuSets();
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C02C20, 0LL, 0LL);
  ExLogTimeZoneInformation();
  ExInitLicenseData();
  if ( !(unsigned __int8)PsInitSystem(2LL, a1) )
    goto LABEL_21;
  MmInitSystemDll();
  if ( !(unsigned __int8)SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  BootApplicationPersistentDataProcess(2LL);
  if ( !(unsigned __int8)PspInitPhase3() )
LABEL_21:
    KeBugCheck(0x6Bu);
  StartFirstUserProcess();
  LODWORD(InitializationPhase) = InitializationPhase + 1;
  ExNotifyCallback(ExCbPhase1InitComplete, 0LL, 0LL);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(5);
  if ( VfClearanceFlag )
    VfClearVerifierSettings();
  ExQueryBootEntropyInformation(0LL);
  result = KeInitSystem(4LL);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  return result;
}
