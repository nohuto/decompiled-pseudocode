/*
 * XREFs of DeferredRoutine @ 0x1C002D220
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

void __fastcall DeferredRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // r10
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  _QWORD *v10; // r11
  __int64 v11; // r10

  v4 = DeferredContext[1];
  _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 688), 0LL, (signed __int64)DeferredContext);
  sub_1C000FD80(DeferredContext[2], 8, 1869567025, v4, (__int64)DeferredContext);
  sub_1C000FD80(DeferredContext[2], 8, 1869567026, v6, v7);
  if ( DeferredContext == v10 && *(_QWORD *)(v9 + 392) )
  {
    sub_1C000FD80(DeferredContext[2], 8, 1869567027, v8, (__int64)v10);
    _InterlockedExchange((volatile __int32 *)(v11 + 428), 6);
    sub_1C004A608(
      DeferredContext[2],
      *(unsigned __int16 *)(v11 + 4),
      41,
      (_DWORD)DeferredContext,
      160,
      *((_DWORD *)DeferredContext + 38),
      *((_DWORD *)DeferredContext + 39),
      (__int64)aHubC,
      1950,
      0);
  }
  sub_1C001B88C(DeferredContext[2], (__int64)(DeferredContext + 3));
  sub_1C001B88C(DeferredContext[2], (__int64)DeferredContext);
  ExFreePoolWithTag(DeferredContext, 0);
}
