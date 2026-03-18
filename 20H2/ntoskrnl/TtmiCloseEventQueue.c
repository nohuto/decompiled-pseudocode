/*
 * XREFs of TtmiCloseEventQueue @ 0x140907BDC
 * Callers:
 *     TtmiWriteEventToAllQueues @ 0x140901DC8 (TtmiWriteEventToAllQueues.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall TtmiCloseEventQueue(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  *(_BYTE *)(a1 + 168) = 0;
  v3 = (_QWORD **)(a1 + 152);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    ExFreePoolWithTag(v4, 0x716D7454u);
  }
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
