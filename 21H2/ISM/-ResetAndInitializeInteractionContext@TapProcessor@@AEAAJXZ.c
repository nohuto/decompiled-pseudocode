/*
 * XREFs of ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x180181F7C
 * Callers:
 *     ?Initialize@TapProcessor@@IEAAJXZ @ 0x180181C60 (-Initialize@TapProcessor@@IEAAJXZ.c)
 *     ?OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180181DC0 (-OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TapProcessor::ResetAndInitializeInteractionContext(TapProcessor *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ResetInteractionContext(*((_QWORD *)this + 7));
  v2 = *((_QWORD *)this + 7);
  *(__m128i *)v8 = _mm_load_si128((const __m128i *)&_xmm);
  v3 = SetPropertyInteractionContext(v2, 3LL, 0LL);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      82LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = SetPropertyInteractionContext(*((_QWORD *)this + 7), 2LL, 0LL);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      83LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = SetInteractionConfigurationInteractionContext(*((_QWORD *)this + 7), 2LL, v8);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      84LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = RegisterOutputCallbackInteractionContext(*((_QWORD *)this + 7), TapProcessor::s_InteractionOutputCallback, this);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      85LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  *((_DWORD *)this + 17) = 0;
  return 0LL;
}
