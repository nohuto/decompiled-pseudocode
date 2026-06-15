/*
 * XREFs of WPP_SF_Pi @ 0x1800EEE18
 * Callers:
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800EDC60 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Pi(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids, 32LL, (__int64 *)va);
}
