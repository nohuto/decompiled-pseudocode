/*
 * XREFs of DeviceStart @ 0x1C00228C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_l @ 0x1C00011B4 (WPP_RECORDER_SF_l.c)
 *     WPP_RECORDER_SF_q @ 0x1C0001258 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00014A8 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qqddd @ 0x1C00017DC (WPP_RECORDER_SF_qqddd.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0001B44 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1C0001BEC (McTemplateK0zq_EtwWriteTransfer.c)
 *     InitializeSideband @ 0x1C0008C58 (InitializeSideband.c)
 *     DeInitSideband @ 0x1C0008EB8 (DeInitSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 *     IsSidebandSupported @ 0x1C0022748 (IsSidebandSupported.c)
 *     FilterCreateFilterFactory @ 0x1C0023ED8 (FilterCreateFilterFactory.c)
 *     RegistryGetIdleInfo @ 0x1C002B28C (RegistryGetIdleInfo.c)
 *     InitializeIrpThreadAndQueue @ 0x1C002BC40 (InitializeIrpThreadAndQueue.c)
 */

__int64 __fastcall DeviceStart(struct _KSDEVICE *a1, __int64 a2, __int64 a3)
{
  char *Context; // r14
  int FilterFactory; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  PDEVICE_OBJECT PhysicalDeviceObject; // rcx
  PULONG v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v21; // rdx
  struct _IO_WORKITEM *WorkItem; // rbx
  PVOID PoolWithTag; // rax
  __int64 v24; // rdx
  int Timeout; // [rsp+20h] [rbp-40h]
  __int64 v26; // [rsp+28h] [rbp-38h]
  __int64 v27; // [rsp+30h] [rbp-30h]
  int v28; // [rsp+50h] [rbp-10h] BYREF
  _DWORD v29[3]; // [rsp+54h] [rbp-Ch] BYREF
  int v30; // [rsp+90h] [rbp+30h] BYREF

  Context = (char *)a1->Context;
  FilterFactory = 0;
  v30 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0x13u,
      (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
      a1);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)a1, &EXBUS_DEVICE_START_ENTER, a3);
  if ( !a1->Started )
  {
    *((_DWORD *)Context + 132) = 1;
    Context[64] = 0;
    FilterFactory = (*(__int64 (__fastcall **)(struct _KSDEVICE *))(pExtBusDeviceDispatchTable + 8))(a1);
    if ( FilterFactory >= 0 )
    {
      FilterFactory = IsSidebandSupported((__int64)a1, &v30);
      v9 = v30;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_l((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, Timeout);
      if ( FilterFactory >= 0 )
      {
        if ( v9 )
        {
          v10 = InitializeSideband(a1, v6);
          FilterFactory = v10;
          if ( v10 >= 0 )
            goto LABEL_15;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v11,
              1u,
              0x15u,
              (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
              a1,
              v10);
        }
        if ( FilterFactory >= 0 )
        {
LABEL_15:
          FilterFactory = FilterCreateFilterFactory(a1);
          if ( FilterFactory >= 0 )
          {
            PhysicalDeviceObject = a1->PhysicalDeviceObject;
            v30 = 0;
            v28 = 0;
            v29[0] = 0;
            if ( (int)RegistryGetIdleInfo(PhysicalDeviceObject, &v30, &v28, v29) >= 0 )
            {
              *((_DWORD *)Context + 134) = v30;
              *((_DWORD *)Context + 135) = v28;
              *((_DWORD *)Context + 133) = v29[0];
            }
            v13 = PoRegisterDeviceForIdleDetection(
                    a1->PhysicalDeviceObject,
                    *((_DWORD *)Context + 134),
                    *((_DWORD *)Context + 135),
                    (DEVICE_POWER_STATE)*((_DWORD *)Context + 133));
            *((_QWORD *)Context + 65) = v13;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              HIDWORD(v27) = HIDWORD(v13);
              HIDWORD(v26) = HIDWORD(a1);
              WPP_RECORDER_SF_qqddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v14, v16, v17, Timeout);
            }
            v18 = InitializeIrpThreadAndQueue(v15, Context);
            FilterFactory = v18;
            if ( v18 >= 0 )
            {
              if ( !v9 )
                goto LABEL_25;
              WorkItem = IoAllocateWorkItem(a1->FunctionalDeviceObject);
              if ( !WorkItem )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v26) = FilterFactory;
                  WPP_RECORDER_SF_d(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v21,
                    1u,
                    0x18u,
                    (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
                    v26);
                }
                FilterFactory = -1073741670;
              }
              if ( FilterFactory >= 0 )
              {
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x65627845u);
                *((_QWORD *)Context + 123) = PoolWithTag;
                if ( !PoolWithTag )
                {
                  IoFreeWorkItem(WorkItem);
                  WorkItem = 0LL;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v26) = FilterFactory;
                    WPP_RECORDER_SF_d(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      v24,
                      1u,
                      0x19u,
                      (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
                      v26);
                  }
                  FilterFactory = -1073741670;
                }
                if ( FilterFactory >= 0 )
                {
                  KeInitializeEvent(*((PRKEVENT *)Context + 123), NotificationEvent, 0);
                  IoQueueWorkItemEx(WorkItem, SidebandCapableDeferredFilterFactoryCreate, CriticalWorkQueue, a1);
                  KeWaitForSingleObject(Context + 952, Executive, 0, 0, 0LL);
                  goto LABEL_25;
                }
              }
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v27) = v18;
              WPP_RECORDER_SF_qd(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                a2,
                1u,
                0x17u,
                (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
                a1,
                v27);
            }
          }
        }
      }
    }
    KeWaitForSingleObject(Context + 744, Executive, 0, 0, 0LL);
    DeInitSideband((__int64)a1, v19);
    KeReleaseMutex((PRKMUTEX)(Context + 744), 0);
    Context[64] = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v27) = FilterFactory;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        1u,
        0x1Au,
        (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
        a1,
        v27);
    }
  }
LABEL_25:
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0zq_EtwWriteTransfer((__int64)a1, a2, a3, *((const wchar_t **)Context + 3), FilterFactory);
  return (unsigned int)FilterFactory;
}
