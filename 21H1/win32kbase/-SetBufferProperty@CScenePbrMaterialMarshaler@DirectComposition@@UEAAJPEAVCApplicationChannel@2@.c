/*
 * XREFs of ?SetBufferProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01DF288
 * Callers:
 *     ?SetBufferProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01DF230 (-SetBufferProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplica.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScenePbrMaterialMarshaler::SetBufferProperty(
        DirectComposition::CScenePbrMaterialMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  int v8; // ecx

  result = 0LL;
  *a6 = 0;
  if ( a3 != 3 )
    return 3221225485LL;
  if ( a4 )
  {
    if ( a5 == 12 )
    {
      *((_QWORD *)this + 9) = *(_QWORD *)a4;
      v8 = a4[2];
      *((_DWORD *)this + 4) |= 0x100u;
      *((_DWORD *)this + 20) = v8;
      *a6 = 1;
    }
  }
  return result;
}
