/*
 * XREFs of ?SetIntegerProperty@CHwndBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01E35A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHwndBitmapMarshaler::SetIntegerProperty(
        DirectComposition::CHwndBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  if ( a3 || !a4 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( *((_QWORD *)this + 7) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_QWORD *)this + 7) = a4;
    *a5 = 1;
  }
  return v5;
}
