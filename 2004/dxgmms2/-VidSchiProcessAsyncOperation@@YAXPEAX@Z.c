/*
 * XREFs of ?VidSchiProcessAsyncOperation@@YAXPEAX@Z @ 0x1C0038180
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C003ACF0 (VidSchiCreateNodeSchedulingLog.c)
 */

void __fastcall VidSchiProcessAsyncOperation(struct _VIDSCH_NODE **P)
{
  if ( *((_DWORD *)P + 10) == 1 )
    VidSchiCreateNodeSchedulingLog(P[6]);
  _InterlockedDecrement((volatile signed __int32 *)P[4] + 2798);
  KeSetEvent((PRKEVENT)((char *)P[4] + 11200), 0, 0);
  ExFreePoolWithTag(P, 0);
}
