/*
 * XREFs of Phase1InitializationIoReady @ 0x140A4AA48
 * Callers:
 *     Phase1Initialization @ 0x140793E90 (Phase1Initialization.c)
 * Callees:
 *     ExNotifyCallback @ 0x14030FBB0 (ExNotifyCallback.c)
 *     InbvSetProgressBarSubset @ 0x1403B31B0 (InbvSetProgressBarSubset.c)
 *     ExLogTimeZoneInformation @ 0x1403B3334 (ExLogTimeZoneInformation.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403CEBC4 (RtlpInitializeNonVolatileFlush.c)
 *     KeBugCheck @ 0x1403FBC80 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     VfClearVerifierSettings @ 0x14059E8B0 (VfClearVerifierSettings.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407892B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ExQueryBootEntropyInformation @ 0x140794670 (ExQueryBootEntropyInformation.c)
 *     ExInitLicenseData @ 0x1407A0C50 (ExInitLicenseData.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C9060 (VfNotifyVerifierOfEvent.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 *     EmInitSystem @ 0x140A4633C (EmInitSystem.c)
 *     CmInitSystem2 @ 0x140A48A08 (CmInitSystem2.c)
 *     SaveNodeDistanceInformation @ 0x140A48A70 (SaveNodeDistanceInformation.c)
 *     KeInitializeClock @ 0x140A48B4C (KeInitializeClock.c)
 *     MmInitSystemDll @ 0x140A48D6C (MmInitSystemDll.c)
 *     BootApplicationPersistentDataProcess @ 0x140A49270 (BootApplicationPersistentDataProcess.c)
 *     StartFirstUserProcess @ 0x140A4A4B8 (StartFirstUserProcess.c)
 *     PsInitSystem @ 0x140A4ABB8 (PsInitSystem.c)
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 *     KiInitializeReservedCpuSets @ 0x140A4B7FC (KiInitializeReservedCpuSets.c)
 *     MmInitSystem @ 0x140A52764 (MmInitSystem.c)
 *     VmInitSystem @ 0x140A6576C (VmInitSystem.c)
 *     SeRmInitPhase1 @ 0x140A6B14C (SeRmInitPhase1.c)
 *     PspInitPhase3 @ 0x140A77164 (PspInitPhase3.c)
 *     InitSafeBoot @ 0x140A8F570 (InitSafeBoot.c)
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
