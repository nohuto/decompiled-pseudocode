/*
 * XREFs of ?CalcMinZOrder@@YGPAUtagWND@@PAU1@@Z @ 0xB4C0A
 * Callers:
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 * Callees:
 *     <none>
 */

struct tagWND *__thiscall CalcMinZOrder(_DWORD *this)
{
  _DWORD *v1; // edx
  _DWORD *v2; // esi
  int v3; // eax

  v1 = (_DWORD *)this[12];
  v2 = 0;
  while ( v1 )
  {
    v3 = v1[5];
    if ( (*(_BYTE *)(v3 + 12) & 0x20) != 0 || (*(_BYTE *)(v3 + 16) & 8) != (*(_BYTE *)(this[5] + 16) & 8) )
      break;
    if ( v1[16] == this[16] )
      v2 = v1;
    v1 = (_DWORD *)v1[12];
  }
  return (struct tagWND *)v2;
}
