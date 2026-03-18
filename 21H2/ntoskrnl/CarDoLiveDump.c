/*
 * XREFs of CarDoLiveDump @ 0x1406052FC
 * Callers:
 *     CarWriteLivedump @ 0x1406055D0 (CarWriteLivedump.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     DifiDbgPrint @ 0x140605160 (DifiDbgPrint.c)
 *     CarLiveDump @ 0x1406053C0 (CarLiveDump.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CarDoLiveDump(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  const char *v7; // r8
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  v5 = 0;
  if ( !a1 )
    return 3221225485LL;
  qword_140C18EC8 = a2;
  qword_140C18EE0 = a5;
  CarLiveDumpData = a1;
  qword_140C18ED0 = a3;
  qword_140C18ED8 = a4;
  v7 = *(const char **)(a1 + 1112);
  if ( v7 )
    DifiDbgPrint("Driver Verifier: Livedump scheduled with Error Code: 0x%X Error Message: '%s'\n", a2, v7);
  if ( KeGetCurrentIrql() )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1316118851LL);
    if ( Pool2 )
    {
      Pool2->Parameter = Pool2;
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))CarLiveDump;
      Pool2->List.Flink = 0LL;
      ExQueueWorkItem(Pool2, SuperCriticalWorkQueue);
      return 259;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    CarLiveDump(0LL);
  }
  return v5;
}
