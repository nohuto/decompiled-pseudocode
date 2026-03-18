/*
 * XREFs of ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00400F0
 * Callers:
 *     ?SetBufferProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01DEF90 (-SetBufferProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 * Callees:
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0004088 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C004014C (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetHeatMapColorHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C01E7600 (-SetHeatMapColorHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_K.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetBufferProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  int v7; // r8d
  int v8; // r8d
  int v11; // r8d
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax

  v6 = 0;
  v7 = a3 - 11;
  if ( !v7 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetTransformMatrixHelper(this, a2, a4, a5, a6);
  v8 = v7 - 1;
  if ( !v8 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetClipRectangleHelper(this, a2, a4, a5, a6);
  v11 = v8 - 3;
  if ( !v11 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetHeatMapColorHelper(this, a2, a4, a5, a6);
  if ( v11 == 32 && a5 == 12 )
  {
    v12 = *(_QWORD *)a4 - *((_QWORD *)this + 15);
    if ( *(_QWORD *)a4 == *((_QWORD *)this + 15) )
      v12 = a4[2] - (unsigned __int64)*((unsigned int *)this + 32);
    if ( v12 )
    {
      *((_QWORD *)this + 15) = *(_QWORD *)a4;
      v13 = a4[2];
      *((_DWORD *)this + 4) |= 0x40000000u;
      *((_DWORD *)this + 32) = v13;
      *a6 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
