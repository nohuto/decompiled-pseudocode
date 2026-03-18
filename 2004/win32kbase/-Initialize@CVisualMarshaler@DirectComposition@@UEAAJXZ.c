/*
 * XREFs of ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C003A6C0
 * Callers:
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C00027F0 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00028A4 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C003A660 (-InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemReso.c)
 *     ?Initialize@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C01D8500 (-Initialize@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::Initialize(DirectComposition::CVisualMarshaler *this)
{
  __int64 result; // rax

  *((_BYTE *)this + 288) |= 0x80u;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 58) = -1;
  *((_DWORD *)this + 59) = -1;
  *((_DWORD *)this + 60) = -1;
  *((_DWORD *)this + 61) = -1;
  *((_DWORD *)this + 62) = -1;
  *((_DWORD *)this + 63) = -1;
  result = 0LL;
  *((_DWORD *)this + 28) = 1065353216;
  return result;
}
