/*
 * XREFs of ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027AF28
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18027C130 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace@PEAVCDDisplayAgedCachedScanout@@@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@1@QEAU21@$$QEAPEAVCDDisplayAgedCachedScanout@@@Z @ 0x180279A50 (--$_Emplace@PEAVCDDisplayAgedCachedScanout@@@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U.c)
 *     ??_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z @ 0x180279FE0 (--_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z.c)
 *     ?CreateScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027A708 (-CreateScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplay.c)
 *     ?GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@Z @ 0x18027B1C8 (-GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@.c)
 *     ?erase@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18027C6B0 (-erase@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_delete@VCDDisplayAgedCachedS.c)
 *     ?Matches@CDDisplayCachedScanout@@QEAA_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAPEAUIDisplayScanout@4567@@Z @ 0x18028E1DC (-Matches@CDDisplayCachedScanout@@QEAA_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAUIDisplaySurfac.c)
 *     ?Set@CDDisplayCachedScanout@@QEAAXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAUIDisplayScanout@4567@@Z @ 0x18028E358 (-Set@CDDisplayCachedScanout@@QEAAXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAUIDisplaySurface@Cor.c)
 */

__int64 __fastcall CDDisplaySwapChain::FindCachedGeneralScanout(
        CDDisplaySwapChain *this,
        bool a2,
        unsigned int a3,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a4,
        struct Windows::Devices::Display::Core::IDisplayScanout **a5)
{
  struct Windows::Devices::Display::Core::IDisplayScanout *v5; // r14
  struct Windows::Devices::Display::Core::IDisplaySurface *DesktopPrimary; // rax
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v8; // r12
  char *v9; // rsi
  unsigned int v10; // r15d
  _QWORD *i; // rbx
  CDDisplayCachedScanout *v12; // r13
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // rdx
  CDDisplaySwapChain *v17; // r12
  unsigned int v18; // r15d
  CDDisplayAgedCachedScanout *v19; // rax
  __int64 v20; // rcx
  CDDisplayAgedCachedScanout *v21; // rbx
  unsigned int v22; // r13d
  bool v23; // dl
  unsigned int v24; // r8d
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v25; // rdi
  int v26; // eax
  __int64 v27; // rcx
  __int64 *v28; // rdx
  void *v29; // rbx
  _QWORD *v30; // rdx
  CDDisplayAgedCachedScanout *v31; // rcx
  struct Windows::Devices::Display::Core::IDisplayScanout *v33; // [rsp+38h] [rbp-30h] BYREF
  struct Windows::Devices::Display::Core::IDisplaySurface *v34; // [rsp+40h] [rbp-28h]
  __int64 v35; // [rsp+48h] [rbp-20h] BYREF
  _BYTE v36[8]; // [rsp+50h] [rbp-18h] BYREF
  _BYTE v37[16]; // [rsp+58h] [rbp-10h] BYREF
  CDDisplaySwapChain *v38; // [rsp+B0h] [rbp+48h] BYREF
  bool v39; // [rsp+B8h] [rbp+50h]
  unsigned int v40; // [rsp+C0h] [rbp+58h]
  struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v41; // [rsp+C8h] [rbp+60h]

  v41 = a4;
  v40 = a3;
  v39 = a2;
  v38 = this;
  v5 = 0LL;
  v33 = 0LL;
  DesktopPrimary = CDDisplaySwapChain::GetDesktopPrimary(this, a2);
  v8 = v41;
  v9 = (char *)this + 104;
  v10 = v40;
  v34 = DesktopPrimary;
  for ( i = **(_QWORD ***)v9; i != *(_QWORD **)v9; i = v13 )
  {
    v12 = (CDDisplayCachedScanout *)i[2];
    v13 = (_QWORD *)*i;
    if ( !v5 )
    {
      v33 = 0LL;
      if ( CDDisplayCachedScanout::Matches(v12, v10, v8, DesktopPrimary, &v33) )
      {
        *((_DWORD *)v12 + 8) = 600;
        v14 = i[2];
        i[2] = 0LL;
        v15 = *(__int64 **)v9;
        v35 = v14;
        std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::_Emplace<CDDisplayAgedCachedScanout *>(
          (__int64)v9,
          *v15,
          &v35);
        std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::erase(v9, v36, i);
        v5 = v33;
        goto LABEL_9;
      }
      v5 = v33;
    }
    if ( (*((_DWORD *)v12 + 8))-- == 1 )
      std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::erase(v9, v37, i);
LABEL_9:
    DesktopPrimary = v34;
  }
  v17 = v38;
  v18 = 0;
  if ( v5 )
    goto LABEL_17;
  v19 = (CDDisplayAgedCachedScanout *)operator new(0x28uLL);
  v21 = v19;
  if ( v19 )
  {
    v22 = v40;
    v23 = v39;
    v24 = v40;
    *(_QWORD *)v19 = 0LL;
    *((_QWORD *)v19 + 1) = 0LL;
    *((_QWORD *)v19 + 2) = 0LL;
    *((_QWORD *)v19 + 3) = 0LL;
    v33 = 0LL;
    v25 = v41;
    *((_DWORD *)v19 + 8) = 600;
    v26 = CDDisplaySwapChain::CreateScanout(v17, v23, v24, v25, &v33);
    v18 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0x197u);
      CDDisplayAgedCachedScanout::`scalar deleting destructor'(v21);
    }
    else
    {
      v5 = v33;
      CDDisplayCachedScanout::Set(v21, v22, v25, v34, v33);
      v28 = *(__int64 **)v9;
      v38 = v21;
      std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::_Emplace<CDDisplayAgedCachedScanout *>(
        (__int64)v9,
        *v28,
        (__int64 *)&v38);
      if ( *((_QWORD *)v17 + 14) > 0x15uLL )
      {
        v29 = *(void **)(*(_QWORD *)v9 + 8LL);
        v30 = *(_QWORD **)v29;
        --*((_QWORD *)v9 + 1);
        **((_QWORD **)v29 + 1) = v30;
        v30[1] = *((_QWORD *)v29 + 1);
        v31 = (CDDisplayAgedCachedScanout *)*((_QWORD *)v29 + 2);
        if ( v31 )
          CDDisplayAgedCachedScanout::`scalar deleting destructor'(v31);
        std::_Deallocate<16,0>(v29, 0x18uLL);
      }
LABEL_17:
      v33 = 0LL;
      *a5 = v5;
    }
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, -2147024882, 0x192u);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
  return v18;
}
