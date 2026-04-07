/*
 * XREFs of ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x1800124C8
 * Callers:
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180012490 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180035180 (-Initialize@CAnimatedTransitionVisual@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::DisablePrefiltering(CVisual *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 49);
  if ( (v1 & 1) == 0 )
  {
    *((_DWORD *)this + 53) = 1;
    *((_DWORD *)this + 49) = v1 | 1;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 64LL);
  }
}
