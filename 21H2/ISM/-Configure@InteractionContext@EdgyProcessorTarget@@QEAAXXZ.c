/*
 * XREFs of ?Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ @ 0x18017A4D4
 * Callers:
 *     ?OnInput@InteractionContext@EdgyProcessorTarget@@QEAAXPEBUPointerInputInfo@@@Z @ 0x18017B1CC (-OnInput@InteractionContext@EdgyProcessorTarget@@QEAAXPEBUPointerInputInfo@@@Z.c)
 *     ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x18017B42C (-OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall EdgyProcessorTarget::InteractionContext::Configure(EdgyProcessorTarget::InteractionContext *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  int InteractionContext; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (_QWORD *)((char *)this + 8);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    ResetInteractionContext(v3);
  }
  else
  {
    InteractionContext = CreateInteractionContext(v1);
    if ( InteractionContext < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        852LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)InteractionContext);
      __debugbreak();
    }
  }
  v5 = *v1;
  *(__m128i *)v10 = _mm_load_si128((const __m128i *)&_xmm);
  v6 = SetPropertyInteractionContext(v5, 3LL, 0LL);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      864LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = SetPropertyInteractionContext(*v1, 2LL, 0LL);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      865LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = SetInteractionConfigurationInteractionContext(*v1, 2LL, v10);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      866LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = RegisterOutputCallbackInteractionContext(*v1, EdgyProcessorTarget::InteractionContext::StaticCallback, this);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      867LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
}
