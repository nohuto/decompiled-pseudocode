/*
 * XREFs of MmCanThreadFault @ 0x1402C8EE8
 * Callers:
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 *     EtwpStackTraceDispatcher @ 0x1405A1A30 (EtwpStackTraceDispatcher.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x1405AA27C (EtwpCovSampSafeForUserAddressCapture.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x1402C8F70 (ObGetCurrentIrql.c)
 */

_BOOL8 __fastcall MmCanThreadFault(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v3; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned __int8)ObGetCurrentIrql(a1, a2) < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0
      && (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink != KiExecuteDpc )
    {
      if ( MmPhysicalMemoryBlock )
      {
        v3 = *(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessorPadding[5])
                       + 6848LL);
        if ( v3 )
        {
          if ( CurrentThread != *(struct _KTHREAD **)(v3 + 88) )
            return 1;
        }
      }
    }
  }
  return result;
}
