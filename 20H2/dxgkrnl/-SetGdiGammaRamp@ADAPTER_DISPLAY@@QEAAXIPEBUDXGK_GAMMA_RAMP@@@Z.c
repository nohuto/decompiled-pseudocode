/*
 * XREFs of ?SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C014A95C
 * Callers:
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C014A6A0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetGdiGammaRamp(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        const struct DXGK_GAMMA_RAMP *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  ReferenceCounted *v8; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 3968LL * a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(v5 + *((_QWORD *)this + 14) + 864LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v7 = *((_QWORD *)this + 14);
  v8 = *(ReferenceCounted **)(v5 + v7 + 904);
  if ( v8 )
  {
    ReferenceCounted::Release(v8, v6);
    v7 = *((_QWORD *)this + 14);
  }
  *(_QWORD *)(v5 + v7 + 904) = a3;
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v6);
}
