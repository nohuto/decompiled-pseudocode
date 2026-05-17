/*
 * XREFs of _RtlpValidObjectAce@4 @ 0x4B34CCBA
 * Callers:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 * Callees:
 *     <none>
 */

char __thiscall RtlpValidObjectAce(int this)
{
  unsigned __int16 v2; // cx
  unsigned int v3; // esi
  int v4; // edi
  int v5; // ebx
  int v6; // ecx
  unsigned __int8 v7; // cl

  if ( !this )
    return 0;
  v2 = *(_WORD *)(this + 2);
  v3 = *(unsigned __int16 *)(this + 2);
  if ( ((v3 + 3) & 0xFFFFFFFC) != v3 || v2 < 0xCu )
    return 0;
  v4 = 16 * (*(_DWORD *)(this + 8) & 1);
  v5 = v4;
  if ( (*(_DWORD *)(this + 8) & 2) != 0 )
    v5 = v4 + 16;
  if ( v3 >= v5 + 24
    && (v6 = v4 + ((*(_DWORD *)(this + 8) & 2) != 0 ? 28 : 12), *(_BYTE *)(v6 + this) == 1)
    && (v7 = *(_BYTE *)(v6 + this + 1), v7 <= 0xFu)
    && v3 >= v5 + 4 * ((unsigned int)v7 + 5) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
