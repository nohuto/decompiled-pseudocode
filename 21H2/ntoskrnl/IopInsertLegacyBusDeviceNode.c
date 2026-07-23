/*
 * XREFs of IopInsertLegacyBusDeviceNode @ 0x1407C6DE8
 * Callers:
 *     PipCallDriverAddDevice @ 0x140741B48 (PipCallDriverAddDevice.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

void __fastcall IopInsertLegacyBusDeviceNode(__int64 a1, unsigned int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  _QWORD *v8; // rcx
  _QWORD *i; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  if ( a2 <= 0x11 && a2 != 15 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
    v7 = 1;
    if ( a2 != 2 )
      v7 = a2;
    v8 = (_QWORD *)((char *)&IopLegacyBusInformationTable + 16 * v7);
    for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i - 43) == a3 )
        goto LABEL_11;
      if ( *((_DWORD *)i - 43) > a3 )
        break;
    }
    *(_QWORD *)(a1 + 632) = i[1];
    *(_QWORD *)(a1 + 624) = i;
    *(_QWORD *)i[1] = a1 + 624;
    i[1] = a1 + 624;
LABEL_11:
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  }
}
