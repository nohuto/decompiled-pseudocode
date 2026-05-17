/*
 * XREFs of _RtlpValidAttributeAce@4 @ 0x4B34CBBA
 * Callers:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 * Callees:
 *     _RtlpValidRelativeAttribute@8 @ 0x4B34CD2B (_RtlpValidRelativeAttribute@8.c)
 */

bool __thiscall RtlpValidAttributeAce(int this)
{
  unsigned int v1; // edx
  unsigned __int8 v2; // al
  bool result; // al

  result = 0;
  if ( this )
  {
    v1 = *(unsigned __int16 *)(this + 2);
    if ( ((v1 + 3) & 0xFFFFFFFC) == v1 && *(unsigned __int16 *)(this + 2) >= 0x10u && *(_BYTE *)(this + 8) == 1 )
    {
      v2 = *(_BYTE *)(this + 9);
      if ( v2 <= 0xFu
        && v1 >= 4 * (unsigned int)v2 + 36
        && (unsigned __int8)RtlpValidRelativeAttribute(4 * v2 + 8 + this + 8, v1 - (4 * v2 + 8) - 8) )
      {
        return 1;
      }
    }
  }
  return result;
}
