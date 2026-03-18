/*
 * XREFs of VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C0011618
 * Callers:
 *     VidSchDestroyDeviceSyncObject @ 0x1C0011510 (VidSchDestroyDeviceSyncObject.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C130 (VidSchiUnwaitMonitoredFences.c)
 */

void __fastcall VidSchiRundownMonitoredFenceCpuWaiters(struct HwQueueStagingList *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  struct HwQueueStagingList *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  unsigned int i; // ebp
  _QWORD *v10; // rbx
  _QWORD *v11; // rax

  v3 = *(_QWORD *)(a3 + 32);
  v6 = a1;
  v7 = *(_QWORD **)(v3 + 832);
  if ( v7 != (_QWORD *)(v3 + 832) )
  {
    do
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      if ( v8[3] == a3 )
      {
        for ( i = 0; i < *((_DWORD *)v8 + 26); ++i )
        {
          v10 = (_QWORD *)(v8[4] + 16LL * i);
          if ( *v10 == a2 || !a2 )
          {
            v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
            v11[3] = *v10;
            v11[4] = a3;
            v11[5] = **(_QWORD **)(*v10 + 64LL);
            v11[6] = v10[1];
            v11[7] = *(unsigned __int8 *)(*v10 + 28LL);
            WdLogEvent5_WdEvent(v11);
            *v10 = 0LL;
          }
        }
      }
    }
    while ( v7 != (_QWORD *)(v3 + 832) );
    v6 = a1;
  }
  VidSchiUnwaitMonitoredFences(v6, v3, 0LL);
}
