/*
 * XREFs of ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BAFA8
 * Callers:
 *     ?Present@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800EF460 (-Present@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 *     ?Present@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJ_N@Z @ 0x1800EF470 (-Present@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DumpVisualTree@CDebugTreeDumper@@SAJPEAVCVisualTree@@PEAVIDeviceTarget@@@Z @ 0x1800BB228 (-DumpVisualTree@CDebugTreeDumper@@SAJPEAVCVisualTree@@PEAVIDeviceTarget@@@Z.c)
 *     ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800BB248 (-CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800D3E74 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800E6C1C (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?SkipUnpin@CD3DDevice@@QEAAXXZ @ 0x1800E7D04 (-SkipUnpin@CD3DDevice@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18016B6E0 (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180183B70 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ @ 0x180183E24 (-FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CLegacyRenderTarget::Present(CLegacyRenderTarget *this, char a2)
{
  __int64 v3; // rcx
  int v5; // ebx
  unsigned int v6; // esi
  int v7; // r15d
  int v8; // eax
  CDirectFlipInfo *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  CD3DDevice *v12; // rax
  __int64 v13; // rcx
  char v14; // bl
  int v15; // eax
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD); // rcx
  struct IDeviceTarget *v18; // rdx
  struct CVisualTree *v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+40h] [rbp-20h]

  v3 = *((_QWORD *)this - 2313);
  v5 = 0;
  if ( !v3 )
    goto LABEL_29;
  v21 = 0LL;
  v6 = 0;
  v7 = 0;
  v22 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 32LL))(v3, &v21) >= 0 )
  {
    if ( (_DWORD)v21 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2313) + 8LL))(*((_QWORD *)this - 2313));
      v6 = v8 - v21;
    }
    v7 = v6 + DWORD2(v21) + 1;
  }
  if ( *((_BYTE *)this - 76) )
    goto LABEL_16;
  if ( *((_DWORD *)this - 4620) || *((_DWORD *)this - 4619) || !*((_BYTE *)this - 79) || *((_BYTE *)this - 74) )
    goto LABEL_17;
  v9 = (CDirectFlipInfo *)*((_QWORD *)this - 862);
  if ( !v9 )
    goto LABEL_16;
  v10 = *((_DWORD *)v9 + 13);
  if ( v10 != 4 )
    goto LABEL_15;
  if ( CDirectFlipInfo::RenderingRealizationChanged(v9) )
  {
LABEL_16:
    a2 = 1;
    goto LABEL_17;
  }
  v10 = 2;
LABEL_15:
  if ( v10 != 1 )
    goto LABEL_16;
LABEL_17:
  if ( a2 || *((_BYTE *)this - 77) || *((_BYTE *)this - 78) && v6 < 2 )
  {
    if ( *((_BYTE *)this - 75) )
      CLegacyRenderTarget::FlushAndWaitAtPresent((CLegacyRenderTarget *)((char *)this - 18664));
    v13 = *((_QWORD *)this - 2313);
    *(_QWORD *)&v22 = 0LL;
    v21 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 40LL))(v13, &v21);
    v14 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2333) + 248LL))((char *)this - 18664);
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 2333) + 256LL))((char *)this - 18664);
    v15 = COverlayContext::Present((CLegacyRenderTarget *)((char *)this - 18192), v7, v14);
    v5 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x154u, 0LL);
    }
    else
    {
      *((_BYTE *)this - 78) = 0;
      *((_BYTE *)this - 76) = 0;
      v5 = CLegacyRenderTarget::CheckForOcclusionChange((CLegacyRenderTarget *)((char *)this - 18664), v15);
      *((_QWORD *)this - 13) = *(_QWORD *)(*((_QWORD *)this - 2331) + 352LL);
    }
    std::vector<tagRECT>::~vector<tagRECT>(&v21);
  }
  else
  {
    v11 = *((_QWORD *)this - 2313) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this - 2313) + 8LL) + 12LL);
    v12 = (CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    CD3DDevice::SkipUnpin(v12);
    if ( *((_BYTE *)this - 78) )
      ScheduleCompositionPass(0LL, 0x2000LL);
  }
LABEL_29:
  if ( *((_BYTE *)this - 74) )
    v5 = 142213121;
  if ( v5 >= 0 )
  {
    if ( *((_QWORD *)this - 2320) )
    {
      v17 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this - 2313);
      if ( v17 )
      {
        if ( (**v17)(v17) )
          CDebugTreeDumper::DumpVisualTree(v19, v18);
      }
    }
  }
  return (unsigned int)v5;
}
