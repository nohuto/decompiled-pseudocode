/*
 * XREFs of ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0036A04
 * Callers:
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C003CEA0 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C003CF00 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestDevicePowerState @ 0x1C004F994 (DpiRequestDevicePowerState.c)
 *     DpiIsNeedWakeUpAdapter @ 0x1C00502E8 (DpiIsNeedWakeUpAdapter.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, __int64 a2)
{
  unsigned int v3; // edi
  struct DXGGLOBAL *Global; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( *((_BYTE *)this + 204) )
  {
    if ( (_BYTE)a2 )
      PoFxReportDevicePoweredOn(*((_QWORD *)this + 348));
  }
  else
  {
    if ( (_BYTE)a2 )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
      v3 = 1;
      if ( *((_DWORD *)Global + 464)
        && *((_BYTE *)Global + 304096)
        && (unsigned __int8)DpiIsNeedWakeUpAdapter(*((_QWORD *)this + 27)) )
      {
        WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)this + 27));
        if ( WorkItem )
          IoQueueWorkItemEx(WorkItem, DXGGLOBAL::ReportGpuWakeupWorkItemCallback, DelayedWorkQueue, 0LL);
      }
    }
    else
    {
      v3 = 4;
    }
    DpiRequestDevicePowerState(*((_QWORD *)this + 27), v3);
  }
}
