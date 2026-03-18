/*
 * XREFs of ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x180025BAC
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x180024E10 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18018E838 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x18018F090 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180024ABC (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@VIConversionSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025D9C (--1-$com_ptr_t@VIConversionSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_N@Z @ 0x180032B34 (-UpdateMPOCaps@COverlayContext@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsXbox@CD3DDevice@@QEBA_NXZ @ 0x180039ED0 (-IsXbox@CD3DDevice@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::OnSwapChainCreated(COverlayContext *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  int (__fastcall *v8)(__int64, GUID *, __int64 *); // rbp
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // al
  int v12; // ecx
  int v13; // eax
  int updated; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 192LL))(*(_QWORD *)this);
  v3 = *(int *)(*(_QWORD *)(v2 + 8) + 12LL) + v2 + 8;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  COverlayContext::s_bXbox |= CD3DDevice::IsXbox((CD3DDevice *)v4);
  if ( *((_DWORD *)this + 2853) )
    COverlayContext::Reset(this);
  v5 = *(_QWORD *)this;
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 192LL))(v5);
  v7 = v6 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL);
  v8 = **(int (__fastcall ***)(__int64, GUID *, __int64 *))(v7 + 8);
  if ( v18 )
  {
    v9 = v18 + 8 + *(int *)(*(_QWORD *)(v18 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v8(v7 + 8, &GUID_cf12c0b8_aae0_4ef0_b8e3_97cd3b4d6f91, &v18) >= 0 )
  {
    *((_BYTE *)this + 11417) = 1;
    v11 = 0;
  }
  else
  {
    v10 = *(_QWORD *)this;
    *((_BYTE *)this + 11417) = 0;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 184LL))(v10);
  }
  *((_BYTE *)this + 11427) = v11;
  v12 = *(_DWORD *)(v4 + 628);
  *((_DWORD *)this + 2853) = v12;
  *((_BYTE *)this + 11430) = 0;
  v13 = *(_DWORD *)(v4 + 896);
  if ( v13 == 32902 )
  {
    if ( *(__int64 *)(v4 + 632) <= 0x140013000F112DLL )
      *((_BYTE *)this + 11418) = 1;
  }
  else if ( v13 == 1297040209 && *(_DWORD *)(v4 + 900) == 1177957426 && *(__int64 *)(v4 + 632) <= 0xB001204360026LL )
  {
    *((_BYTE *)this + 11419) = 1;
  }
  if ( v12 >= 2000 )
    *((_BYTE *)this + 11420) = 1;
  updated = COverlayContext::UpdateMPOCaps(this, 1);
  v16 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, updated, 0x49u, 0LL);
  }
  else
  {
    **((_DWORD **)this + 1413) = 0;
    *((_DWORD *)this + 2850) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 11376, 16LL);
  }
  wil::com_ptr_t<IConversionSwapChain,wil::err_returncode_policy>::~com_ptr_t<IConversionSwapChain,wil::err_returncode_policy>(&v18);
  return v16;
}
