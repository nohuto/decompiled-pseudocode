/*
 * XREFs of ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180027D98
 * Callers:
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180027D60 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180033850 (-Initialize@CAnimatedTransitionVisual@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
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
