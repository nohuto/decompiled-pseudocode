/*
 * XREFs of __SBGetParms@16 @ 0x1A3698
 * Callers:
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall _SBGetParms(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // edx
  int v8; // eax

  v5 = *(_DWORD *)(a1 + 8);
  v6 = a4[1];
  v7 = *(_DWORD **)(v5 + 392);
  if ( (v6 & 1) != 0 )
  {
    a4[2] = *a3;
    a4[3] = a3[1];
  }
  if ( (v6 & 2) != 0 )
    a4[4] = a3[2];
  if ( (v6 & 4) != 0 )
    a4[5] = a3[3];
  if ( (v6 & 0x10) != 0 )
  {
    if ( v7 && v7[15] == a2 && v7[1] == a1 )
      v8 = v7[14];
    else
      v8 = a3[3];
    a4[6] = v8;
  }
  return (v6 & 0x17) != 0;
}
