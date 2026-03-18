/*
 * XREFs of CreateKernelEvent @ 0x1C002C530
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C002C58C (-UserInitialize@@YAJXZ.c)
 *     VideoPortCallout @ 0x1C0121020 (VideoPortCallout.c)
 *     IVStartupWorkerThread @ 0x1C01B6F9C (IVStartupWorkerThread.c)
 *     ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x1C01BD7FC (-PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 */

struct _KEVENT *__fastcall CreateKernelEvent(EVENT_TYPE Type, BOOLEAN a2)
{
  struct _KEVENT *v4; // rax
  struct _KEVENT *v5; // rbx

  v4 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 1699443541LL);
  v5 = v4;
  if ( v4 )
    KeInitializeEvent(v4, Type, a2);
  return v5;
}
