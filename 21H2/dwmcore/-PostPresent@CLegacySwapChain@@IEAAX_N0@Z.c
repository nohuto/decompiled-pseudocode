/*
 * XREFs of ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x18001BF70
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18001BDBC (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18001BE80 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18028B78C (-PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_M.c)
 *     ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180290A6C (-Present@CLegacyStereoSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 *     ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180290B8C (-PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI.c)
 * Callees:
 *     ?EnsureValidVidPnTargetId@CLegacySwapChain@@IEBAXXZ @ 0x18001C050 (-EnsureValidVidPnTargetId@CLegacySwapChain@@IEBAXXZ.c)
 *     ?AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z @ 0x18001C09C (-AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ @ 0x18028BA04 (-ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ.c)
 */

void __fastcall CLegacySwapChain::PostPresent(CLegacySwapChain *this, char a2, bool a3)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ecx
  unsigned __int8 v7; // di
  __int64 i; // rdx
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ecx

  if ( !a2 )
  {
    CD3DDevice::AdvanceUnpin(
      *((CD3DDevice **)this + 8),
      *(struct _LUID *)((char *)this + 168),
      *((_DWORD *)this + 52),
      a3);
    *((_DWORD *)this + 32) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 256LL))(*((_QWORD *)this + 9));
    **((_DWORD **)this + 30) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0q_EventWriteTransfer(v4, &EVTDESC_LEGACYSWAPCHAIN_BUFFERFLIP, *((unsigned int *)this + 32));
    v5 = *((_DWORD *)this + 78);
    if ( v5 )
    {
      *((_DWORD *)this + 78) = v5 - 1;
      CLegacySwapChain::ReleaseD3D12Resources(this);
    }
  }
  CLegacySwapChain::EnsureValidVidPnTargetId(this);
  v6 = *((_DWORD *)this + 54);
  if ( v6 )
  {
    v7 = 0;
    if ( *((_BYTE *)this + 318) )
    {
LABEL_16:
      v7 = 1;
    }
    else
    {
      for ( i = *((_QWORD *)this + 13); i != *((_QWORD *)this + 14); i += 8LL )
      {
        v9 = *(_QWORD *)(*(_QWORD *)i + 96LL);
        if ( v9 && *(_BYTE *)(v9 + 240) )
          goto LABEL_16;
      }
    }
    if ( *((_BYTE *)this + 317) != v7 )
    {
      if ( v6 == 1 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 272LL))(*((_QWORD *)this + 9), v7);
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x57Au, 0LL);
          return;
        }
        *((_BYTE *)g_pComposition + 1275) = 1;
      }
      *((_BYTE *)this + 317) = v7;
    }
  }
}
