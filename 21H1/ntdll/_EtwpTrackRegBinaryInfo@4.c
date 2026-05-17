/*
 * XREFs of _EtwpTrackRegBinaryInfo@4 @ 0x4B381980
 * Callers:
 *     _EtwpTrackProviderBinary@8 @ 0x4B3808C0 (_EtwpTrackProviderBinary@8.c)
 * Callees:
 *     _EtwpGetUmProcessImageInfo@8 @ 0x4B2F1D78 (_EtwpGetUmProcessImageInfo@8.c)
 */

void __thiscall EtwpTrackRegBinaryInfo(__int16 *this)
{
  unsigned __int8 i; // bl
  unsigned int v3; // ecx
  _BYTE *v4; // eax
  _BYTE *v5; // eax

  if ( this[27] < 0 )
  {
    for ( i = 0; i < 0x40u; ++i )
    {
      v3 = 0;
      v4 = this + 51;
      while ( !*(v4 - 2) || *v4 != i )
      {
        ++v3;
        v4 += 24;
        if ( v3 >= 4 )
        {
          v5 = 0;
          goto LABEL_8;
        }
      }
      v5 = v4 - 22;
LABEL_8:
      if ( v5 )
        EtwpGetUmProcessImageInfo(i, (int)this);
    }
  }
}
