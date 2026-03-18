/*
 * XREFs of VidSchSubmitCommandContextless @ 0x1C00358C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004FF0 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C0030930 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 */

__int64 __fastcall VidSchSubmitCommandContextless(char *Src, struct _VIDSCH_DEVICE *a2, __int64 a3)
{
  struct _VIDSCH_GLOBAL *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 && a2 && Src )
  {
    v5 = *(struct _VIDSCH_GLOBAL **)(a3 + 8);
    v8 = *(_QWORD *)Src;
    if ( (v8 & 0x20) == 0 )
      return VidSchiRedirectedFlipWaitOnSyncObject(v5, Src, a3, &v8);
    result = VidSchValidatePresentFlags((struct VIDSCH_SUBMIT_DATA2 *)Src, a2, (struct _VIDSCH_SUBMIT_FLAGS *)&v8);
    if ( (int)result >= 0 )
      return VidSchiRedirectedFlipWaitOnSyncObject(v5, Src, a3, &v8);
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(Src, a2, a3);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
  return result;
}
