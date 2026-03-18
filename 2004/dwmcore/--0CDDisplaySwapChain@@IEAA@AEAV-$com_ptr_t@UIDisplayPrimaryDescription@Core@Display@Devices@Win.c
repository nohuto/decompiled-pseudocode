/*
 * XREFs of ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@2@AEAUDDisplayTaskPoolResources@@AEAUDDisplayVBlankFenceResources@@AEAUDDisplayTargetResources@@AEAV?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18024034C
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180241B04 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ??0IOverlaySwapChain@@QEAA@XZ @ 0x180025A80 (--0IOverlaySwapChain@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18003CAA0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x180240EF4 (--4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ??4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x180240FCC (--4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ??4DDisplayVBlankFenceResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x18024107C (--4DDisplayVBlankFenceResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

__int64 __fastcall CDDisplaySwapChain::CDDisplaySwapChain(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // rbx
  __int64 *v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  CD3DDevice *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx

  *(_QWORD *)(a1 + 24) = &CDDisplaySwapChain::`vbtable'{for `CDeviceResource'};
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 72) = &CDDisplaySwapChain::`vbtable'{for `ISwapChain'};
  *(_QWORD *)(a1 + 472) = &CInk::`vbtable'{for `IContent'};
  *(_QWORD *)(a1 + 496) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *(_QWORD *)a1 = &CMILCOMBase::`vftable';
  *(_QWORD *)(a1 + 16) = &CDeviceResource::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 4LL) + a1 + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 8LL) + a1 + 24) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 8LL) + a1 + 20) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  IOverlaySwapChain::IOverlaySwapChain((IOverlaySwapChain *)(a1 + 64));
  *(_QWORD *)(a1 + 16) = &CDDisplaySwapChain::`vftable'{for `CDeviceResource'};
  *(_QWORD *)a1 = &CDDisplaySwapChain::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 56) = &CDDisplaySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 64) = &CDDisplaySwapChain::`vftable'{for `IOverlaySwapChain'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 4LL) + a1 + 24) = &CDDisplaySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 8LL) + a1 + 24) = &CDDisplaySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 12LL) + a1 + 24) = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
  v12 = *(int *)(*(_QWORD *)(a1 + 24) + 4LL);
  *(_DWORD *)(v12 + a1 + 20) = v12 - 424;
  v13 = *(int *)(*(_QWORD *)(a1 + 24) + 8LL);
  *(_DWORD *)(v13 + a1 + 20) = v13 - 440;
  v14 = *(int *)(*(_QWORD *)(a1 + 24) + 12LL);
  *(_DWORD *)(v14 + a1 + 20) = v14 - 464;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  v15 = (__int64 *)(a1 + 200);
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = *(_QWORD *)a8;
  *(_DWORD *)(a1 + 248) = *(_DWORD *)(a8 + 8);
  *(_OWORD *)(a1 + 252) = *(_OWORD *)a9;
  *(_QWORD *)(a1 + 268) = *(_QWORD *)(a9 + 16);
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_BYTE *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = a1 + 304;
  *(_DWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_DWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  v17 = *v16;
  *v16 = 0LL;
  v18 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v17;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = *a3;
  *a3 = 0LL;
  v20 = *(CD3DDevice **)(a1 + 88);
  *(_QWORD *)(a1 + 88) = v19;
  if ( v20 )
    CD3DDevice::Release(v20);
  DDisplayTaskPoolResources::operator=(a1 + 96, a4);
  DDisplayVBlankFenceResources::operator=(a1 + 128, a5);
  DDisplayTargetResources::operator=(a1 + 144, a6);
  if ( v15 != a7 )
  {
    v21 = *v15;
    *v15 = *a7;
    v22 = a7[1];
    *a7 = v21;
    v23 = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 208) = v22;
    v24 = a7[2];
    a7[1] = v23;
    v25 = *(_QWORD *)(a1 + 216);
    *(_QWORD *)(a1 + 216) = v24;
    a7[2] = v25;
  }
  return a1;
}
