/*
 * XREFs of ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0015458
 * Callers:
 *     VidSchiEnsureVSyncEnabled @ 0x1C0067BE0 (VidSchiEnsureVSyncEnabled.c)
 * Callees:
 *     <none>
 */

void __fastcall IncrementNumberOfQueuedFlipPerSource(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  if ( *((_BYTE *)a1 + 2132) )
    a1 = (struct _VIDSCH_GLOBAL *)((char *)a1 + 4 * a2);
  _InterlockedIncrement((volatile signed __int32 *)a1 + 183);
}
