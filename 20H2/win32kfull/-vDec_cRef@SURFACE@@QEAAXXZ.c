/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C027BA8C
 * Callers:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C00A2D2C (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015D634 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int16 v3; // ax
  __int64 v4; // rcx

  DEC_SHARE_REF_CNT(this);
  if ( (*((_DWORD *)this + 42))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 )
    {
      v3 = *((_WORD *)this + 51);
      if ( (v3 & 0x400) != 0 )
      {
        v4 = *(_QWORD *)this;
        *((_WORD *)this + 51) = v3 & 0xFBFF;
        GreMakeBitmapNonStock(v4);
      }
    }
    *((_QWORD *)this + 20) = 0LL;
  }
}
