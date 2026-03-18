/*
 * XREFs of ?SetReferenceArrayProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01DFF70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C001C630 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C001C698 (-Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceM.c)
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 74 )
    return DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(this, a2, a3, a4, a5, a6);
  result = DirectComposition::CResourceMarshalerArray::Set((__int64)this + 512, a2, (__int64)a4, a5, 0x71u);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 134) = 0;
    *((_DWORD *)this + 136) |= 0x1000000u;
    *a6 = 1;
  }
  return result;
}
