/*
 * XREFs of ACPIRootInitialize @ 0x1C0097FAC
 * Callers:
 *     ACPITableLoad @ 0x1C00258B0 (ACPITableLoad.c)
 * Callees:
 *     AMLISetNSObjectContext @ 0x1C0002778 (AMLISetNSObjectContext.c)
 *     AMLIGetNameSpaceObject @ 0x1C000B01C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C0010534 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017F20 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIGetParent @ 0x1C001B348 (AMLIGetParent.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C002A59C (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C002A884 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C0031290 (ACPIFixedFeatureButtonInitialize.c)
 *     IsHypervisorLpiCapable @ 0x1C00319D0 (IsHypervisorLpiCapable.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     _ACPIInternalError @ 0x1C004F5D4 (_ACPIInternalError.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C0096C6C (ACPIWriteOscSupportToRegistry.c)
 *     OSCreateHandle @ 0x1C0096D28 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C0096E28 (OSWriteRegValue.c)
 *     ACPIPccLegacyInitialize @ 0x1C00982D0 (ACPIPccLegacyInitialize.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1C0098640 (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     ACPIAmliEvaluateOsc @ 0x1C009A3A0 (ACPIAmliEvaluateOsc.c)
 *     ACPIEvaluateOscMethodOnRootBus @ 0x1C00B4F44 (ACPIEvaluateOscMethodOnRootBus.c)
 *     IsHypervisorCpcCapable @ 0x1C00B54B0 (IsHypervisorCpcCapable.c)
 */

__int64 ACPIRootInitialize()
{
  unsigned int v0; // edi
  int v1; // esi
  int v2; // r12d
  __int64 v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  __int64 *v6; // r14
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  bool v11; // al
  bool v12; // bl
  USHORT HighestNodeNumber; // ax
  __int64 v14; // rcx
  USHORT v15; // bx
  USHORT v16; // r14
  unsigned __int16 v17; // r15
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  bool v25; // cc
  _QWORD *v26; // rax
  USHORT Count[2]; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v29[3]; // [rsp+34h] [rbp-4Ch] BYREF
  HANDLE Handle[2]; // [rsp+40h] [rbp-40h] BYREF
  int v31[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 Data; // [rsp+60h] [rbp-20h] BYREF

  v29[0] = 0;
  Count[0] = 0;
  *(_QWORD *)v31 = 0LL;
  v0 = 0;
  Data = 0LL;
  v1 = 0;
  v2 = 0;
  if ( (int)AMLIGetNameSpaceObject("\\_SB", 0LL, (unsigned __int64 *)v31, 0) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x1Du,
        (__int64)&WPP_a909ee2b802d35766e487243411108b1_Traceguids);
    ACPIInternalError(0x110ACCuLL);
  }
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  v3 = *(_QWORD *)v31;
  v4 = *(__int64 **)v31;
  *(_QWORD *)(RootDeviceExtension + 720) = *(_QWORD *)v31;
  AMLISetNSObjectContext(v4, RootDeviceExtension);
  ACPIRootDeviceNotifyPepDiscoverDevice();
  ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice();
  ACPIFixedFeatureButtonInitialize();
  v5 = (__int64 *)AMLIGetParent(v3);
  v6 = AMLIGetNamedChild(v5, 1229867359);
  AMLIDereferenceHandleEx((__int64)v5);
  if ( v6 )
  {
    AMLIAsyncEvalObject(v6, 0LL, 0, 0LL, 0LL, 0LL);
    AMLIDereferenceHandleEx((__int64)v6);
  }
  if ( (AcpiOverrideAttributes & 0x4000) == 0 )
  {
    v31[0] = 0;
    if ( !(unsigned int)ACPIEvaluateOscWheaMethodOnRootBus(v8, v7, v9, v10, (__int64)v31) )
      v1 = 1;
  }
  ACPIPccLegacyInitialize();
  v11 = IsHypervisorLpiCapable();
  *(_OWORD *)v31 = 0LL;
  v12 = v11;
  HviGetHypervisorFeatures(v31);
  if ( (*(_QWORD *)v31 & 0x100000000000LL) != 0 )
  {
    if ( !(unsigned __int8)IsHypervisorCpcCapable() )
      AcpiRootFeaturesSupported &= 0xFFFEEF9F;
    if ( !v12 )
      AcpiRootFeaturesSupported &= ~1u;
    v29[0] |= 1u;
  }
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v15 = 0;
  v16 = HighestNodeNumber + 1;
  v17 = 0;
  if ( HighestNodeNumber != 0xFFFF )
  {
    do
    {
      KeQueryNodeActiveAffinity(v15, 0LL, Count);
      if ( Count[0] )
        ++v17;
      ++v15;
    }
    while ( v15 < v16 );
    v2 = 0;
    if ( v17 > 1u )
      AcpiRootFeaturesSupported &= ~0x1000u;
  }
  if ( !(unsigned int)ACPIEvaluateOscMethodOnRootBus(v14, 0LL) )
  {
    v0 = ((unsigned int)AcpiRootFeaturesSupported >> 4) & 1;
    if ( v0 )
      v1 = 1;
    if ( (AcpiRootFeaturesSupported & 0x20) != 0 )
    {
      v2 = 2;
      if ( (AcpiRootFeaturesSupported & 0x40) == 0 )
        v2 = 1;
    }
  }
  v19 = *(_QWORD *)(RootDeviceExtension + 720);
  *(_OWORD *)Handle = SB_OSC_IOV_UUID;
  ACPIAmliEvaluateOsc(v19, (int)Handle, v18, 1, v29);
  Handle[0] = 0LL;
  *(_OWORD *)v31 = SB_OSC_VSM_UUID;
  ACPIAmliEvaluateOsc(*(_QWORD *)(RootDeviceExtension + 720), (int)v31, v20, 2, Handle);
  ACPIWriteOscSupportToRegistry(v1, v0, v2);
  if ( v1 )
  {
    ACPIEvaluateDsmEmcaMethodOnRootBus(v22, (__int64)&Data);
    Handle[0] = 0LL;
    if ( (int)OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, Handle) >= 0 )
    {
      OSWriteRegValue("EMcaLoggingSupport", Handle[0], &Data, 1u);
      OSWriteRegValue("EMcaL1DirectoryBase", Handle[0], (char *)&Data + 8, 8u);
      if ( Handle[0] )
        ZwClose(Handle[0]);
    }
  }
  AcpiInterruptCombiningSupported = 0;
  v23 = *((_QWORD *)AcpiInformation + 1);
  v24 = *(_BYTE *)(v23 + 8);
  v25 = v24 <= 6u;
  if ( v24 == 6 )
  {
    if ( *(_BYTE *)(v23 + 131) >= 2u )
      goto LABEL_38;
    v25 = 1;
  }
  if ( !v25 )
  {
LABEL_38:
    AcpiRootFeaturesSupported |= 0x2000u;
    LOBYTE(v21) = 1;
    ACPIEvaluateOscMethodOnRootBus(v23, v21);
    AcpiInterruptCombiningSupported = (AcpiRootFeaturesSupported & 0x2000) != 0;
  }
  v26 = (_QWORD *)(RootDeviceExtension + 824);
  *(_QWORD *)(RootDeviceExtension + 832) = RootDeviceExtension + 824;
  *v26 = v26;
  KeInitializeEvent((PRKEVENT)(RootDeviceExtension + 864), SynchronizationEvent, 1u);
  return 0LL;
}
