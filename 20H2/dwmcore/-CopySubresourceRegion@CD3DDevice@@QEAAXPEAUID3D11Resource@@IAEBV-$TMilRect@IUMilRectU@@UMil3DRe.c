/*
 * XREFs of ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x18023AFB8
 * Callers:
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x1801B866C (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801BA1EC (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ @ 0x180236AF0 (-CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x18024962C (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x18024AD1C (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x18024E270 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxdddddd_EventWriteTransfer @ 0x18023E780 (McTemplateU0xxdddddd_EventWriteTransfer.c)
 */

char __fastcall CD3DDevice::CopySubresourceRegion(
        __int64 a1,
        __int64 a2,
        int a3,
        int *a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9)
{
  int v9; // eax
  int v10; // edi
  __int64 v11; // rcx
  int v12; // edx
  char result; // al
  int v14; // ecx
  int v15; // [rsp+60h] [rbp-21h] BYREF
  int v16; // [rsp+64h] [rbp-1Dh]
  int v17; // [rsp+68h] [rbp-19h]
  int v18; // [rsp+6Ch] [rbp-15h]
  int v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+74h] [rbp-Dh]

  v9 = *a4;
  v10 = a2;
  v11 = *(_QWORD *)(a1 + 600);
  v17 = 0;
  v15 = v9;
  v16 = a4[1];
  v18 = a4[2];
  v19 = a4[3];
  v20 = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, int, int *, int))(*(_QWORD *)v11
                                                                                                  + 920LL))(
    v11,
    a5,
    a6,
    a7,
    a8,
    0,
    a2,
    a3,
    &v15,
    a9);
  result = (a9 & 4) != 0;
  LOBYTE(v14) = result & ((unsigned __int8)Microsoft_Windows_Dwm_CoreEnableBits >> 5);
  if ( (v14 & 1) != 0 )
    return McTemplateU0xxdddddd_EventWriteTransfer(v14, v12, a5, v10, v15, v16, v18, v19, a7, a8);
  return result;
}
