/*
 * XREFs of ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x1800A6EB0
 * Callers:
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x1800A44C0 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000E8A0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTouchVisual::ValidateVisual(CTouchVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)this + 20) & 0x4000) != 0 )
  {
    (*(void (__fastcall **)(CTouchVisual *))(*(_QWORD *)this + 224LL))(this);
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v2 = CRenderDataVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22,
    (__int64)"clientcore\\windows\\dwm\\udwm\\touchvisual.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
