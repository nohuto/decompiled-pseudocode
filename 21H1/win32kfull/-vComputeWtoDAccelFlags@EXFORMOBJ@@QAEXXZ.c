/*
 * XREFs of ?vComputeWtoDAccelFlags@EXFORMOBJ@@QAEXXZ @ 0x21D361
 * Callers:
 *     ?vInitPageToDevice@EXFORMOBJ@@QAEXAAVXDCOBJ@@PAVMATRIX@@@Z @ 0x21D3B8 (-vInitPageToDevice@EXFORMOBJ@@QAEXAAVXDCOBJ@@PAVMATRIX@@@Z.c)
 * Callees:
 *     ?bIs16@EFLOAT@@QBEHXZ @ 0x21C813 (-bIs16@EFLOAT@@QBEHXZ.c)
 */

void __thiscall EXFORMOBJ::vComputeWtoDAccelFlags(EFLOAT **this)
{
  EFLOAT *v1; // edx
  EFLOAT *v2; // eax
  int v3; // edx
  int v4; // edx

  *((_DWORD *)*this + 14) = 8;
  v1 = *this;
  v2 = *this;
  if ( !*((_DWORD *)*this + 12) && !*((_DWORD *)v1 + 13) )
  {
    *((_DWORD *)v1 + 14) |= 0x40u;
    v2 = *this;
  }
  if ( !*((_DWORD *)v2 + 2) && !*((_DWORD *)v2 + 3) && !*((_DWORD *)v2 + 4) && !*((_DWORD *)v2 + 5) )
  {
    *((_DWORD *)v2 + 14) |= 1u;
    if ( EFLOAT::bIs16(*this) )
    {
      if ( EFLOAT::bIs16((EFLOAT *)(v3 + 24)) )
        *(_DWORD *)(v4 + 56) |= 2u;
    }
  }
}
