/*
 * XREFs of ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@I_N@Z @ 0x1801B8310
 * Callers:
 *     ?SyncLock@CLegacyRenderTarget@@UEAAX_NI@Z @ 0x1801C0DD0 (-SyncLock@CLegacyRenderTarget@@UEAAX_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LegacyPresentRequired@COverlayContext@@AEBA_NXZ @ 0x1800BD2D4 (-LegacyPresentRequired@COverlayContext@@AEBA_NXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::SyncLock(COverlayContext *this, struct IOverlaySwapChain *a2, int a3, char a4)
{
  struct IOverlaySwapChain *v4; // r11
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int128 v20; // [rsp+40h] [rbp-69h] BYREF
  __int64 v21; // [rsp+50h] [rbp-59h]
  _DWORD v22[2]; // [rsp+60h] [rbp-49h] BYREF
  __int128 v23; // [rsp+68h] [rbp-41h]
  __int128 v24; // [rsp+78h] [rbp-31h]
  __int128 v25; // [rsp+88h] [rbp-21h]
  __int128 v26; // [rsp+98h] [rbp-11h]
  __int128 v27; // [rsp+A8h] [rbp-1h]
  __int128 v28; // [rsp+B8h] [rbp+Fh]
  __int128 v29; // [rsp+C8h] [rbp+1Fh]
  __int128 v30; // [rsp+D8h] [rbp+2Fh]

  v4 = a2;
  if ( *((_BYTE *)this + 11024) && *((_BYTE *)this + 11296) )
  {
    if ( a4 || COverlayContext::LegacyPresentRequired(this) )
    {
      v21 = 0LL;
      v16 = *(_QWORD *)v4;
      v20 = 0LL;
      v17 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, __int64, __int128 *, int))(v16 + 176))(
              v4,
              1LL,
              2LL,
              &v20,
              a3);
      v15 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x9A7u);
      if ( (_QWORD)v20 )
        std::_Deallocate<16,0>((void *)v20, (v21 - v20) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    else
    {
      v6 = *(_OWORD *)(v5 + 10928);
      v22[0] = 0;
      v23 = 0LL;
      v7 = *(_OWORD *)(v5 + 10912);
      v8 = *(_QWORD *)v4;
      v25 = v6;
      v22[1] = 1;
      v9 = *(_OWORD *)(v5 + 10960);
      v24 = v7;
      v10 = *(_OWORD *)(v5 + 10944);
      v27 = v9;
      v11 = *(_OWORD *)(v5 + 10992);
      v26 = v10;
      v12 = *(_OWORD *)(v5 + 10976);
      v29 = v11;
      v28 = v12;
      v30 = *(_OWORD *)(v5 + 11008);
      v13 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, __int64, _QWORD, _QWORD, _DWORD *, int))(v8 + 192))(
              v4,
              1LL,
              2LL,
              *(unsigned int *)(v5 + 12),
              0LL,
              v22,
              1);
      v15 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x99Eu);
    }
  }
  else
  {
    v15 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003304309, 0x9AEu);
  }
  return v15;
}
