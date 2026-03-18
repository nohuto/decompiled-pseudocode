/*
 * XREFs of IoApplyPriorityInfoThread @ 0x14028F280
 * Callers:
 *     <none>
 * Callees:
 *     PsSetPagePriorityThread @ 0x14028F63C (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x14028F698 (PsSetIoPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  struct _IO_PRIORITY_INFO v7; // [rsp+20h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  v7.IoPriority = PsSetIoPriorityThread(Thread, (unsigned int)InputPriorityInfo->IoPriority);
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
    KeSetActualBasePriorityThread((ULONG_PTR)Thread);
  }
  if ( OutputPriorityInfo )
  {
    v7.Size = 16;
    *OutputPriorityInfo = v7;
  }
  return 0;
}
