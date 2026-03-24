/*
 * XREFs of ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C013D7B4
 * Callers:
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C013D720 (MonitorNotifyDXGIGammaRampChange.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000B2C8 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C0137D5C (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0137E84 (-_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ?DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013EC58 (-DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_NotifyDXGIGammaRampChange(DXGMONITOR *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  DXGK_GAMMA_RAMP *v5; // rdi
  int MostCapableColorSpaceTransform; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbp
  DXGK_GAMMA_RAMP *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  ReferenceCounted *v22; // rbx
  __int64 v23; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  enum _D3DDDI_GAMMARAMP_TYPE v37; // [rsp+40h] [rbp+8h] BYREF
  ReferenceCounted *v38; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( !v2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v25);
    v2 = *((_QWORD *)this + 4);
  }
  v4 = *(_QWORD *)(v2 + 8);
  if ( !v4 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !*(_QWORD *)(v4 + 16) )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v27);
  }
  v37 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v5 = 0LL;
  v38 = 0LL;
  MostCapableColorSpaceTransform = DXGMONITOR::_GetMostCapableColorSpaceTransform(this, &v37);
  v10 = MostCapableColorSpaceTransform;
  if ( MostCapableColorSpaceTransform < 0 )
  {
    v28 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v28 + 24) = v10;
    WdLogEvent5_WdWarning(v28);
    return (unsigned int)v10;
  }
  if ( !*((_QWORD *)this + 155) )
    goto LABEL_17;
  if ( this == (DXGMONITOR *)-1184LL )
  {
    v29 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v29);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1184));
  v11 = (DXGK_GAMMA_RAMP *)operator new[](0x30uLL, 0x4D677844u, PagedPool);
  v5 = v11;
  if ( v11 )
  {
    *((_WORD *)v11 + 20) = 0;
    *((_QWORD *)v11 + 3) = 0LL;
    *((_QWORD *)v11 + 4) = 0LL;
    *(_QWORD *)v11 = &ReferenceCounted::`vftable';
    *(_QWORD *)v11 = &DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v11 + 2) = 1;
    *((_DWORD *)v11 + 4) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    DXGK_GAMMA_RAMP::Initialize(v5, (const struct _D3DKMDT_GAMMA_RAMP *)(*((_QWORD *)this + 155) + 16LL));
    if ( this == (DXGMONITOR *)-1184LL )
    {
      v30 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v30);
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1184));
LABEL_17:
    v18 = DXGMONITOR::_CombineDXGIGammaRamp(this, v5, &v38);
    v22 = v38;
    LODWORD(v10) = v18;
    if ( v18 < 0 )
    {
      v35 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      WdLogEvent5_WdWarning(v35);
    }
    else
    {
      if ( !v38 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v20, v19);
        WdLogEvent5_WdAssertion(v36);
      }
      LODWORD(v10) = DmmUpdateGammaRampOnVidPnTarget(
                       *(void *const *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL),
                       *((_DWORD *)this + 11),
                       v22);
    }
    if ( v22 )
      ReferenceCounted::Release(v22, v23);
    if ( v5 )
      ReferenceCounted::Release(v5, v23);
    return (unsigned int)v10;
  }
  v31 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
  WdLogEvent5_WdLowResource(v31);
  LODWORD(v10) = -1073741801;
  if ( this == (DXGMONITOR *)-1184LL )
  {
    v34 = WdLogNewEntry5_WdAssertion(v33, v32);
    WdLogEvent5_WdAssertion(v34);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1184));
  return (unsigned int)v10;
}
