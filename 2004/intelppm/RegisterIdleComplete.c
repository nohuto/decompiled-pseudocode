/*
 * XREFs of RegisterIdleComplete @ 0x1C0025454
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0003B20 (RegisterKernelIdleStates.c)
 *     RegisterHvLpiStates @ 0x1C003068C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x1C0030FFC (RegisterVmIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     PepRegisterSpmSettings @ 0x1C0025840 (PepRegisterSpmSettings.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C00358FC (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0035A74 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x1C0036C6C (RegisterKernelPlatformStates.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  __int64 v2; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C001C988 == dword_1C001C414 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      v2 = *(_QWORD *)(a1 + 272);
      if ( (v2 & 0xE0000000000LL) != 0 )
      {
        RegisterKernelCoordinatedLpiStates(a1);
      }
      else if ( (v2 & 0x200000200LL) != 0 )
      {
        RegisterKernelCoordinatedStates(a1);
        if ( !qword_1C001C9B8 )
          RegisterKernelPlatformStates(a1);
      }
      PepRegisterSpmSettings(a1);
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x11u,
        (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids);
    }
  }
}
