/*
 * XREFs of ?SetIntegerProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01D7910
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01DF410 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetIntegerProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  switch ( a3 )
  {
    case '7':
      if ( *((_DWORD *)this + 97) == a4 )
        return v5;
      *((_DWORD *)this + 136) |= 0x20u;
      *((_DWORD *)this + 97) = a4;
      goto LABEL_17;
    case ':':
      if ( *((_DWORD *)this + 102) == a4 )
        return v5;
      *((_DWORD *)this + 136) |= 0x100u;
      *((_DWORD *)this + 102) = a4;
      goto LABEL_17;
    case 'A':
      if ( *((_DWORD *)this + 110) == a4 )
        return v5;
      *((_DWORD *)this + 136) |= 0x8000u;
      *((_DWORD *)this + 110) = a4;
      goto LABEL_17;
    case 'F':
      if ( *((_DWORD *)this + 119) == a4 )
        return v5;
      *((_DWORD *)this + 136) |= 0x100000u;
      *((_DWORD *)this + 119) = a4;
      goto LABEL_17;
    case 'K':
      if ( *((_BYTE *)this + 540) == ((_DWORD)a4 != 0) )
        return v5;
      *((_DWORD *)this + 136) |= 0x2000000u;
      *((_BYTE *)this + 540) = (_DWORD)a4 != 0;
LABEL_17:
      *a5 = 1;
      return v5;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
