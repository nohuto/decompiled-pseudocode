/*
 * XREFs of ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x180081570
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18003A750 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x18003E060 (-ValidateVisualPostSubgraph@CVisual@@UEAAJXZ.c)
 */

__int64 __fastcall CLivePreview::ValidateVisualPostSubgraph(CLivePreview *this, __int64 a2, __int64 a3)
{
  int updated; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CVisual::ValidateVisualPostSubgraph(this, a2, a3);
  if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    updated = CRenderDataVisual::UpdateRenderData(this);
    v5 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D0,
        (__int64)"clientcore\\windows\\dwm\\udwm\\livepreview.cpp",
        (const char *)(unsigned int)updated);
      return v5;
    }
    *((_DWORD *)this + 20) &= ~4u;
  }
  return 0LL;
}
