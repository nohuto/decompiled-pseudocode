/*
 * XREFs of ?SetBufferProperty@CTextObjectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01D9360
 * Callers:
 *     ?SetBufferProperty@CCompositionGlyphRunMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01D8E60 (-SetBufferProperty@CCompositionGlyphRunMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTextObjectMarshaler::SetBufferProperty(
        DirectComposition::CTextObjectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  int v7; // r8d
  __int64 v8; // xmm0_8
  __int64 v9; // xmm0_8

  result = 0LL;
  *a6 = 0;
  v7 = a3 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      return 3221225485LL;
    if ( a4 && a5 == 8 )
    {
      v8 = *a4;
      *((_DWORD *)this + 4) |= 0x80u;
      *((_QWORD *)this + 9) = v8;
LABEL_10:
      *a6 = 1;
    }
  }
  else if ( a4 && a5 == 8 )
  {
    v9 = *a4;
    *((_DWORD *)this + 4) |= 0x40u;
    *((_QWORD *)this + 8) = v9;
    goto LABEL_10;
  }
  return result;
}
