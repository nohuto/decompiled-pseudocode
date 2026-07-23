/*
 * XREFs of _RtlpMuiRegGrowStringPool@16 @ 0x4B36B939
 * Callers:
 *     _RtlpMuiRegGetOrAddString@16 @ 0x4B2AD813 (_RtlpMuiRegGetOrAddString@16.c)
 * Callees:
 *     _RtlpMuiRegResizeStringPool@16 @ 0x4B36BD9D (_RtlpMuiRegResizeStringPool@16.c)
 */

int __thiscall RtlpMuiRegGrowStringPool(unsigned __int16 *this, int a2, char a3)
{
  int v3; // edx
  int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // edi
  int v7; // esi

  if ( this )
  {
    v3 = a2;
    if ( a2 < 0 )
      v3 = 16;
    v4 = v3 + this[5];
    v5 = this[2];
    v6 = this[3] + 1;
    if ( v6 < v5 )
      v6 = this[2];
    v7 = this[4];
    if ( v4 < v7 )
      v4 = this[4];
    if ( a3 || v6 != v5 || v4 != v7 )
      return RtlpMuiRegResizeStringPool(this, v4, a3);
  }
  return (int)this;
}
