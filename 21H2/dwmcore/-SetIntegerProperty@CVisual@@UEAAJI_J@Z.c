/*
 * XREFs of ?SetIntegerProperty@CVisual@@UEAAJI_J@Z @ 0x1801AED90
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18009F678 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisual::SetIntegerProperty(CVisual *this, int a2, int a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 8 )
  {
    *((_BYTE *)this + 96) |= 8u;
    *((_DWORD *)this + 47) = a3;
    CVisual::PropagateFlags((__int64)this, 5u);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F3,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
