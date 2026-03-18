/*
 * XREFs of SepNotifyFileSystems @ 0x140920520
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SepNotifyFileSystems(char *P)
{
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall **i)(char *); // rdi
  PVOID j; // rdi
  void *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  for ( i = (void (__fastcall **)(char *))SeFileSystemNotifyRoutinesHead; i; i = (void (__fastcall **)(char *))*i )
    i[1](P + 32);
  for ( j = SeFileSystemNotifyRoutinesExHead; j; j = *(PVOID *)j )
    (*((void (__fastcall **)(char *, _QWORD, _QWORD))j + 1))(P + 32, *((_QWORD *)P + 5), *((_QWORD *)j + 2));
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v5 = (void *)*((_QWORD *)P + 5);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x53466553u);
  ExFreePoolWithTag(P, 0);
}
