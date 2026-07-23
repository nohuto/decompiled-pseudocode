/*
 * XREFs of Phase1InitializationIoReady @ 0x140A3EF44
 * Callers:
 *     Phase1Initialization @ 0x14079B780 (Phase1Initialization.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExNotifyCallback @ 0x1403005D0 (ExNotifyCallback.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14033DA64 (_tlgCreate1Sz_wchar_t.c)
 *     InbvSetProgressBarSubset @ 0x1403B9820 (InbvSetProgressBarSubset.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403CB1E4 (RtlpInitializeNonVolatileFlush.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     VfClearVerifierSettings @ 0x14059A720 (VfClearVerifierSettings.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407788A4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ExQueryBootEntropyInformation @ 0x1407812D4 (ExQueryBootEntropyInformation.c)
 *     ExInitLicenseData @ 0x140791B78 (ExInitLicenseData.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C3030 (VfNotifyVerifierOfEvent.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140A3D71C (BootApplicationPersistentDataProcess.c)
 *     StartFirstUserProcess @ 0x140A3E9B4 (StartFirstUserProcess.c)
 *     PsInitSystem @ 0x140A3F0F4 (PsInitSystem.c)
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 *     KiInitializeReservedCpuSets @ 0x140A3FD38 (KiInitializeReservedCpuSets.c)
 *     EmInitSystem @ 0x140A4710C (EmInitSystem.c)
 *     MmInitSystem @ 0x140A4C3E4 (MmInitSystem.c)
 *     VmInitSystem @ 0x140A60F58 (VmInitSystem.c)
 *     SeRmInitPhase1 @ 0x140A6449C (SeRmInitPhase1.c)
 *     KeInitializeClock @ 0x140A69C98 (KeInitializeClock.c)
 *     SaveNodeDistanceInformation @ 0x140A6EC5C (SaveNodeDistanceInformation.c)
 *     CmInitSystem2 @ 0x140A6FC5C (CmInitSystem2.c)
 *     MmInitSystemDll @ 0x140A6FEC8 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x140A70188 (PspInitPhase3.c)
 *     InitSafeBoot @ 0x140A8A2D0 (InitSafeBoot.c)
 */

__int64 __fastcall Phase1InitializationIoReady(__int64 a1, char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int inited; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER v17; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-A0h] BYREF
  int *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  char *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  LARGE_INTEGER *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  _BYTE v29[16]; // [rsp+D0h] [rbp-30h] BYREF
  char *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  int *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  void *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  void *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]

  RtlpInitializeNonVolatileFlush();
  LOBYTE(v4) = CmStateSeparationEnabled != 0;
  v5 = ExpInitializeStateSeparationPhase1(v4);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  CmInitSystem2();
  inited = EmInitSystem(1LL, a1);
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
  KeInitializeClock(2uLL);
  KiInitializeReservedCpuSets();
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C04710, 0LL, 0LL);
  if ( (unsigned int)dword_140C04710 > 5 )
  {
    v11 = ExpRefreshFailures;
    v20 = 4LL;
    v19 = &v11;
    v12 = ExpLastTimeZoneBias;
    v21 = &v12;
    v13 = ExpCurrentTimeZoneId;
    v23 = &v13;
    v9 = ExpRealTimeIsUniversal;
    v25 = &v9;
    v17 = ExpNextSystemCutoverInUTC;
    v27 = &v17;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 1LL;
    v28 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v29, qword_140D2E23C);
    v30 = &v10;
    v14 = ExpTimeZoneInformation;
    v10 = byte_140D2E33C;
    v32 = &v14;
    v15 = dword_140D2E1E4;
    v34 = &v15;
    v16 = dword_140D2E238;
    v36 = &v16;
    v38 = &unk_140D2E1D4;
    v40 = &unk_140D2E228;
    v31 = 1LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 16LL;
    v41 = 16LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C04710,
      (unsigned __int8 *)word_14002CD0A,
      0LL,
      0LL,
      0xEu,
      &v18);
  }
  ExInitLicenseData();
  if ( !(unsigned __int8)PsInitSystem(2LL, a1) )
    goto LABEL_23;
  MmInitSystemDll();
  if ( !(unsigned __int8)SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  BootApplicationPersistentDataProcess(2LL);
  if ( !(unsigned __int8)PspInitPhase3() )
LABEL_23:
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
