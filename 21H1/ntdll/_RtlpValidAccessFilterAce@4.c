/*
 * XREFs of _RtlpValidAccessFilterAce@4 @ 0x4B34CA34
 * Callers:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 * Callees:
 *     <none>
 */

bool __thiscall RtlpValidAccessFilterAce(int this)
{
  int v1; // edx
  unsigned __int8 v2; // al
  int v3; // eax
  bool result; // al

  result = 0;
  if ( this )
  {
    v1 = *(unsigned __int16 *)(this + 2);
    if ( ((v1 + 3) & 0xFFFFFFFC) == v1 && *(unsigned __int16 *)(this + 2) >= 0x10u && *(_BYTE *)(this + 8) == 1 )
    {
      v2 = *(_BYTE *)(this + 9);
      if ( v2 <= 0xFu )
      {
        v3 = 4 * v2 + 8;
        if ( v1 - v3 - 8 >= 6 && *(_DWORD *)(v3 + this + 8) == 2020897377 )
          return 1;
      }
    }
  }
  return result;
}
