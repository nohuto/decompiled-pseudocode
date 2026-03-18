/*
 * XREFs of PopFxDirectedWorkOrderWatchdog @ 0x140565560
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopFxDirectedWorkOrderWatchdog(__int64 a1, __int64 a2)
{
  KeBugCheckEx(0x9Fu, 5uLL, *(_QWORD *)(a2 - 976 + 96), a2 - 976, 0LL);
}
