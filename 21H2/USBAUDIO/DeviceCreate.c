/*
 * XREFs of DeviceCreate @ 0x1C0001C90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001258 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00014A8 (WPP_RECORDER_SF_qd.c)
 *     McGenEventRegister_EtwRegister @ 0x1C0001ADC (McGenEventRegister_EtwRegister.c)
 *     InitializeSidebandContext @ 0x1C0008B84 (InitializeSidebandContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0013D80 (memset.c)
 *     WmiRegisterProvider @ 0x1C002BAF8 (WmiRegisterProvider.c)
 */

__int64 __fastcall DeviceCreate(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // edi
  PDRIVER_CONTROL *PoolWithTag; // rax
  __int64 v5; // rdx
  PDRIVER_CONTROL *v6; // rbx
  const wchar_t *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  KIRQL v10; // al
  PDRIVER_CONTROL DeviceRoutine; // rcx
  PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp; // [rsp+30h] [rbp-40h]
  _COUNTED_REASON_CONTEXT Context; // [rsp+40h] [rbp-30h] BYREF

  memset(&Context, 0, sizeof(Context));
  v3 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0xAu,
      (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
      a1);
  McGenEventRegister_EtwRegister(a1, a2, &EXBUSAUD_PROVIDER_Context, &EXBUSAUD_PROVIDER_Context);
  EtwSetInformation(
    EXBUSAUD_PROVIDER_Context,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  PoolWithTag = (PDRIVER_CONTROL *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x3E8uLL, 0x41627845u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    v3 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), PoolWithTag, ExFreePool);
    if ( v3 < 0 )
    {
      ExFreePool(v6);
      goto LABEL_16;
    }
    *(_QWORD *)(a1 + 16) = v6;
    memset(v6, 0, 0x3E8uLL);
    InitializeSidebandContext(v6 + 88);
    WmiRegisterProvider(a1);
    KeInitializeSpinLock((PKSPIN_LOCK)v6 + 12);
    v6[2] = (PDRIVER_CONTROL)a1;
    v6[14] = (PDRIVER_CONTROL)(v6 + 13);
    v6[13] = (PDRIVER_CONTROL)(v6 + 13);
    *((_BYTE *)v6 + 64) = 1;
    Context.ResourceReasonId = 900;
    v7 = L"mmres.dll";
    Context.Flags = 2;
    Context.StringCount = 0;
    v8 = 0x7FFFLL;
    Context.ReasonStrings = 0LL;
    Context.ResourceFileName = 0LL;
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v8;
    }
    while ( v8 );
    v9 = (0x7FFF - v8) & -(__int64)(v8 != 0);
    if ( v8 )
    {
      Context.ResourceFileName.Buffer = L"mmres.dll";
      Context.ResourceFileName.Length = 2 * v9;
      Context.ResourceFileName.MaximumLength = 2 * v9 + 2;
      PoCreatePowerRequest((PVOID *)v6 + 64, *(PDEVICE_OBJECT *)(a1 + 24), &Context);
    }
    KeInitializeEvent((PRKEVENT)(v6 + 68), NotificationEvent, 1u);
    KeInitializeSpinLock((PKSPIN_LOCK)v6 + 79);
    KeInitializeSemaphore((PRKSEMAPHORE)(v6 + 82), 0, 0x7FFFFFFF);
    v6[81] = (PDRIVER_CONTROL)(v6 + 80);
    v6[80] = (PDRIVER_CONTROL)(v6 + 80);
    v3 = IoCsqInitialize(
           (PIO_CSQ)(v6 + 71),
           CsInsertIrp,
           CSidebandDevice::staticCsqRemoveIrp,
           CsPeekNextIrp,
           CsAcquireLock,
           CsReleaseLock,
           CsCompleteCanceledIrp);
    if ( v3 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))pExtBusDeviceDispatchTable)(a1);
      if ( v3 >= 0 )
      {
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
        DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
        ++WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
        if ( *((struct _DEVICE_OBJECT **)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 1) != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
          __fastfail(3u);
        *v6 = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
        v6[1] = (PDRIVER_CONTROL)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
        *((_QWORD *)DeviceRoutine + 1) = v6;
        WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)v6;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v10);
LABEL_16:
        if ( v3 >= 0 )
          return (unsigned int)v3;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(CsqCompleteCanceledIrp) = v3;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1u,
      0xBu,
      (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
      a1,
      CsqCompleteCanceledIrp);
  }
  return (unsigned int)v3;
}
