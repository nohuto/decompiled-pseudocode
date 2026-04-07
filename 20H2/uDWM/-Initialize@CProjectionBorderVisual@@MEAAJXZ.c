/*
 * XREFs of ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x180092810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180027E10 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z @ 0x1800BDE94 (-SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::Initialize(CVisualProxy **this)
{
  int updated; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = CVisual::Initialize((CVisual *)this);
  if ( updated < 0 )
  {
    v3 = 13LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordervisual.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CVisualProxy::SetPassiveUpdateMode(this[2], 1);
  if ( updated < 0 )
  {
    v3 = 14LL;
    goto LABEL_3;
  }
  return 0LL;
}
