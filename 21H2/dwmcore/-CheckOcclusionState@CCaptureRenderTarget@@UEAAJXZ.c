/*
 * XREFs of ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ @ 0x1800EDB0C
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F4CF0 (-CheckOcclusionState@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?CheckOcclusionState@CCaptureRenderTarget@@$4PPPPPPPM@EI@EAAJXZ @ 0x1800F4D00 (-CheckOcclusionState@CCaptureRenderTarget@@$4PPPPPPPM@EI@EAAJXZ.c)
 * Callees:
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1800EDBCC (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x1800EDF08 (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1800EDFD8 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCaptureRenderTarget::CheckOcclusionState(CCaptureRenderTarget *this)
{
  CCaptureRenderTarget *v1; // rsi
  unsigned int v3; // edi
  struct CD3DDevice *D3DDeviceNoRef; // rax
  __int64 v5; // rcx
  struct CD3DDevice *v6; // rbp
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CCaptureRenderTarget *)((char *)this - 2136);
  v3 = 142213121;
  v8 = 0;
  D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef((CCaptureRenderTarget *)((char *)this - 2136));
  v5 = *((_QWORD *)this - 20);
  v6 = D3DDeviceNoRef;
  if ( v5
    && (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL))(v5, &v8) >= 0
    && v8
    && v6
    && *((_QWORD *)this - 17)
    && ((*((_QWORD *)this - 12) - *((_QWORD *)this - 13)) & 0xFFFFFFFFFFFFFFF8uLL) != 0
    && *((_BYTE *)this - 224)
    && (int)CCaptureRenderTarget::EnsureResources(v1, v6) >= 0
    && (int)CCaptureRenderTarget::GetNextBufferIndexAvailable(v1) >= 0 )
  {
    return 0;
  }
  return v3;
}
