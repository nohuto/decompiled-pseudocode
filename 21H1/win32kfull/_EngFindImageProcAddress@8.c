/*
 * XREFs of _EngFindImageProcAddress@8 @ 0x1D1616
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall EngFindImageProcAddress(HANDLE hModule, LPSTR lpProcName)
{
  int v2; // eax
  int v3; // ecx
  int v6; // esi
  _DWORD *v7; // ecx
  int v8; // edi
  int v9; // eax
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]
  HANDLE hModulea; // [esp+1Ch] [ebp+8h]
  LPSTR lpProcNamea; // [esp+20h] [ebp+Ch]

  if ( hModule )
  {
    v6 = *((_DWORD *)hModule + 2);
    if ( !_strncmp(lpProcName, "DrvEnableDriver", strlen(lpProcName)) )
    {
      return *(PVOID *)(v6 + 16);
    }
    else
    {
      v7 = *(_DWORD **)(v6 + 20);
      if ( v7
        && (v8 = 0,
            v9 = *(_DWORD *)(v6 + 8),
            lpProcNamea = (LPSTR)(v9 + v7[8]),
            v11 = v9 + v7[9],
            hModulea = (HANDLE)v7[6],
            v10 = v9 + v7[7],
            hModulea) )
      {
        while ( _strncmp(
                  lpProcName,
                  (const char *)(*(_DWORD *)(v6 + 8) + *(_DWORD *)&lpProcNamea[4 * v8]),
                  strlen(lpProcName)) )
        {
          if ( ++v8 >= (unsigned int)hModulea )
            return 0;
        }
        return (PVOID)(*(_DWORD *)(v6 + 8) + *(_DWORD *)(v10 + 4 * *(unsigned __int16 *)(v11 + 2 * v8)));
      }
      else
      {
        return 0;
      }
    }
  }
  else
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = strcmp(lpProcName, (const char *)*(&gaNewProcAddresses + 2 * v2));
      if ( v3 )
        v3 = v3 < 0 ? -1 : 1;
      if ( !v3 )
        break;
      if ( (unsigned int)++v2 >= 0x48 )
        return 0;
    }
    return *(&off_268A14 + 2 * v2);
  }
}
