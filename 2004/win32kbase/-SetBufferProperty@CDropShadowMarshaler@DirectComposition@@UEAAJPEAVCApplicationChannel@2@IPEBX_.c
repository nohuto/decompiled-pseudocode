/*
 * XREFs of ?SetBufferProperty@CDropShadowMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0055890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDropShadowMarshaler::SetBufferProperty(
        DirectComposition::CDropShadowMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  int v8; // eax
  __int128 v10; // xmm0

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    v10 = *(_OWORD *)a4;
    *((_DWORD *)this + 4) |= 0x100u;
    *((_OWORD *)this + 5) = v10;
LABEL_6:
    *a6 = 1;
    return v6;
  }
  if ( v7 == 2 )
  {
    if ( !a4 || a5 != 12 )
      return v6;
    *((_DWORD *)this + 25) = *a4;
    *((_DWORD *)this + 26) = a4[1];
    v8 = a4[2];
    *((_DWORD *)this + 4) |= 0x400u;
    *((_DWORD *)this + 27) = v8;
    goto LABEL_6;
  }
  return 3221225485LL;
}
