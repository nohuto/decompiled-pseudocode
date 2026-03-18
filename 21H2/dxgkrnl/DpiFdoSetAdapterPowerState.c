/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x1C01EFEE0
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F0950 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C0396530 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C03966BC (DpiLdaPowerUpAdapterInChain.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DxgkReportAdapterPowerRapidHpdTrigerEvent @ 0x1C0023838 (DxgkReportAdapterPowerRapidHpdTrigerEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C01B45A0 (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C01F0768 (DpiDxgkDdiSetPowerState.c)
 *     DpiRequestIoPowerState @ 0x1C01F0D70 (DpiRequestIoPowerState.c)
 *     DpiFdoDetectPostDevice @ 0x1C01F4164 (DpiFdoDetectPostDevice.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01F43EC (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C038AF7C (DpiFdoRebootForSurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoSetAdapterPowerState(PDEVICE_OBJECT DeviceObject, __int64 State, __int64 a3, int a4, int a5)
{
  char *DeviceExtension; // rdi
  int v6; // esi
  POWER_STATE v7; // r12d
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebx
  unsigned int v18; // eax
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _IO_WORKITEM *WorkItem; // rax
  _BYTE v23[4]; // [rsp+30h] [rbp-31h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-2Dh]
  int v25; // [rsp+38h] [rbp-29h]
  int v26; // [rsp+3Ch] [rbp-25h]
  PDEVICE_OBJECT v27; // [rsp+40h] [rbp-21h]
  int v28; // [rsp+48h] [rbp-19h] BYREF
  __int64 v29; // [rsp+50h] [rbp-11h]
  char v30; // [rsp+58h] [rbp-9h]
  _OWORD v31[2]; // [rsp+60h] [rbp-1h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v6 = 0;
  v25 = a3;
  v26 = a4;
  v7.SystemState = State;
  v24 = 0;
  if ( (int)State > *((_DWORD *)DeviceExtension + 71) )
  {
    PoSetPowerState(DeviceObject, DevicePowerState, (POWER_STATE)State);
    if ( *((_QWORD *)DeviceExtension + 2) == 0x274727044LL )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3792), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = v7;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3792));
      KeLeaveCriticalRegion();
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        if ( DeviceExtension[4152] )
        {
          v17 = 128;
        }
        else if ( a5 == 2 )
        {
          v17 = 8;
        }
        else if ( a5 == 3 )
        {
          v17 = 16;
        }
        else
        {
          if ( (unsigned int)(a5 - 4) <= 2 )
            v6 = 32;
          v17 = v6;
        }
        DpiRequestIoPowerState(DeviceObject, 1LL, v16, v17);
        v18 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                *((_QWORD *)DeviceExtension + 5),
                *((_QWORD *)DeviceExtension + 6),
                -1,
                (POWER_STATE)v7.SystemState,
                a5);
        ++*((_DWORD *)DeviceExtension + 1073);
        v24 = v18;
      }
      if ( v25 == 5 && (PDEVICE_OBJECT)qword_1C0130740 == DeviceObject && dword_1C01307F0 == 3 )
      {
        byte_1C0130810 = 1;
        LOBYTE(v15) = 1;
        InbvNotifyDisplayOwnershipChange(v15, DpiEnterSystemDisplay);
      }
      return v24;
    }
    v19 = *((_DWORD *)DeviceExtension + 59) == 2;
    *((POWER_STATE *)DeviceExtension + 71) = v7;
    if ( v19 )
      return ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
               *((_QWORD *)DeviceExtension + 5),
               *((_QWORD *)DeviceExtension + 6),
               -1,
               (POWER_STATE)v7.SystemState,
               a5);
  }
  else if ( (int)State < *((_DWORD *)DeviceExtension + 71) )
  {
    v9 = a5;
    v25 = a5;
    if ( a5 != 3 )
      goto LABEL_4;
    if ( a4 >= 2 )
    {
      if ( a4 <= 4 )
      {
        v9 = 2;
        v25 = 2;
        WdLogSingleEntry1(4LL, DeviceObject);
        goto LABEL_4;
      }
      if ( a4 == 5 )
      {
        WdLogSingleEntry1(4LL, DeviceObject);
        goto LABEL_4;
      }
    }
    WdLogSingleEntry1(2LL, DeviceObject);
LABEL_4:
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v10 = *((_QWORD *)DeviceExtension + 487);
      v27 = 0LL;
      if ( v10 )
        DxgkReportAdapterPowerRapidHpdTrigerEvent(v10);
      if ( (PDEVICE_OBJECT)qword_1C0130740 == DeviceObject )
      {
        if ( dword_1C01307F0 == 3 && byte_1C0130810 )
        {
          LOBYTE(State) = 1;
          DpiAcquirePostDisplayInfoFromBgfx(&xmmword_1C0130750, State, 0LL);
          byte_1C0130810 = 0;
          dword_1C013083C = 1;
          v27 = DeviceObject;
        }
        if ( v26 == 5 )
        {
          if ( !byte_1C0130809 )
          {
            v11 = *((_QWORD *)DeviceExtension + 3);
            v23[0] = 0;
            if ( (int)DpiFdoDetectPostDevice(v11, v23) >= 0 && v23[0] != DeviceExtension[1152] )
              DpiFdoRebootForSurpriseRemoval(DeviceObject, 0LL);
          }
          v12 = *((_QWORD *)DeviceExtension + 487);
          if ( (!v12 || *(int *)(v12 + 2692) <= 1105) && byte_1C0130495 )
          {
            v28 = -1;
            v29 = 0LL;
            if ( (qword_1C012F870 & 2) != 0 )
            {
              v30 = 1;
              v28 = 8007;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerEnter, a3, 8007);
            }
            else
            {
              v30 = 0;
            }
            DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 8007);
            memset(v31, 0, sizeof(v31));
            LODWORD(v31[0]) = 18;
            x86BiosCall(16LL, v31);
            xmmword_1C0130760 = 0LL;
            DWORD2(xmmword_1C0130760) = -1;
            xmmword_1C0130750 = 0LL;
            memset(&xmmword_1C0130770, 0, 0x80uLL);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
            if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v28);
          }
        }
      }
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        if ( *((_QWORD *)DeviceExtension + 3) == qword_1C0130740 )
        {
          qword_1C01307F8 = (__int64)KeGetCurrentThread();
          qword_1C0130800 = (__int64)v27;
        }
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
          *((_QWORD *)DeviceExtension + 5),
          *((_QWORD *)DeviceExtension + 6),
          -1,
          (POWER_STATE)v7.SystemState,
          v25);
        ++*((_DWORD *)DeviceExtension + 1073);
        if ( (struct _KTHREAD *)qword_1C01307F8 == KeGetCurrentThread() )
        {
          qword_1C0130800 = 0LL;
          qword_1C01307F8 = 0LL;
        }
        if ( (PDEVICE_OBJECT)qword_1C0130740 == DeviceObject && dword_1C01307F0 == 3 )
        {
          xmmword_1C0130760 = 0LL;
          DWORD2(xmmword_1C0130760) = -1;
          xmmword_1C0130750 = 0LL;
          memset(&xmmword_1C0130770, 0, 0x80uLL);
        }
        v24 = DpiRequestIoPowerState(DeviceObject, 2LL, v13, 0LL);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3792), 1u);
        *((POWER_STATE *)DeviceExtension + 71) = v7;
        ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3792));
        KeLeaveCriticalRegion();
        if ( DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
        {
          if ( byte_1C0130499 )
          {
            DeviceExtension[3513] = 1;
          }
          else
          {
            WorkItem = IoAllocateWorkItem(DeviceObject);
            if ( WorkItem )
              IoQueueWorkItemEx(WorkItem, DpiFdoInvalidateChildWorkItem, DelayedWorkQueue, 0LL);
            else
              WdLogSingleEntry1(6LL, -1073741670LL);
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
        *((POWER_STATE *)DeviceExtension + 71) = v7;
        ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3792));
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        v24 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                *((_QWORD *)DeviceExtension + 5),
                *((_QWORD *)DeviceExtension + 6),
                -1,
                (POWER_STATE)v7.SystemState,
                v9);
      *((POWER_STATE *)DeviceExtension + 71) = v7;
    }
    PoSetPowerState(DeviceObject, DevicePowerState, v7);
    return v24;
  }
  return 0LL;
}
