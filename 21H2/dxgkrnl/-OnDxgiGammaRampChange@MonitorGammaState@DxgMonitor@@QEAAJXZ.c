/*
 * XREFs of ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1C01C4724
 * Callers:
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C01C4688 (MonitorNotifyDXGIGammaRampChange.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x1C0012D9C (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0012DD8 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C0012EA0 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x1C0012EF8 (-put@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1C01B4978 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C01B4AD4 (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::OnDxgiGammaRampChange(DxgMonitor::MonitorGammaState *this)
{
  DXGK_GAMMA_RAMP *v1; // rbx
  int MostCapableColorSpaceTransform; // eax
  int v4; // edi
  __int64 v5; // r9
  __int64 v6; // rax
  struct DXGK_GAMMA_RAMP **v7; // rax
  __int64 v8; // rax
  struct _KTHREAD **v10[2]; // [rsp+20h] [rbp-10h] BYREF
  enum _D3DDDI_GAMMARAMP_TYPE v11; // [rsp+58h] [rbp+28h] BYREF
  ReferenceCounted *v12; // [rsp+60h] [rbp+30h] BYREF
  DXGK_GAMMA_RAMP *v13; // [rsp+68h] [rbp+38h] BYREF

  v11 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v1 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(this, &v11);
  v4 = MostCapableColorSpaceTransform;
  if ( MostCapableColorSpaceTransform < 0 )
  {
    WdLogSingleEntry1(3LL, MostCapableColorSpaceTransform);
  }
  else
  {
    if ( *((_QWORD *)this + 16) )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v10, (DxgMonitor::MonitorGammaState *)((char *)this + 80));
      v6 = operator new[](0x30uLL, 0x4D677844u, 256LL, v5);
      if ( v6 )
      {
        *(_QWORD *)(v6 + 24) = 0LL;
        *(_QWORD *)(v6 + 32) = 0LL;
        *(_QWORD *)v6 = &ReferenceCounted::`vftable';
        *(_QWORD *)v6 = &DXGK_GAMMA_RAMP::`vftable';
        *(_DWORD *)(v6 + 8) = 1;
        *(_WORD *)(v6 + 40) = 0;
        *(_DWORD *)(v6 + 16) = 1;
      }
      auto_rc<DXGK_GAMMA_RAMP>::reset(&v13, (ReferenceCounted *)v6);
      v1 = v13;
      if ( !v13 )
      {
        WdLogSingleEntry0(6LL);
        MUTEX_LOCK::~MUTEX_LOCK(v10);
        v4 = -1073741801;
        goto LABEL_11;
      }
      DXGK_GAMMA_RAMP::Initialize(v13, (const struct _D3DKMDT_GAMMA_RAMP *)(*((_QWORD *)this + 16) + 16LL));
      MUTEX_LOCK::~MUTEX_LOCK(v10);
    }
    v7 = (struct DXGK_GAMMA_RAMP **)auto_rc<DXGK_GAMMA_RAMP>::put(&v12);
    v4 = DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(this, v1, v7);
    if ( v4 < 0 )
    {
      WdLogSingleEntry0(3LL);
    }
    else
    {
      if ( !v12 )
        WdLogSingleEntry0(1LL);
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
      v4 = (*(__int64 (__fastcall **)(__int64, ReferenceCounted *))(*(_QWORD *)v8 + 88LL))(v8, v12);
    }
  }
LABEL_11:
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v12, 0LL);
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v13, 0LL);
  return (unsigned int)v4;
}
