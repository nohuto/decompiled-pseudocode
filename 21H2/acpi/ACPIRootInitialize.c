/*
 * XREFs of ACPIRootInitialize @ 0x1C008F8C0
 * Callers:
 *     ACPITableLoad @ 0x1C001F8F0 (ACPITableLoad.c)
 * Callees:
 *     AMLISetNSObjectContext @ 0x1C00017F0 (AMLISetNSObjectContext.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0002034 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C000230C (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C00024D0 (ACPIFixedFeatureButtonInitialize.c)
 *     IsHypervisorLpiCapable @ 0x1C0002648 (IsHypervisorLpiCapable.c)
 *     HviGetHypervisorFeatures @ 0x1C00026C8 (HviGetHypervisorFeatures.c)
 *     ACPIVerifyUSB4Presence @ 0x1C00027F4 (ACPIVerifyUSB4Presence.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C0002920 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C0004F28 (ACPIInternalSetDeviceInterface.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C00056D8 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIGetParent @ 0x1C000A040 (AMLIGetParent.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _ACPIInternalError @ 0x1C004E414 (_ACPIInternalError.c)
 *     OSOpenHandle @ 0x1C008EB74 (OSOpenHandle.c)
 *     ACPIPccLegacyInitialize @ 0x1C008F4C8 (ACPIPccLegacyInitialize.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1C008F648 (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     ACPIEvaluateOscMethodOnRootBus @ 0x1C008F6D8 (ACPIEvaluateOscMethodOnRootBus.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008F740 (ACPIAmliEvaluateOsc.c)
 *     OSCreateHandle @ 0x1C00954F8 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C00955FC (OSWriteRegValue.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C00958C8 (ACPIWriteOscSupportToRegistry.c)
 *     OSReadRegValue @ 0x1C00968B0 (OSReadRegValue.c)
 *     IsHypervisorCpcCapable @ 0x1C00B4C70 (IsHypervisorCpcCapable.c)
 */

__int64 ACPIRootInitialize()
{
  unsigned __int16 v0; // r15
  unsigned int v1; // r12d
  int v2; // edi
  int v3; // r14d
  unsigned int v4; // r13d
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // r9
  bool v13; // al
  bool v14; // bl
  unsigned __int16 v15; // si
  unsigned __int16 v16; // bx
  USHORT ActiveGroupCount; // ax
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // ebx
  __int64 *v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  __int64 v27; // rcx
  int v28; // r8d
  __int64 v29; // rcx
  unsigned __int8 v30; // al
  bool v31; // cc
  _QWORD *v32; // rax
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  int v35; // [rsp+38h] [rbp-48h] BYREF
  int v36[4]; // [rsp+40h] [rbp-40h] BYREF
  int v37[4]; // [rsp+50h] [rbp-30h] BYREF
  __int64 Data; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v39[8]; // [rsp+68h] [rbp-18h] BYREF

  v0 = 0;
  v35 = 0;
  Data = 0LL;
  v39[0] = 0;
  *(_QWORD *)v36 = 0LL;
  v1 = 0;
  Usb4ControlGranted = 0;
  v2 = 0;
  v3 = 0;
  LOBYTE(v4) = 0;
  if ( (int)AMLIGetNameSpaceObject("\\_SB", 0LL, v36, 0) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x1Du,
        (__int64)&WPP_15e34f0648cb3b62da1476f0e646a08b_Traceguids);
    ACPIInternalError(0x110B8DuLL);
  }
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  v5 = *(_QWORD *)v36;
  v6 = *(__int64 **)v36;
  *(_QWORD *)(RootDeviceExtension + 760) = *(_QWORD *)v36;
  AMLISetNSObjectContext(v6, RootDeviceExtension);
  ACPIRootDeviceNotifyPepDiscoverDevice();
  ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice();
  ACPIFixedFeatureButtonInitialize();
  v7 = (__int64 *)AMLIGetParent(v5);
  v8 = AMLIGetNamedChild(v7, 1229867359);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v7);
  if ( v8 )
  {
    AMLIAsyncEvalObject(v8, 0LL, 0, 0LL, 0LL, 0LL);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v8);
  }
  if ( (AcpiOverrideAttributes & 0x4000) == 0 )
  {
    v36[0] = 0;
    if ( !(unsigned int)ACPIEvaluateOscWheaMethodOnRootBus(v10, v9, v11, v12, v36) )
      v2 = 1;
  }
  ACPIPccLegacyInitialize(v10);
  v13 = IsHypervisorLpiCapable();
  *(_OWORD *)v37 = 0LL;
  v14 = v13;
  HviGetHypervisorFeatures();
  if ( (*(_QWORD *)v37 & 0x100000000000LL) != 0 )
  {
    if ( !(unsigned __int8)IsHypervisorCpcCapable() )
      AcpiRootFeaturesSupported &= 0xFFFEEF9F;
    if ( !v14 )
      AcpiRootFeaturesSupported &= ~1u;
    v35 |= 1u;
  }
  v15 = KeQueryHighestNodeNumber() + 1;
  v16 = 0;
  if ( v15 )
  {
    do
    {
      if ( (unsigned int)KeQueryNodeActiveProcessorCount(v16) )
        ++v0;
      ++v16;
    }
    while ( v16 < v15 );
    v3 = 0;
  }
  ActiveGroupCount = KeQueryActiveGroupCount();
  if ( v0 > 1u || ActiveGroupCount > 1u )
    AcpiRootFeaturesSupported &= ~0x1000u;
  LODWORD(Handle) = 4;
  *(_QWORD *)v37 = 0LL;
  v36[0] = 0;
  if ( (int)OSOpenHandle(
              "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
              0LL,
              (__int64)v37) >= 0
    && (int)OSReadRegValue("USB4OSNativeCMPresent") >= 0 )
  {
    if ( v36[0] )
      AcpiRootFeaturesSupported |= 0x40000u;
    else
      AcpiRootFeaturesSupported &= ~0x40000u;
  }
  if ( (AcpiOverrideAttributes & 0x8000000) != 0 )
    AcpiRootFeaturesSupported &= ~0x200000u;
  if ( !(unsigned int)ACPIEvaluateOscMethodOnRootBus(v18, 0, v19) )
  {
    v23 = ((unsigned int)AcpiRootFeaturesSupported >> 4) & 1;
    AcpiRootFeaturesGranted = AcpiRootFeaturesSupported;
    if ( v23 )
      v2 = 1;
    if ( (AcpiRootFeaturesSupported & 0x20) != 0 )
    {
      LOBYTE(v21) = -(AcpiRootFeaturesSupported & 0x40);
      v3 = ((AcpiRootFeaturesSupported & 0x40) != 0) + 1;
    }
    if ( (AcpiRootFeaturesSupported & 0x40000) != 0 )
      Usb4ControlGranted = (int)ACPIVerifyUSB4Presence(v21, v20, v22) >= 0;
    v1 = v23;
    v4 = ((unsigned int)AcpiRootFeaturesSupported >> 19) & 1;
    if ( (AcpiRootFeaturesSupported & 0x200000) != 0 && (AcpiOverrideAttributes & 0x8000000) == 0 )
      AcpiPrmSupportGranted = 1;
  }
  v24 = *(__int64 **)(RootDeviceExtension + 760);
  *(_OWORD *)v37 = SB_OSC_IOV_UUID;
  ACPIAmliEvaluateOsc(v24, (__int64)v37, v22, 1u, &v35);
  Handle = 0LL;
  *(_OWORD *)v37 = SB_OSC_VSM_UUID;
  ACPIAmliEvaluateOsc(*(__int64 **)(RootDeviceExtension + 760), (__int64)v37, v25, 2u, &Handle);
  ACPIWriteOscSupportToRegistry(v2, v1, v3, v26, v4, AcpiPrmSupportGranted);
  if ( v2 )
  {
    ACPIEvaluateDsmEmcaMethodOnRootBus(v27, (__int64)&Data);
    Handle = 0LL;
    if ( (int)OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters") >= 0 )
    {
      OSWriteRegValue("EMcaLoggingSupport", Handle, &Data, 1u);
      OSWriteRegValue("EMcaL1DirectoryBase", Handle, v39, 8u);
      if ( Handle )
        ZwClose(Handle);
    }
  }
  AcpiInterruptCombiningSupported = 0;
  v29 = *((_QWORD *)AcpiInformation + 1);
  v30 = *(_BYTE *)(v29 + 8);
  v31 = v30 <= 6u;
  if ( v30 == 6 )
  {
    if ( *(_BYTE *)(v29 + 131) >= 2u )
    {
LABEL_50:
      AcpiRootFeaturesSupported |= 0x2000u;
      ACPIEvaluateOscMethodOnRootBus(v29, 1u, v28);
      AcpiInterruptCombiningSupported = (AcpiRootFeaturesSupported & 0x2000) != 0;
      goto LABEL_37;
    }
    v31 = 1;
  }
  if ( !v31 )
    goto LABEL_50;
LABEL_37:
  v32 = (_QWORD *)(RootDeviceExtension + 864);
  *(_QWORD *)(RootDeviceExtension + 872) = RootDeviceExtension + 864;
  *v32 = v32;
  KeInitializeEvent((PRKEVENT)(RootDeviceExtension + 904), SynchronizationEvent, 1u);
  Usb4FeatureControlPushLock = 0LL;
  AcpiUsb4FeatureControlGranted = 0;
  ACPIInternalSetDeviceInterface(*(PDEVICE_OBJECT *)(RootDeviceExtension + 784), &GUID_ACPI_ROOT_DEVICE_UUID);
  return 0LL;
}
