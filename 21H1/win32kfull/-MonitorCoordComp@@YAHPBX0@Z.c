/*
 * XREFs of ?MonitorCoordComp@@YAHPBX0@Z @ 0x181426
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl MonitorCoordComp(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int v4; // esi
  _DWORD *v5; // ecx
  int v6; // edi
  int v7; // eax
  _DWORD *v9; // [esp+14h] [ebp+8h]

  v2 = (_DWORD *)a1[3];
  v3 = v2[39];
  v9 = (_DWORD *)a2[3];
  if ( !v3 )
  {
    v3 = *(_DWORD *)(v2[5] + 16) + (*(_DWORD *)(v2[5] + 24) - *(_DWORD *)(v2[5] + 16)) / 2;
    v2[39] = v3;
  }
  v4 = v2[40];
  if ( !v4 )
  {
    v4 = *(_DWORD *)(v2[5] + 20) + (*(_DWORD *)(v2[5] + 28) - *(_DWORD *)(v2[5] + 20)) / 2;
    v2[40] = v4;
  }
  v5 = v9;
  v6 = v9[39];
  if ( !v6 )
  {
    v6 = *(_DWORD *)(v9[5] + 16) + (*(_DWORD *)(v9[5] + 24) - *(_DWORD *)(v9[5] + 16)) / 2;
    v5 = v9;
    v9[39] = v6;
  }
  v7 = v5[40];
  if ( !v7 )
  {
    v7 = *(_DWORD *)(v5[5] + 20) + (*(_DWORD *)(v5[5] + 28) - *(_DWORD *)(v5[5] + 20)) / 2;
    v9[40] = v7;
  }
  if ( v3 >= v6 )
  {
    if ( v3 != v6 )
      return 1;
    if ( v4 >= v7 )
      return v4 != v7;
  }
  return -1;
}
