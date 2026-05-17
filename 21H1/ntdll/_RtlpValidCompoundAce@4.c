/*
 * XREFs of _RtlpValidCompoundAce@4 @ 0x4B34CC52
 * Callers:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 * Callees:
 *     <none>
 */

bool __thiscall RtlpValidCompoundAce(int this)
{
  unsigned int v1; // edx
  unsigned __int8 v2; // al
  unsigned __int8 v3; // cl
  bool result; // al

  result = 0;
  if ( this )
  {
    v1 = *(unsigned __int16 *)(this + 2);
    if ( ((v1 + 3) & 0xFFFFFFFC) == v1
      && *(unsigned __int16 *)(this + 2) >= 0x18u
      && *(_WORD *)(this + 8) == 1
      && *(_BYTE *)(this + 12) == 1 )
    {
      v2 = *(_BYTE *)(this + 13);
      if ( v2 <= 0xFu && v1 >= 4 * (unsigned int)v2 + 32 && *(_BYTE *)(this + 4 * v2 + 20) == 1 )
      {
        v3 = *(_BYTE *)(this + 4 * v2 + 21);
        if ( v3 <= 0xFu && v1 >= 4 * (v2 + (unsigned int)v3) + 28 )
          return 1;
      }
    }
  }
  return result;
}
