/*
 * XREFs of ?Hide@CAnimatedGlassSheet@@QEAAXXZ @ 0x18009AF88
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027020 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18009B814 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001D170 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimatedGlassSheet::Hide(CAnimatedGlassSheet *this)
{
  __int64 v2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  CVisual::SetOpacity(this, 0.0);
  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = 0;
  (*(void (__fastcall **)(CAnimatedGlassSheet *, int *))(v2 + 96))(this, &v3);
}
