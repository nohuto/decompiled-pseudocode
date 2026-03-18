/*
 * XREFs of SmRegistrationCtxStart @ 0x1407CD528
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140337B6C (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmGetRegistrationInfo @ 0x1407CAF8C (SmGetRegistrationInfo.c)
 *     SmcCacheCreatePrepare @ 0x14092CF44 (SmcCacheCreatePrepare.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     SmCreateEvent @ 0x1407CD580 (SmCreateEvent.c)
 */

__int64 __fastcall SmRegistrationCtxStart(struct _DMA_ADAPTER **a1)
{
  int v2; // ebx
  struct _DMA_ADAPTER *v3; // rcx
  struct _DMA_ADAPTER *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = SmCreateEvent(a1, &v5);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *a1 = v5;
    v2 = 0;
  }
  if ( v3 )
    HalPutDmaAdapter(v3);
  return (unsigned int)v2;
}
