/*
 * XREFs of SmRegistrationCtxStart @ 0x1407BBB2C
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402CAF84 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmGetRegistrationInfo @ 0x1407B958C (SmGetRegistrationInfo.c)
 *     SmcCacheCreatePrepare @ 0x140925E6C (SmcCacheCreatePrepare.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     SmCreateEvent @ 0x1407BBB84 (SmCreateEvent.c)
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
