/*
 * XREFs of DpiFdoPendingCreatePdoCompletion @ 0x1C02C81CC
 * Callers:
 *     DpiPdoIsChildConnected @ 0x1C01795D4 (DpiPdoIsChildConnected.c)
 *     DpiPdoAddPdo @ 0x1C0179C7C (DpiPdoAddPdo.c)
 *     DpiPdoPollingWorkItem @ 0x1C02D92E0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiFdoPendingCreatePdoCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  LONG result; // eax

  v2 = *(_QWORD *)(a1 + 64);
  *(_BYTE *)(a2 + 64) = 0;
  if ( (*(_DWORD *)(v2 + 3688))-- == 1 )
    return KeSetEvent((PRKEVENT)(v2 + 3696), 0, 0);
  return result;
}
