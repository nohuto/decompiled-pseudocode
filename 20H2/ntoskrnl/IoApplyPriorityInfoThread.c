/*
 * XREFs of IoApplyPriorityInfoThread @ 0x140249590
 * Callers:
 *     <none>
 * Callees:
 *     PsSetPagePriorityThread @ 0x140249634 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x14024B340 (PsSetIoPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  _IO_PRIORITY_HINT v6; // eax
  __int64 PagePriority; // rdx
  struct _IO_PRIORITY_INFO v9; // [rsp+20h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  v6 = (unsigned int)PsSetIoPriorityThread(Thread, (unsigned int)InputPriorityInfo->IoPriority);
  PagePriority = InputPriorityInfo->PagePriority;
  v9.IoPriority = v6;
  if ( (_DWORD)PagePriority == -1 )
    v9.PagePriority = -1;
  else
    v9.PagePriority = PsSetPagePriorityThread(Thread, PagePriority);
  if ( InputPriorityInfo->ThreadPriority == -1 )
  {
    v9.ThreadPriority = -1;
  }
  else
  {
    v9.ThreadPriority = Thread->BasePriority;
    KeSetActualBasePriorityThread(Thread);
  }
  if ( OutputPriorityInfo )
  {
    v9.Size = 16;
    *OutputPriorityInfo = v9;
  }
  return 0;
}
