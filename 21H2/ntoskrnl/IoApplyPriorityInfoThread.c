/*
 * XREFs of IoApplyPriorityInfoThread @ 0x140302290
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x140302040 (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140302334 (PsSetPagePriorityThread.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  unsigned int ThreadPriority; // edx
  struct _IO_PRIORITY_INFO v8; // [rsp+20h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  v8.IoPriority = PsSetIoPriorityThread((__int64)Thread, InputPriorityInfo->IoPriority);
  if ( InputPriorityInfo->PagePriority == -1 )
    v8.PagePriority = -1;
  else
    v8.PagePriority = PsSetPagePriorityThread(Thread);
  ThreadPriority = InputPriorityInfo->ThreadPriority;
  if ( ThreadPriority == -1 )
  {
    v8.ThreadPriority = -1;
  }
  else
  {
    v8.ThreadPriority = Thread->BasePriority;
    KeSetActualBasePriorityThread((__int64)Thread, ThreadPriority);
  }
  if ( OutputPriorityInfo )
  {
    v8.Size = 16;
    *OutputPriorityInfo = v8;
  }
  return 0;
}
