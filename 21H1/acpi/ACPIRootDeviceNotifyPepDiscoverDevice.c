/*
 * XREFs of ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C002A33C
 * Callers:
 *     ACPIRootInitialize @ 0x1C0097C9C (ACPIRootInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_sqqDqss @ 0x1C002A498 (WPP_RECORDER_SF_sqqDqss.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C002A74C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 ACPIRootDeviceNotifyPepDiscoverDevice()
{
  ULONG_PTR v0; // rbx
  int v1; // edi
  __int64 v2; // rcx
  void *v3; // rax
  void *v4; // rdx
  _QWORD v6[2]; // [rsp+60h] [rbp+27h] BYREF
  int v7; // [rsp+70h] [rbp+37h]
  int v8; // [rsp+74h] [rbp+3Bh]
  struct _KEVENT Event; // [rsp+78h] [rbp+3Fh] BYREF

  v0 = RootDeviceExtension;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6[0] = 0LL;
  v8 = 0;
  v6[1] = &Event;
  v7 = -1073741823;
  v1 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v0 + 720), ACPIRootDeviceDiscoverDeviceCompletion, v6);
  if ( v1 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v1 = v7;
  }
  if ( v1 >= 0 )
  {
    if ( v6[0] )
    {
      *(_QWORD *)(v0 + 904) = v6[0];
      _InterlockedOr64((volatile signed __int64 *)(v0 + 960), 0x4000000uLL);
    }
    v2 = *(_QWORD *)(v0 + 8);
    v3 = &unk_1C00701BA;
    v4 = &unk_1C00701BA;
    if ( (v2 & 0x200000000000LL) != 0 )
    {
      v3 = *(void **)(v0 + 568);
      if ( (v2 & 0x400000000000LL) != 0 )
        v4 = *(void **)(v0 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sqqDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v4,
        0,
        30,
        (__int64)&WPP_a909ee2b802d35766e487243411108b1_Traceguids,
        (__int64)"ACPIRootDeviceNotifyPepDiscoverDevice",
        v0,
        *(_QWORD *)(v0 + 904),
        v1,
        v0,
        (__int64)v3,
        (__int64)v4);
  }
  _InterlockedOr64((volatile signed __int64 *)(v0 + 960), 0x2000000uLL);
  return (unsigned int)v1;
}
