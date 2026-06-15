/*
 * XREFs of ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x180053740
 * Callers:
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800535D4 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180067D3C (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSerialWorkQueue::Initialize(PTP_POOL *this)
{
  PTP_POOL Threadpool; // rax
  signed int v3; // ebx
  signed int LastError; // eax
  signed int v6; // eax

  if ( *this )
    return 0;
  Threadpool = CreateThreadpool(0LL);
  *this = Threadpool;
  if ( Threadpool )
  {
    v3 = 0;
  }
  else
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v3 >= 0 )
  {
    if ( SetThreadpoolThreadMinimum(*this, 1u) )
    {
      v3 = 0;
LABEL_7:
      SetThreadpoolThreadMaximum(*this, 1u);
      this[2] = *this;
      return (unsigned int)v3;
    }
    v6 = GetLastError();
    v3 = v6;
    if ( v6 > 0 )
      v3 = (unsigned __int16)v6 | 0x80070000;
    if ( v3 >= 0 )
      goto LABEL_7;
  }
  return (unsigned int)v3;
}
