/*
 * XREFs of __BuildNameList@16 @ 0xA61F2
 * Callers:
 *     _NtUserBuildNameList@16 @ 0xA612C (_NtUserBuildNameList@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall _BuildNameList(int a1, char *a2, int a3, _DWORD *a4)
{
  int v5; // ebx
  char *v6; // esi
  int CurrentProcess; // eax
  int v8; // eax
  int v9; // edx
  int NameInfo; // eax
  char *v11; // esi
  int v13; // [esp+20h] [ebp-34h]
  int v14; // [esp+24h] [ebp-30h]
  int v15; // [esp+28h] [ebp-2Ch]
  unsigned int v16; // [esp+2Ch] [ebp-28h]
  int v17; // [esp+30h] [ebp-24h]
  PGENERIC_MAPPING v18; // [esp+34h] [ebp-20h]
  int v19; // [esp+5Ch] [ebp+8h]

  v5 = 0;
  LOBYTE(v17) = 1;
  *((_DWORD *)a2 + 1) = 0;
  v6 = a2 + 8;
  v16 = (unsigned int)&a2[a3 - 2];
  if ( a1 )
  {
    v19 = *(_DWORD *)(a1 + 8);
    v14 = 64;
    v18 = _DesktopMapping;
    v15 = 16;
    CurrentProcess = PsGetCurrentProcess();
    LOBYTE(v17) = IsProcessDwm(CurrentProcess) == 0;
    v8 = v19;
    v9 = 64;
  }
  else
  {
    v8 = _grpWinStaList;
    v19 = _grpWinStaList;
    v9 = 256;
    v14 = 256;
    v18 = (PGENERIC_MAPPING)_WinStaMapping;
    v15 = 4;
  }
  *a4 = 0;
  while ( v8 )
  {
    if ( AccessCheckObject(v8, v9, v17, v18) )
    {
      NameInfo = ObQueryNameInfo(v19);
      v13 = NameInfo;
      if ( NameInfo )
      {
        if ( (unsigned int)&v6[*(unsigned __int16 *)(NameInfo + 4) + 2] >= v16 )
        {
          *a4 += v6 - a2;
          v6 = a2 + 8;
          v5 = -1073741789;
        }
        ++*((_DWORD *)a2 + 1);
        if ( (unsigned int)&v6[*(unsigned __int16 *)(NameInfo + 4) + 2] <= v16 )
        {
          memcpy(v6, *(const void **)(NameInfo + 8), *(unsigned __int16 *)(NameInfo + 4));
          v11 = &v6[*(unsigned __int16 *)(v13 + 4)];
          *(_WORD *)v11 = 0;
          v6 = v11 + 2;
        }
      }
    }
    v8 = *(_DWORD *)(v15 + v19);
    v19 = v8;
    v9 = v14;
  }
  *(_WORD *)v6 = 0;
  *(_DWORD *)a2 = v6 + 2 - a2;
  *a4 += v6 + 2 - a2;
  return v5;
}
