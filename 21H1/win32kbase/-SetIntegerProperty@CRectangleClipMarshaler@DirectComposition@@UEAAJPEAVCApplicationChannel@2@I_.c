/*
 * XREFs of ?SetIntegerProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C003CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C001D440 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetIntegerProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 == 20 )
  {
    if ( !*((_BYTE *)this + 144) && !*((_BYTE *)this + 145) && a4 )
    {
      *((_BYTE *)this + 144) = 1;
      *a5 = 1;
      *((_DWORD *)this + 4) &= ~0x800u;
      return result;
    }
    return 3221225485LL;
  }
  if ( a3 != 21 )
    return DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  if ( *((_BYTE *)this + 145) || *((_BYTE *)this + 144) || !a4 )
    return 3221225485LL;
  *((_BYTE *)this + 145) = 1;
  *a5 = 1;
  *((_OWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 4) &= 0xFFFFA7FF;
  return result;
}
