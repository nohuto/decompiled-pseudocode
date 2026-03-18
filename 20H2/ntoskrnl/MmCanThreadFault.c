/*
 * XREFs of MmCanThreadFault @ 0x140247370
 * Callers:
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 *     EtwpStackTraceDispatcher @ 0x1405A54D0 (EtwpStackTraceDispatcher.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x1405ADDDC (EtwpCovSampSafeForUserAddressCapture.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 */

_BOOL8 MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned __int8)ObGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0
      && (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink != KiExecuteDpc )
    {
      if ( MmPhysicalMemoryBlock )
      {
        v1 = *(_QWORD *)(*(_QWORD *)(qword_140C4E4C8 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessorPadding[5])
                       + 6848LL);
        if ( v1 )
        {
          if ( CurrentThread != *(struct _KTHREAD **)(v1 + 88) )
            return 1;
        }
      }
    }
  }
  return result;
}
