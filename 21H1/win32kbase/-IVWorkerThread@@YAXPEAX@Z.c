/*
 * XREFs of ?IVWorkerThread@@YAXPEAX@Z @ 0x1C01B88C0
 * Callers:
 *     <none>
 * Callees:
 *     SetThreadBasePriority @ 0x1C003A4B0 (SetThreadBasePriority.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IVWorkerThread(PVOID StartContext)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r8

  gpIVThread = (__int64)KeGetCurrentThread();
  SetThreadBasePriority((PETHREAD)gpIVThread, 16);
  if ( qword_1C0257C98 )
    qword_1C0257C98(gpIVThread, 0LL);
  KeSetEvent(gpkeIVThreadStarted, 1, 0);
  while ( KeWaitForSingleObject(gpkeIVThreadShutdown, Executive, 0, 0, 0LL) )
    ;
  Win32FreePool((__int64)gpkeIVThreadStarted, v1, v2);
  gpkeIVThreadStarted = 0LL;
  Win32FreePool((__int64)gpkeIVThreadShutdown, v3, v4);
  gpkeIVThreadShutdown = 0LL;
  if ( qword_1C0257C98 )
    qword_1C0257C98(gpIVThread, 1LL);
  gpIVThread = 0LL;
}
