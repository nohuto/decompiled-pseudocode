/*
 * XREFs of ?OnInput@InteractionContext@EdgyProcessorTarget@@QEAAXPEBUPointerInputInfo@@@Z @ 0x18017ADAC
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017A794 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ @ 0x18017A0B4 (-Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ.c)
 */

void __fastcall EdgyProcessorTarget::InteractionContext::OnInput(
        EdgyProcessorTarget::InteractionContext *this,
        const struct PointerInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    if ( *((_DWORD *)a2 + 53) != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        876LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        a4);
      __debugbreak();
    }
    if ( (int)ProcessPointerFramesInteractionContext(v5, 1LL, 1LL, (char *)a2 + 216) < 0 )
      EdgyProcessorTarget::InteractionContext::Configure(this);
  }
}
