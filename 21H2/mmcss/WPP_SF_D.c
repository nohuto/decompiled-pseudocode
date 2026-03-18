/*
 * XREFs of WPP_SF_d @ 0x1C00048F4
 * Callers:
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     CiNdisThrottle @ 0x1C000A0A0 (CiNdisThrottle.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000A380 (CiCreateTaskIndexClientFromThread.c)
 *     CiTaskIndexCreate @ 0x1C000B4E0 (CiTaskIndexCreate.c)
 *     CiNdisOpenDevice @ 0x1C000BC40 (CiNdisOpenDevice.c)
 *     CsInitialize @ 0x1C000D320 (CsInitialize.c)
 *     CiConfigInitialize @ 0x1C000D4E0 (CiConfigInitialize.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D8D0 (CiConfigInitializeFromRegistry.c)
 *     CiTaskDump @ 0x1C000DBA0 (CiTaskDump.c)
 *     CiTaskAllocate @ 0x1C000DC50 (CiTaskAllocate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00033D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_d(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
