/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x1C0162160
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0162F00 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C02D35EC (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C02D3798 (DpiLdaPowerUpAdapterInChain.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DpiCorrectPowerAction @ 0x1C001FA38 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C012759C (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C0162D14 (DpiDxgkDdiSetPowerState.c)
 *     DpiRequestIoPowerState @ 0x1C01632F0 (DpiRequestIoPowerState.c)
 *     DpiFdoDetectPostDevice @ 0x1C0166864 (DpiFdoDetectPostDevice.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C0166AF0 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C02C705C (DpiFdoRebootForSurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoSetAdapterPowerState(
        PDEVICE_OBJECT DeviceObject,
        POWER_STATE State,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  char *DeviceExtension; // rdi
  unsigned int v6; // esi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  char v31[4]; // [rsp+30h] [rbp-31h] BYREF
  unsigned int v32; // [rsp+34h] [rbp-2Dh]
  int v33; // [rsp+38h] [rbp-29h]
  PDEVICE_OBJECT v34; // [rsp+40h] [rbp-21h]
  int v35; // [rsp+48h] [rbp-19h] BYREF
  __int64 v36; // [rsp+50h] [rbp-11h]
  char v37; // [rsp+58h] [rbp-9h]
  _OWORD v38[2]; // [rsp+60h] [rbp-1h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v6 = 0;
  v33 = a3;
  v32 = 0;
  if ( State.SystemState > *((_DWORD *)DeviceExtension + 71) )
  {
    PoSetPowerState(DeviceObject, DevicePowerState, State);
    if ( *((_QWORD *)DeviceExtension + 2) == 0x274727044LL )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3792), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3792));
      KeLeaveCriticalRegion();
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        v21 = DeviceExtension[4144];
        if ( a5 == 2 )
        {
          v6 = v21 != 0 ? 128 : 8;
        }
        else if ( a5 == 3 )
        {
          v6 = v21 != 0 ? 128 : 16;
        }
        else if ( a5 - 4 <= 2 )
        {
          v6 = 32;
        }
        DpiRequestIoPowerState(DeviceObject, 1LL, v20, v6);
        v32 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                *((_QWORD *)DeviceExtension + 5),
                *((_QWORD *)DeviceExtension + 6),
                -1,
                (POWER_STATE)State.SystemState,
                a5);
      }
      if ( v33 == 5 && (PDEVICE_OBJECT)qword_1C00AFCB8 == DeviceObject && dword_1C00AFD68 == 3 )
      {
        byte_1C00AFD88 = 1;
        LOBYTE(v19) = 1;
        InbvNotifyDisplayOwnershipChange(v19, DpiEnterSystemDisplay);
      }
      return v32;
    }
    v14 = *((_DWORD *)DeviceExtension + 59) == 2;
    *((POWER_STATE *)DeviceExtension + 71) = State;
    if ( v14 )
      return ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
               *((_QWORD *)DeviceExtension + 5),
               *((_QWORD *)DeviceExtension + 6),
               -1,
               (POWER_STATE)State.SystemState,
               a5);
  }
  else if ( State.SystemState < *((_DWORD *)DeviceExtension + 71) )
  {
    v10 = DpiCorrectPowerAction((__int64)DeviceObject, a4, a5);
    v14 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
    v33 = v10;
    if ( v14 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v34 = 0LL;
      if ( (PDEVICE_OBJECT)qword_1C00AFCB8 == DeviceObject )
      {
        if ( dword_1C00AFD68 == 3 && byte_1C00AFD88 )
        {
          LOBYTE(v11) = 1;
          DpiAcquirePostDisplayInfoFromBgfx(&xmmword_1C00AFCC8, v11, 0LL);
          byte_1C00AFD88 = 0;
          dword_1C00AFDB4 = 1;
          v34 = DeviceObject;
        }
        if ( a4 == 5 )
        {
          if ( !byte_1C00AFD81 )
          {
            v15 = *((_QWORD *)DeviceExtension + 3);
            v31[0] = 0;
            if ( (int)DpiFdoDetectPostDevice(v15, v31) >= 0 && v31[0] != DeviceExtension[1152] )
              DpiFdoRebootForSurpriseRemoval(DeviceObject, 0LL);
          }
          v16 = *((_QWORD *)DeviceExtension + 487);
          if ( (!v16 || *(int *)(v16 + 2572) <= 1105) && byte_1C00AFA16 )
          {
            v35 = -1;
            v36 = 0LL;
            if ( (qword_1C00AE9B0 & 2) != 0 )
            {
              v37 = 1;
              v35 = 8007;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerEnter, v13, 8007);
            }
            else
            {
              v37 = 0;
            }
            DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 8007LL);
            memset(v38, 0, sizeof(v38));
            LODWORD(v38[0]) = 18;
            x86BiosCall(16LL, v38);
            xmmword_1C00AFCD8 = 0LL;
            DWORD2(xmmword_1C00AFCD8) = -1;
            xmmword_1C00AFCC8 = 0LL;
            memset(&xmmword_1C00AFCE8, 0, 0x80uLL);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v22);
            if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v35);
          }
        }
      }
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        if ( *((_QWORD *)DeviceExtension + 3) == qword_1C00AFCB8 )
        {
          qword_1C00AFD70 = (__int64)KeGetCurrentThread();
          qword_1C00AFD78 = (__int64)v34;
        }
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
          *((_QWORD *)DeviceExtension + 5),
          *((_QWORD *)DeviceExtension + 6),
          -1,
          (POWER_STATE)State.SystemState,
          v33);
        if ( (struct _KTHREAD *)qword_1C00AFD70 == KeGetCurrentThread() )
        {
          qword_1C00AFD78 = 0LL;
          qword_1C00AFD70 = 0LL;
        }
        if ( (PDEVICE_OBJECT)qword_1C00AFCB8 == DeviceObject && dword_1C00AFD68 == 3 )
        {
          xmmword_1C00AFCD8 = 0LL;
          DWORD2(xmmword_1C00AFCD8) = -1;
          xmmword_1C00AFCC8 = 0LL;
          memset(&xmmword_1C00AFCE8, 0, 0x80uLL);
        }
        v32 = DpiRequestIoPowerState(DeviceObject, 2LL, v17, 0LL);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3792), 1u);
        *((POWER_STATE *)DeviceExtension + 71) = State;
        ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3792));
        KeLeaveCriticalRegion();
        if ( DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
        {
          if ( byte_1C00AFA1A )
          {
            DeviceExtension[3513] = 1;
          }
          else
          {
            WorkItem = IoAllocateWorkItem(DeviceObject);
            if ( WorkItem )
            {
              IoQueueWorkItemEx(WorkItem, DpiFdoInvalidateChildWorkItem, DelayedWorkQueue, 0LL);
            }
            else
            {
              v30 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
              *(_QWORD *)(v30 + 24) = -1073741670LL;
              WdLogEvent5_WdLowResource(v30);
            }
          }
        }
        else
        {
          DeviceExtension[3513] = 1;
          _InterlockedAnd((volatile signed __int32 *)DeviceExtension + 911, 0xFFFFFFFE);
          IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)DeviceExtension + 19), BusRelations);
        }
      }
      else
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3792), 1u);
        *((POWER_STATE *)DeviceExtension + 71) = State;
        ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3792));
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        v32 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                *((_QWORD *)DeviceExtension + 5),
                *((_QWORD *)DeviceExtension + 6),
                -1,
                (POWER_STATE)State.SystemState,
                v10);
      *((POWER_STATE *)DeviceExtension + 71) = State;
    }
    PoSetPowerState(DeviceObject, DevicePowerState, State);
    return v32;
  }
  return 0LL;
}
