/*
 * XREFs of DpiSuspendAdapterDpc @ 0x1C005F8F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C0023FC0 (DpiRequestDevicePowerState.c)
 */

void __fastcall DpiSuspendAdapterDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  WdLogSingleEntry3(5LL, DeferredContext, *((int *)DeferredContext + 1036), *((int *)DeferredContext + 1037));
  if ( *((_DWORD *)DeferredContext + 1036) != 4 && *((_DWORD *)DeferredContext + 1037) == 1 )
    DpiRequestDevicePowerState(DeferredContext[3], 4, 1);
}
