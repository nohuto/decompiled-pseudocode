/*
 * XREFs of ?IVWorkerThread@@YAXPEAX@Z @ 0x1C01B07F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     SetThreadBasePriority @ 0x1C00A8660 (SetThreadBasePriority.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IVWorkerThread(PVOID StartContext)
{
  gpIVThread = (__int64)KeGetCurrentThread();
  SetThreadBasePriority((PETHREAD)gpIVThread, 16);
  if ( qword_1C024FCD8 )
    qword_1C024FCD8(gpIVThread, 0LL);
  KeSetEvent(gpkeIVThreadStarted, 1, 0);
  while ( KeWaitForSingleObject(gpkeIVThreadShutdown, Executive, 0, 0, 0LL) )
    ;
  Win32FreePool((__int64)gpkeIVThreadStarted);
  gpkeIVThreadStarted = 0LL;
  Win32FreePool((__int64)gpkeIVThreadShutdown);
  gpkeIVThreadShutdown = 0LL;
  if ( qword_1C024FCD8 )
    qword_1C024FCD8(gpIVThread, 1LL);
  gpIVThread = 0LL;
}
