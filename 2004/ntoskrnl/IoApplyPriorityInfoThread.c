/*
 * XREFs of IoApplyPriorityInfoThread @ 0x1402C7B20
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x1402C78CC (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1402C7BC4 (PsSetPagePriorityThread.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  _IO_PRIORITY_HINT v6; // eax
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 PagePriority; // rdx
  __int64 ThreadPriority; // rdx
  struct _IO_PRIORITY_INFO v12; // [rsp+20h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  v6 = (unsigned int)PsSetIoPriorityThread((__int64)Thread, InputPriorityInfo->IoPriority);
  PagePriority = InputPriorityInfo->PagePriority;
  v12.IoPriority = v6;
  if ( (_DWORD)PagePriority == -1 )
    v12.PagePriority = -1;
  else
    v12.PagePriority = PsSetPagePriorityThread(Thread, PagePriority);
  ThreadPriority = InputPriorityInfo->ThreadPriority;
  if ( (_DWORD)ThreadPriority == -1 )
  {
    v12.ThreadPriority = -1;
  }
  else
  {
    v12.ThreadPriority = Thread->BasePriority;
    KeSetActualBasePriorityThread((__int64)Thread, ThreadPriority, v7, v8);
  }
  if ( OutputPriorityInfo )
  {
    v12.Size = 16;
    *OutputPriorityInfo = v12;
  }
  return 0;
}
