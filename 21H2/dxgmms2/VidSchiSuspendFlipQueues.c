/*
 * XREFs of VidSchiSuspendFlipQueues @ 0x1C00ABA9C
 * Callers:
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x1C00AB9A0 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D6564 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C001C29C (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C001C300 (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 */

__int64 __fastcall VidSchiSuspendFlipQueues(unsigned int *a1, int a2)
{
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx

  result = a1[10];
  for ( i = 0LL; (unsigned int)i < (unsigned int)result; i = (unsigned int)(i + 1) )
  {
    if ( _bittest(&a2, i) )
    {
      v7 = *(_QWORD *)&a1[2 * i + 800];
      if ( v7 )
        VidSchiMarkFlipQueuesRunningStateOnPresentInfo((__int64)a1, v7, 0);
    }
    result = a1[10];
  }
  v6 = 0LL;
  if ( (_DWORD)result )
  {
    do
    {
      if ( _bittest(&a2, v6) )
      {
        v8 = *(_QWORD *)&a1[2 * v6 + 800];
        if ( v8 )
          result = VidSchiFlushPendingHWSubmittedFlips((struct _VIDSCH_GLOBAL *)a1, v8);
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < a1[10] );
  }
  return result;
}
