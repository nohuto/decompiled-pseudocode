/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0032554
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00D2340 (VidSchFlushAdapter.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009E00 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0010CE0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00112BC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C00313F4 (VidSchiRundownUnorderedWaiterDevice.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  char v10; // [rsp+30h] [rbp-30h]
  _QWORD v11[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v12; // [rsp+58h] [rbp-8h]

  v3 = 0;
  if ( a3 != 5 && *(_DWORD *)(a1 + 808) )
  {
    if ( a3 < 6 )
    {
      return (unsigned int)-2147483631;
    }
    else if ( *(_DWORD *)(a1 + 808) )
    {
      v12 = 0;
      v11[0] = a2 + 1712;
      AcquireSpinLock::Acquire((Acquire *)v11);
      v10 = 0;
      v6 = (_QWORD *)(a1 + 288);
      v9[1] = v9;
      v7 = *(_QWORD **)(a1 + 288);
      v9[0] = v9;
      if ( v7 == v6 )
        goto LABEL_8;
      do
      {
        VidSchiRundownUnorderedWaiterDevice((struct HwQueueStagingList *)v9, (__int64)(v7 - 13), v5);
        v7 = (_QWORD *)*v7;
      }
      while ( v7 != v6 );
      if ( !v10 )
LABEL_8:
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v9);
      AcquireSpinLock::Release((AcquireSpinLock *)v11);
    }
  }
  return v3;
}
