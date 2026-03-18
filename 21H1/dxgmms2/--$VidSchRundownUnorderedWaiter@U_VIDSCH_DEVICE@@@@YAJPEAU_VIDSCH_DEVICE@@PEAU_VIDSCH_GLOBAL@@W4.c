/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0011188
 * Callers:
 *     VidSchFlushDevice @ 0x1C0080520 (VidSchFlushDevice.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A580 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00115E0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C001217C (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002BE24 (-VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        union _LARGE_INTEGER Interval)
{
  unsigned int v5; // edi
  _QWORD *v9; // rbx
  _QWORD *v10; // r15
  _QWORD **v11; // r15
  _QWORD *v12; // rsi
  struct _VIDSCH_QUEUE_PACKET *v13; // rdx
  _QWORD **v14; // r14
  _QWORD *v15; // rbx
  _QWORD *v16; // r15
  _QWORD **v17; // r15
  _QWORD *v18; // rsi
  _QWORD *v19; // r13
  _QWORD **v20; // r13
  _QWORD *v21; // r12
  struct _VIDSCH_QUEUE_PACKET *v22; // rdx
  _QWORD v23[2]; // [rsp+20h] [rbp-40h] BYREF
  char v24; // [rsp+30h] [rbp-30h]
  _QWORD v25[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v26; // [rsp+58h] [rbp-8h]

  v5 = 0;
  if ( a3 != 5 && *(_DWORD *)(a1 + 1588) )
  {
    if ( a3 < 6 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( *(_DWORD *)(a1 + 1588) )
      {
        v26 = 0;
        v25[0] = a2 + 1712;
        AcquireSpinLock::Acquire((AcquireSpinLock *)v25);
        v24 = 0;
        v23[1] = v23;
        v9 = *(_QWORD **)(a1 + 72);
        v23[0] = v23;
        while ( v9 != (_QWORD *)(a1 + 72) )
        {
          v10 = v9;
          v9 = (_QWORD *)*v9;
          v11 = (_QWORD **)(v10 + 80);
          v12 = *v11;
          while ( v12 != v11 )
          {
            v13 = (struct _VIDSCH_QUEUE_PACKET *)(v12 - 4);
            v12 = (_QWORD *)*v12;
            VidSchiRundownUnorderedWaiterPacket((struct HwQueueStagingList *)v23, v13);
          }
        }
        v14 = (_QWORD **)(a1 + 88);
        v15 = *v14;
        while ( v15 != v14 )
        {
          v16 = v15;
          v15 = (_QWORD *)*v15;
          v17 = (_QWORD **)(v16 + 4);
          v18 = *v17;
          while ( v18 != v17 )
          {
            v19 = v18;
            v18 = (_QWORD *)*v18;
            v20 = (_QWORD **)(v19 + 19);
            v21 = *v20;
            while ( v21 != v20 )
            {
              v22 = (struct _VIDSCH_QUEUE_PACKET *)(v21 - 4);
              v21 = (_QWORD *)*v21;
              VidSchiRundownUnorderedWaiterPacket((struct HwQueueStagingList *)v23, v22);
            }
          }
        }
        HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v23);
        AcquireSpinLock::Release((AcquireSpinLock *)v25);
      }
    }
  }
  return v5;
}
