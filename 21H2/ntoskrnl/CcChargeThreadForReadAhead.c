/*
 * XREFs of CcChargeThreadForReadAhead @ 0x140304638
 * Callers:
 *     CcScheduleReadAheadEx @ 0x140303B50 (CcScheduleReadAheadEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall CcChargeThreadForReadAhead(__int64 a1, __int64 a2, __int64 a3, int a4, struct _KTHREAD *a5)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // rdx

  result = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 48);
  if ( !*(_DWORD *)(*(_QWORD *)(result + 8) + 4LL) )
    KeBugCheckEx(0x34u, 0x5F8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a4 > 0 )
  {
    if ( a4 > 2 )
    {
      if ( a4 != 3 )
        return result;
      v7 = *(unsigned int *)(v6 + 52);
    }
    else
    {
      v7 = *(unsigned int *)(v6 + 52);
      result = *(_QWORD *)(v6 + 72);
      v8 = v7 + *(_QWORD *)(v6 + 56);
      if ( result )
      {
        if ( v8 <= result )
          return result;
        v7 = v8 - result;
      }
      _InterlockedExchange64((volatile __int64 *)(v6 + 72), v8);
    }
    if ( v7 )
    {
      CurrentThread = a5;
      if ( !a5 )
        CurrentThread = KeGetCurrentThread();
      result = (unsigned __int64)CurrentThread->Process;
      v10 = *(volatile signed __int64 **)(result + 2232);
      if ( v10 )
      {
        _InterlockedExchangeAdd64(v10, v7);
        return _InterlockedExchangeAdd64(v10 + 2, 1uLL);
      }
    }
  }
  return result;
}
