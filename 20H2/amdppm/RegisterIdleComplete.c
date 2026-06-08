/*
 * XREFs of RegisterIdleComplete @ 0x1C002F398
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C000AC40 (RegisterKernelIdleStates.c)
 *     RegisterHvLpiStates @ 0x1C002329C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x1C0023C20 (RegisterVmIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C002F8E4 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C002FA5C (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x1C0030FB4 (RegisterKernelPlatformStates.c)
 *     PepRegisterSpmSettings @ 0x1C00358FC (PepRegisterSpmSettings.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  __int64 v2; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C0013970 == dword_1C00133F4 )
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
        if ( !qword_1C00139A0 )
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
        (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids);
    }
  }
}
