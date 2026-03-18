/*
 * XREFs of ?IsTooltipHittest@@YGPAGPAUtagWND@@I@Z @ 0x12D84
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall IsTooltipHittest(int a1, unsigned int a2)
{
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  bool v5; // zf
  unsigned __int16 *result; // eax
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // eax
  int v10; // eax

  if ( a2 > 0x15 )
  {
    v7 = a2 - 66;
    if ( !v7 )
      return (unsigned __int16 *)&gszRESDOWN;
    v8 = v7 - 1;
    if ( v8 )
    {
      v5 = v8 == 1;
LABEL_7:
      if ( v5 )
        return (unsigned __int16 *)&gszSCLOSE;
      return 0;
    }
    return (unsigned __int16 *)&gszMIN;
  }
  if ( a2 == 21 )
    return (unsigned __int16 *)&gszHELP;
  v2 = a2 - 2;
  if ( !v2 )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 15) & 8) != 0 )
      return (unsigned __int16 *)&gszCAPTIONTOOLTIP;
    return 0;
  }
  v3 = v2 - 6;
  if ( !v3 )
  {
    v10 = *(_DWORD *)(a1 + 20);
    if ( (*(_BYTE *)(v10 + 22) & 2) == 0 )
      return 0;
    v5 = (*(_BYTE *)(v10 + 23) & 0x20) == 0;
    result = (unsigned __int16 *)&gszRESUP;
    if ( !v5 )
      return result;
    return (unsigned __int16 *)&gszMIN;
  }
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 == 11;
    goto LABEL_7;
  }
  v9 = *(_DWORD *)(a1 + 20);
  if ( (*(_BYTE *)(v9 + 22) & 1) == 0 )
    return 0;
  v5 = (*(_BYTE *)(v9 + 23) & 1) == 0;
  result = (unsigned __int16 *)&gszRESDOWN;
  if ( v5 )
    return (unsigned __int16 *)&gszMAX;
  return result;
}
