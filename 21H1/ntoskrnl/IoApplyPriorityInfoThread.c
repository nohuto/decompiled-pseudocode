/*
 * XREFs of IoApplyPriorityInfoThread @ 0x140234CF0
 * Callers:
 *     <none>
 * Callees:
 *     PsSetIoPriorityThread @ 0x140234A9C (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140234D94 (PsSetPagePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  struct _IO_PRIORITY_INFO v7; // [rsp+20h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  v7.IoPriority = PsSetIoPriorityThread((__int64)Thread, InputPriorityInfo->IoPriority);
  if ( InputPriorityInfo->PagePriority == -1 )
    v7.PagePriority = -1;
  else
    v7.PagePriority = PsSetPagePriorityThread(Thread);
  if ( InputPriorityInfo->ThreadPriority == -1 )
  {
    v7.ThreadPriority = -1;
  }
  else
  {
    v7.ThreadPriority = Thread->BasePriority;
    KeSetActualBasePriorityThread(Thread);
  }
  if ( OutputPriorityInfo )
  {
    v7.Size = 16;
    *OutputPriorityInfo = v7;
  }
  return 0;
}
