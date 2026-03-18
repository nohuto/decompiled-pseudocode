/*
 * XREFs of ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18007F150
 * Callers:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18007F044 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     gsl::final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___::_final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___ @ 0x180268AE8 (gsl--final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___--_final_action__lambda_d4d69d0dd69.c)
 * Callees:
 *     ?FlushD2DInternal@CD2DContext@@AEAAJXZ @ 0x180019EC8 (-FlushD2DInternal@CD2DContext@@AEAAJXZ.c)
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x180020984 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007FAC8 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180080AB4 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180080BA4 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PopTarget(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct IDeviceTarget **a3)
{
  int v5; // edx
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rsi
  struct IDeviceTarget *v10; // rdx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax

  if ( a3 )
    *a3 = 0LL;
  CD2DContext::FlushDrawList(this);
  v5 = *((_DWORD *)this + 88);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = v5 - 1;
    v6 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * v7);
  }
  else
  {
    v7 = -1;
  }
  *((_DWORD *)this + 88) = v7;
  if ( v7 )
  {
    v8 = v7 - 1;
    v9 = *(_QWORD *)(*((_QWORD *)this + 41) + 8 * v8);
    if ( a3 )
    {
      v10 = *(struct IDeviceTarget **)(v9 + 24);
      *a3 = v10;
      v11 = (__int64)v10 + *(int *)(*((_QWORD *)v10 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    }
    if ( *((_BYTE *)this + 437) )
    {
      if ( !*(_BYTE *)(v9 + 73) )
      {
        *(_QWORD *)(v9 + 16) = this;
        CD2DContext::D2DSetTargetInternal(this, (struct CD2DTarget *)v9);
        *(_BYTE *)(v9 + 73) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v9);
      }
      if ( *(_BYTE *)(v6 + 75) )
      {
        if ( *(_BYTE *)(v6 + 74) )
        {
          v20 = CD2DContext::FlushD2DInternal(this);
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v20, 0x2D2u);
        }
        else
        {
          *(_BYTE *)(v9 + 75) = 1;
        }
      }
    }
    v12 = *((_DWORD *)this + 268);
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v12, 0x2DBu);
  }
  else
  {
    v18 = CD2DContext::EndDraw(this);
    v12 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x2E3u);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 24) + 8LL))(*(_QWORD *)(v6 + 24)) )
    {
      *((_QWORD *)this + 53) = v6;
      return CD3DDevice::TranslateDXGIorD3DErrorInContext((char *)this - 16, (unsigned int)v12, 0LL);
    }
    CD2DContext::D2DSetTargetInternal(this, 0LL);
  }
  if ( v6 )
  {
    v13 = *(_QWORD *)(v6 + 40);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = *(_QWORD *)(v6 + 32);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = *(_QWORD *)(v6 + 24);
    if ( v15 )
    {
      v16 = *(int *)(*(_QWORD *)(v15 + 8) + 4LL) + 8LL + v15;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    operator delete((void *)v6, 0x50uLL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((char *)this - 16, (unsigned int)v12, 0LL);
}
