/*
 * XREFs of AcpiNotifyCallback @ 0x1C0001C00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000548C (WPP_RECORDER_SF_DD.c)
 */

void __fastcall AcpiNotifyCallback(__int64 a1, int a2)
{
  int v4; // edx
  struct _IO_WORKITEM *WorkItem; // rbx
  IO_WORKITEM_ROUTINE *v6; // rdx

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        4,
        75,
        (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
    }
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_DD(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      2,
      76,
      (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
      a2,
      *(_DWORD *)(a1 + 56));
  }
  switch ( a2 )
  {
    case 8:
      v6 = AcpiOSCNotifyWorker;
      goto LABEL_21;
    case 128:
      v6 = (IO_WORKITEM_ROUTINE *)&AcpiPStateNotifyWorker;
      goto LABEL_21;
    case 129:
      v6 = (IO_WORKITEM_ROUTINE *)&AcpiCStateNotifyWorker;
      goto LABEL_21;
    case 130:
      v6 = (IO_WORKITEM_ROUTINE *)&AcpiTStateNotifyWorker;
      goto LABEL_21;
    case 131:
      v6 = (IO_WORKITEM_ROUTINE *)AcpiCppcGuaranteedNotifyWorker;
      goto LABEL_21;
    case 133:
      v6 = (IO_WORKITEM_ROUTINE *)AcpiCppcHighestNotifyWorker;
LABEL_21:
      IoQueueWorkItem(WorkItem, v6, CriticalWorkQueue, WorkItem);
      return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      1,
      77,
      (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
      a2);
  }
  IoFreeWorkItem(WorkItem);
}
