/*
 * XREFs of ?IVWorkerThread@@YAXPEAX@Z @ 0x1C01B2B60
 * Callers:
 *     <none>
 * Callees:
 *     SetThreadBasePriority @ 0x1C0047160 (SetThreadBasePriority.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IVWorkerThread(PVOID StartContext)
{
  gpIVThread = (__int64)KeGetCurrentThread();
  SetThreadBasePriority((PETHREAD)gpIVThread, 16);
  if ( qword_1C0251CD8 )
    qword_1C0251CD8(gpIVThread, 0LL);
  KeSetEvent(gpkeIVThreadStarted, 1, 0);
  while ( KeWaitForSingleObject(gpkeIVThreadShutdown, Executive, 0, 0, 0LL) )
    ;
  Win32FreePool((__int64)gpkeIVThreadStarted);
  gpkeIVThreadStarted = 0LL;
  Win32FreePool((__int64)gpkeIVThreadShutdown);
  gpkeIVThreadShutdown = 0LL;
  if ( qword_1C0251CD8 )
    qword_1C0251CD8(gpIVThread, 1LL);
  gpIVThread = 0LL;
}
