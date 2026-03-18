/*
 * XREFs of ?GetPresentStatisticsDWM@CDDisplaySwapChain@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180237460
 * Callers:
 *     ?GetPresentStatisticsDWM@CDDisplayRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18016E560 (-GetPresentStatisticsDWM@CDDisplayRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNE.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x1800E5944 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplaySwapChain::GetPresentStatisticsDWM(
        CDDisplaySwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 **v5; // rcx
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  _DWORD *v17; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp+38h] BYREF

  if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)this + 23) )
  {
    v6 = *v5;
    v19 = 0LL;
    v17 = 0LL;
    v7 = *v6;
    v20 = 0LL;
    v18 = DisplaySource_FrameStatistics;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD))(v7 + 64))(v6, &v18, &v20);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2FAu, 0LL);
    }
    else
    {
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v11 = (**v20)(v20, &GUID_905a0fef_bc53_11df_8c49_001e4fc686da, &v19);
      v10 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x2FBu, 0LL);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(__int64, _DWORD **))(*(_QWORD *)v19 + 24LL))(v19, &v17);
        v10 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2FCu, 0LL);
        }
        else
        {
          v15 = v17;
          *(_DWORD *)a2 = *v17;
          *((_DWORD *)a2 + 1) = v15[1];
          *((_QWORD *)a2 + 1) = *((_QWORD *)v15 + 1);
          *((_DWORD *)a2 + 4) = v15[4];
          *((_QWORD *)a2 + 3) = *((_QWORD *)v15 + 3);
          a3->uiNumerator = 60;
          a3->uiDenominator = 1;
        }
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  }
  else
  {
    v10 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, -2003304442, 0x30Au, 0LL);
  }
  return v10;
}
