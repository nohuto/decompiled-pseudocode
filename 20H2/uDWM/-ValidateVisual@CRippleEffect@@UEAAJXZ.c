/*
 * XREFs of ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x18009BD10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800193D0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateTransition@CRippleEffect@@AEAAJXZ @ 0x18009BC50 (-UpdateTransition@CRippleEffect@@AEAAJXZ.c)
 */

__int64 __fastcall CRippleEffect::ValidateVisual(CRippleEffect *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)this + 20) & 0x4000) != 0 )
  {
    CRippleEffect::UpdateTransition(this);
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEA,
    (__int64)"clientcore\\windows\\dwm\\udwm\\rippleeffect.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
