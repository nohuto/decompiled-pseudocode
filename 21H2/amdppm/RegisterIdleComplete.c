/*
 * XREFs of RegisterIdleComplete @ 0x1C00301C0
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C000B430 (RegisterKernelIdleStates.c)
 *     RegisterHvLpiStates @ 0x1C002476C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x1C00250F0 (RegisterVmIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003070C (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0030884 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x1C0031DD4 (RegisterKernelPlatformStates.c)
 *     PepRegisterSpmSettings @ 0x1C003699C (PepRegisterSpmSettings.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  __int64 v2; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C0014978 == dword_1C00143F4 )
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
        if ( !qword_1C00149A8 )
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
        (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids);
    }
  }
}
