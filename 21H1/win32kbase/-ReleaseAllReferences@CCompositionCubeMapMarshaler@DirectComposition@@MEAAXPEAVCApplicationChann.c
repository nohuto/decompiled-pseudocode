/*
 * XREFs of ?ReleaseAllReferences@CCompositionCubeMapMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F5890
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CCompositionCubeMapMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionCubeMapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  if ( *((_QWORD *)this + 7) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
    {
      v5 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 24 * i);
      if ( v5 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
        *(_QWORD *)(*((_QWORD *)this + 7) + 24 * i) = 0LL;
      }
    }
  }
  *((_DWORD *)this + 17) = 0;
}
