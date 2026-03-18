/*
 * XREFs of ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x18027B90C
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180283F0C (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1800132A0 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800279B8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180177F9C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@?$vector@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180279AFC (--$_Emplace_reallocate@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@-$vector.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180279C0C (--$_Resize@U_Value_init_tag@std@@@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCache.c)
 *     ?UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ @ 0x18027C3D0 (-UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CDDisplaySwapChain::Initialize(CDDisplaySwapChain *this)
{
  __int64 v2; // rdx
  wil::details *v3; // rcx
  wil::details *Event; // rbx
  __int64 v5; // r8
  const char *v6; // r9
  signed int LastErrorFailHr; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // ebx
  unsigned int v13; // esi
  CRegion *v14; // rax
  __int64 v15; // rcx
  CRegion **v16; // rdx
  unsigned int v18; // [rsp+20h] [rbp-18h]
  CRegion *v19; // [rsp+40h] [rbp+8h] BYREF

  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this + 57,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v3, v2, v5, v6);
    v9 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      v18 = 16;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, LastErrorFailHr, v18);
      return v9;
    }
  }
  v10 = *((_QWORD *)this + 34);
  v11 = *((_QWORD *)this + 35);
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = ((v11 - v10) >> 5) - 1;
  std::vector<CDDisplayCachedScanout>::_Resize<std::_Value_init_tag>(
    (_QWORD *)this + 10,
    (*((_QWORD *)this + 35) - v10) >> 5);
  v12 = 0;
  v13 = ((__int64)(*((_QWORD *)this + 35) - *((_QWORD *)this + 34)) >> 5) - 1;
  if ( (unsigned int)((__int64)(*((_QWORD *)this + 35) - *((_QWORD *)this + 34)) >> 5) == 1 )
  {
LABEL_12:
    LastErrorFailHr = CDDisplaySwapChain::UpdateBackBufferTextureTarget(this);
    v9 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      v18 = 35;
      goto LABEL_14;
    }
  }
  else
  {
    while ( 1 )
    {
      v14 = (CRegion *)operator new(0x48uLL);
      if ( !v14 )
        break;
      v19 = v14;
      *(_QWORD *)v14 = (char *)v14 + 8;
      *((_DWORD *)v14 + 2) = 0;
      v16 = (CRegion **)*((_QWORD *)this + 55);
      if ( v16 == *((CRegion ***)this + 56) )
      {
        std::vector<std::unique_ptr<CRegion>>::_Emplace_reallocate<std::unique_ptr<CRegion>>(
          (__int64 *)this + 54,
          (__int64)v16,
          (__int64 *)&v19);
        if ( v19 )
          CRegion::`scalar deleting destructor'(v19, 1);
      }
      else
      {
        *v16 = v14;
        *((_QWORD *)this + 55) += 8LL;
      }
      if ( ++v12 >= v13 )
        goto LABEL_12;
    }
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, -2147024882, 0x1Eu);
  }
  return v9;
}
