/*
 * XREFs of SidebandCapableDeferredFilterFactoryCreate @ 0x1C0022970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     Feature_Servicing_2101c_29879707__private_IsEnabled @ 0x1C00028E0 (Feature_Servicing_2101c_29879707__private_IsEnabled.c)
 *     DeInitSideband @ 0x1C00088E8 (DeInitSideband.c)
 *     IsDeviceInSidebandMode @ 0x1C0008B74 (IsDeviceInSidebandMode.c)
 */

void __fastcall SidebandCapableDeferredFilterFactoryCreate(
        PVOID IoObject,
        struct _KSDEVICE *Context,
        PIO_WORKITEM IoWorkItem)
{
  char *v3; // rdi
  int v6; // ebp
  int v7; // r15d
  GUID *v8; // r14
  __int64 v9; // rdx
  GUID v10; // xmm0
  __int64 v11; // rdx
  struct _KEVENT *v12; // rcx
  unsigned __int16 v13; // r9
  int v14; // [rsp+78h] [rbp+10h] BYREF
  PKSFILTERFACTORY FilterFactory; // [rsp+88h] [rbp+20h] BYREF

  v3 = (char *)Context->Context;
  FilterFactory = 0LL;
  v14 = 0;
  v6 = -1073741437;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Context,
      9u,
      0x14u,
      (__int64)&WPP_2000017d428a33413b623546671ca387_Traceguids);
  KeSetEvent((PRKEVENT)(v3 + 952), 0, 0);
  IoFreeWorkItem(IoWorkItem);
  if ( v3 == (char *)-128LL )
    goto LABEL_17;
  if ( !*((_DWORD *)v3 + 44) )
    goto LABEL_17;
  v8 = (GUID *)*((_QWORD *)v3 + 23);
  v6 = IsDeviceInSidebandMode((__int64)Context, &v14);
  if ( v6 < 0 )
    goto LABEL_17;
  if ( v14 )
  {
    v10 = USBSIDEBANDAUDIO_KSCATEGORY_AUDIO;
    v7 = 1;
  }
  else
  {
    v10 = KSCATEGORY_AUDIO;
  }
  *v8 = v10;
  if ( (unsigned int)(*((_DWORD *)v3 + 213) - 1) <= 1 )
  {
    KsAcquireDevice(Context);
    v6 = KsCreateFilterFactory(
           Context->FunctionalDeviceObject,
           (const KSFILTER_DESCRIPTOR *)(v3 + 128),
           (PWSTR)L"GLOBAL",
           0LL,
           8u,
           0LL,
           0LL,
           &FilterFactory);
    if ( !(unsigned int)Feature_Servicing_2101c_29879707__private_IsEnabled() )
      KsReleaseDevice(Context);
    if ( v6 >= 0 )
    {
      v6 = KsFilterFactorySetDeviceClassesState(FilterFactory, 1u);
      *((_QWORD *)v3 + 15) = FilterFactory;
    }
    if ( (unsigned int)Feature_Servicing_2101c_29879707__private_IsEnabled() )
      KsReleaseDevice(Context);
  }
  if ( !v7 )
  {
LABEL_17:
    KeWaitForSingleObject(v3 + 744, Executive, 0, 0, 0LL);
    DeInitSideband((__int64)Context, v11);
    KeReleaseMutex((PRKMUTEX)(v3 + 744), 0);
  }
  v12 = (struct _KEVENT *)*((_QWORD *)v3 + 123);
  if ( v12 )
    KeSetEvent(v12, 0, 0);
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_26;
    v13 = 21;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_26;
    v13 = 22;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v9,
    9u,
    v13,
    (__int64)&WPP_2000017d428a33413b623546671ca387_Traceguids);
LABEL_26:
  if ( v6 < 0 )
  {
    KeWaitForSingleObject(v3 + 744, Executive, 0, 0, 0LL);
    *((_DWORD *)v3 + 244) |= 4u;
    KeReleaseMutex((PRKMUTEX)(v3 + 744), 0);
    IoInvalidateDeviceState(Context->PhysicalDeviceObject);
  }
}
