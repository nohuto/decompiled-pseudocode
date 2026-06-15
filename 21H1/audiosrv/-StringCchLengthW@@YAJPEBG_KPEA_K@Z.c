/*
 * XREFs of ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800DE260
 * Callers:
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800DE850 (AudioServerGetAudioHistoryProducerInfo.c)
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x180133A68 (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 *     ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x180135D38 (-GetAppServiceName@@YAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     StringLengthWorkerW_1 @ 0x180066A10 (StringLengthWorkerW_1.c)
 */

HRESULT __fastcall StringCchLengthW(const unsigned __int16 *a1, size_t a2, unsigned __int64 *a3)
{
  HRESULT result; // eax

  if ( a1 )
    result = StringLengthWorkerW_1(a1, a2, a3);
  else
    result = -2147024809;
  if ( result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
