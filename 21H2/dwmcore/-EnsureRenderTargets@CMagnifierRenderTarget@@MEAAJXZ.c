/*
 * XREFs of ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801C77C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801C1710 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801C7888 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureRenderTargets(CMagnifierRenderTarget *this)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 v4; // rdx
  int (__fastcall ***v5)(_QWORD); // rcx
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // rcx

  v1 = 0;
  v2 = 0LL;
  if ( !*((_DWORD *)this + 446) )
    goto LABEL_13;
  while ( 1 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 220) + 8 * v2);
    v5 = (int (__fastcall ***)(_QWORD))(v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 8LL));
    if ( (**v5)(v5) < 0 )
      break;
    v6 = *((_DWORD *)this + 446);
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= v6 )
      goto LABEL_6;
  }
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  v6 = *((_DWORD *)this + 446);
LABEL_6:
  if ( !v6 )
  {
LABEL_13:
    if ( *((_DWORD *)this + 466) )
    {
      v7 = CMagnifierRenderTarget::EnsureSharedRenderTargets(this);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x196u);
        COffScreenRenderTarget::ReleaseRenderTargets(this);
      }
    }
  }
  return v1;
}
