/*
 * XREFs of ?VidSchiProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00401E0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0042A90 (VidSchiCreateNodeSchedulingLog.c)
 */

void __fastcall VidSchiProcessAsyncOperation(struct _VIDSCH_NODE **P)
{
  if ( *((_DWORD *)P + 10) == 1 )
    VidSchiCreateNodeSchedulingLog(P[6]);
  _InterlockedDecrement((volatile signed __int32 *)P[4] + 2802);
  KeSetEvent((PRKEVENT)((char *)P[4] + 11216), 0, 0);
  ExFreePoolWithTag(P, 0);
}
