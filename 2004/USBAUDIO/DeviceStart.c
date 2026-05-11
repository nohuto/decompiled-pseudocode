/*
 * XREFs of DeviceStart @ 0x1C0022540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qqddd @ 0x1C0001738 (WPP_RECORDER_SF_qqddd.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0001AA4 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1C0001B4C (McTemplateK0zq_EtwWriteTransfer.c)
 *     InitializeSideband @ 0x1C0008688 (InitializeSideband.c)
 *     DeInitSideband @ 0x1C00088E8 (DeInitSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C0013270 (_guard_dispatch_icall_nop.c)
 *     FilterCreateFilterFactory @ 0x1C0023B88 (FilterCreateFilterFactory.c)
 *     RegistryGetIdleInfo @ 0x1C002ADDC (RegistryGetIdleInfo.c)
 *     InitializeIrpThreadAndQueue @ 0x1C002B570 (InitializeIrpThreadAndQueue.c)
 */

__int64 __fastcall DeviceStart(struct _KSDEVICE *a1, __int64 a2, __int64 a3)
{
  char *Context; // rbp
  int FilterFactory; // edi
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  PDEVICE_OBJECT PhysicalDeviceObject; // rcx
  PULONG v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v19; // rdx
  struct _IO_WORKITEM *WorkItem; // rbx
  PVOID PoolWithTag; // rax
  __int64 v22; // rdx
  int Timeout; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+50h] [rbp-38h] BYREF
  int v27[3]; // [rsp+54h] [rbp-34h] BYREF
  int v28; // [rsp+90h] [rbp+8h] BYREF

  Context = (char *)a1->Context;
  FilterFactory = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0xCu,
      (__int64)&WPP_2000017d428a33413b623546671ca387_Traceguids,
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
      v6 = Context + 852;
      FilterFactory = (*(__int64 (__fastcall **)(struct _KSDEVICE *, char *))(pExtBusDeviceDispatchTable + 40))(
                        a1,
                        Context + 852);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = *v6;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v7,
          9u,
          0xDu,
          (__int64)&WPP_2000017d428a33413b623546671ca387_Traceguids,
          v24);
      }
      if ( FilterFactory >= 0 )
      {
        if ( (unsigned int)(*v6 - 1) <= 1 )
        {
          v8 = InitializeSideband(a1, v7);
          FilterFactory = v8;
          if ( v8 >= 0 )
            goto LABEL_15;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v9,
              1u,
              0xEu,
              (__int64)&WPP_2000017d428a33413b623546671ca387_Traceguids,
              a1,
              v8);
        }
        if ( FilterFactory >= 0 )
        {
LABEL_15:
          FilterFactory = FilterCreateFilterFactory(a1);
          if ( FilterFactory >= 0 )
          {
            PhysicalDeviceObject = a1->PhysicalDeviceObject;
            v28 = 0;
            v26 = 0;
            v27[0] = 0;
            if ( (int)RegistryGetIdleInfo(PhysicalDeviceObject, &v28, &v26, v27) >= 0 )
            {
              *((_DWORD *)Context + 134) = v28;
              *((_DWORD *)Context + 135) = v26;
              *((_DWORD *)Context + 133) = v27[0];
            }
            v11 = PoRegisterDeviceForIdleDetection(
                    a1->PhysicalDeviceObject,
                    *((_DWORD *)Context + 134),
                    *((_DWORD *)Context + 135),
                    (DEVICE_POWER_STATE)*((_DWORD *)Context + 133));
            *((_QWORD *)Context + 65) = v11;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              HIDWORD(v25) = HIDWORD(v11);
              HIDWORD(v24) = HIDWORD(a1);
              WPP_RECORDER_SF_qqddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v12, v14, v15, Timeout);
            }
            v16 = InitializeIrpThreadAndQueue(v13, Context);
            FilterFactory = v16;
            if ( v16 >= 0 )
            {
              if ( (unsigned int)(*v6 - 1) > 1 )
                goto LABEL_25;
              WorkItem = IoAllocateWorkItem(a1->FunctionalDeviceObject);
              if ( !WorkItem )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v24) = FilterFactory;
                  WPP_RECORDER_SF_d(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v19,
                    1u,
                    0x11u,
                    (__int64)&WPP_2000017d428a33413b623546671ca387_Traceguids,
                    v24);
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
                    LODWORD(v24) = FilterFactory;
                    WPP_RECORDER_SF_d(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      v22,
                      1u,
                      0x12u,
                      (__int64)&WPP_2000017d428a33413b623546671ca387_Traceguids,
                      v24);
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
              LODWORD(v25) = v16;
              WPP_RECORDER_SF_qd(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                a2,
                1u,
                0x10u,
                (__int64)&WPP_2000017d428a33413b623546671ca387_Traceguids,
                a1,
                v25);
            }
          }
        }
      }
    }
    KeWaitForSingleObject(Context + 744, Executive, 0, 0, 0LL);
    DeInitSideband((__int64)a1, v17);
    KeReleaseMutex((PRKMUTEX)(Context + 744), 0);
    Context[64] = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v25) = FilterFactory;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        1u,
        0x13u,
        (__int64)&WPP_2000017d428a33413b623546671ca387_Traceguids,
        a1,
        v25);
    }
  }
LABEL_25:
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0zq_EtwWriteTransfer((__int64)a1, a2, a3, *((const wchar_t **)Context + 3), FilterFactory);
  return (unsigned int)FilterFactory;
}
