/*
 * XREFs of FeedbackSetWindowSetting @ 0x1C0024798
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C0024920 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C002475C (-GetStore@Feedback@@YA-AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z.c)
 *     InternalSetProp @ 0x1C002481C (InternalSetProp.c)
 */

__int64 __fastcall FeedbackSetWindowSetting(__int64 a1, char a2, int a3)
{
  unsigned int v5; // edx
  __m128i v7; // [rsp+20h] [rbp-28h]
  __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = *(__m128i *)Feedback::GetStore(v8, a1);
  v5 = ~(1 << a2) & (_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) | (0x10000 << a2));
  if ( a3 )
    v5 |= 1 << a2;
  InternalSetProp(v7.m128i_i64[0], (unsigned __int16)gatomFeedbackSettings, v5, 5LL);
  return 1LL;
}
