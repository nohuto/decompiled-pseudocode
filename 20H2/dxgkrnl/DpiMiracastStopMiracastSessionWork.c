/*
 * XREFs of DpiMiracastStopMiracastSessionWork @ 0x1C02CDDD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0053140 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0053390 (DpiMiracastStopMiracastSessionSync.c)
 */

void __fastcall DpiMiracastStopMiracastSessionWork(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  DpiMiracastStopMiracastSessionSync(
    *(char **)Context,
    *((_BYTE *)Context + 8),
    (union _LARGE_INTEGER *)Context + 2,
    0LL,
    *((_DWORD *)Context + 6),
    0);
  DpiMiracastReleaseMiracastDeviceContext(*(int **)Context, (__int64)DpiMiracastStopMiracastSessionAsync);
  ExFreePoolWithTag(Context, 0);
}
