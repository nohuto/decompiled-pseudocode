/*
 * XREFs of EtwpStackTraceDispatcher @ 0x140460770
 * Callers:
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AB658 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1403ABB10 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpGetStackCaptureSettings @ 0x140460684 (EtwpGetStackCaptureSettings.c)
 *     EtwpQueueStackWalkApc @ 0x1406314E0 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x140631A8C (EtwpTraceStackWalk.c)
 */

void __fastcall EtwpStackTraceDispatcher(__int64 a1, __int64 a2, struct _KTHREAD *a3, unsigned int a4)
{
  unsigned int v5; // ebx
  _KTHREAD *CurrentThread; // r8
  unsigned __int8 CurrentIrql; // r14
  int v10; // edx
  char v11; // al
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( (a4 & 0x4000) == 0 || KeGetCurrentPrcb()->IdleThread != CurrentThread )
  {
    if ( !a3 )
      a3 = CurrentThread;
    if ( (a4 & 0x1000) != 0 )
    {
      v12[0] = 0;
      v13 = 0;
      if ( (a4 & 0x2000) == 0 )
      {
        EtwpGetStackCaptureSettings(a3, (a4 & 0x4000000) != 0, (a4 & 0x8000) != 0, v12, &v13);
        v11 = v13;
        if ( (v5 & 0x1000000) != 0 )
          v11 = 1;
        if ( v12[0] )
        {
          if ( v11 )
          {
            v5 &= ~0x1000u;
            LOBYTE(v10) = CurrentIrql;
            EtwpQueueStackWalkApc((_DWORD)a3, v10, a1, 0, a2);
          }
        }
        else
        {
          v5 &= ~0x1000u;
        }
      }
    }
    if ( (v5 & 0x1800) != 0 )
      EtwpTraceStackWalk(a1, v5, a3, a2);
  }
}
