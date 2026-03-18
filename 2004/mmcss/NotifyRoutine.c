/*
 * XREFs of NotifyRoutine @ 0x1C0001060
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000B4C0 @ 0x1C000B4C0 (sub_1C000B4C0.c)
 *     sub_1C000B570 @ 0x1C000B570 (sub_1C000B570.c)
 */

void __fastcall NotifyRoutine(HANDLE ProcessId, HANDLE ThreadId, BOOLEAN Create)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx

  if ( !Create )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.BufferChainingDpc);
    *(_QWORD *)&DeviceObject.AlignmentRequirement = KeGetCurrentThread();
    v5 = *(_QWORD *)&DeviceObject.DeviceQueue.Type;
    if ( ((__int64)DeviceObject.DeviceQueue.DeviceListHead.Flink & 1) != 0 && *(_QWORD *)&DeviceObject.DeviceQueue.Type )
      v5 = (unsigned __int64)&DeviceObject.DeviceQueue ^ *(_QWORD *)&DeviceObject.DeviceQueue.Type;
    while ( v5 )
    {
      if ( (unsigned __int64)CurrentThread < *(_QWORD *)(v5 + 56) )
      {
        v6 = *(_QWORD *)v5;
        if ( ((__int64)DeviceObject.DeviceQueue.DeviceListHead.Flink & 1) != 0 && v6 )
        {
          v5 ^= v6;
          continue;
        }
      }
      else
      {
        if ( (unsigned __int64)CurrentThread <= *(_QWORD *)(v5 + 56) )
        {
          v4 = v5 - 40;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 - 40 + 32)) <= 1 )
            __fastfail(0xEu);
          break;
        }
        v6 = *(_QWORD *)(v5 + 8);
        if ( ((__int64)DeviceObject.DeviceQueue.DeviceListHead.Flink & 1) != 0 && v6 )
        {
          v5 ^= v6;
          continue;
        }
      }
      v5 = v6;
    }
    *(_QWORD *)&DeviceObject.AlignmentRequirement = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.BufferChainingDpc, 0);
    if ( v4 )
    {
      sub_1C000B570(v4);
      sub_1C000B4C0(v4);
    }
  }
}
