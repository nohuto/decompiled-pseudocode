/*
 * XREFs of _EdgyProcessorTarget::UpdateInputTarget_::_1_::catch$5 @ 0x18017B95D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::UpdateInputTarget_::_1_::catch_5(__int64 a1, __int64 a2)
{
  const char *v2; // r9

  v2 = (const char *)*(unsigned int *)(*(_QWORD *)(a2 + 80) + 28LL);
  *(_DWORD *)(a2 + 32) = (_DWORD)v2;
  if ( (int)v2 >= 0 )
    return 1LL;
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x9F,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
    v2);
  return 0LL;
}
