/*
 * XREFs of ?bAddPFELink@FHOBJ@@QAEHPAU_HASHBUCKET@@IPBGAAVPFEOBJ@@H@Z @ 0xDE7EC
 * Callers:
 *     ?bInsert@FHOBJ@@QAEHAAVPFEOBJ@@@Z @ 0xDE69E (-bInsert@FHOBJ@@QAEHAAVPFEOBJ@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?flFontType@PFEOBJ@@QAEKXZ @ 0x8487E (-flFontType@PFEOBJ@@QAEKXZ.c)
 *     ?efstyCompute@PFEOBJ@@QAE?AW4_ENUMFONTSTYLE@@XZ @ 0x8AC7C (-efstyCompute@PFEOBJ@@QAE-AW4_ENUMFONTSTYLE@@XZ.c)
 */

int __thiscall FHOBJ::bAddPFELink(
        FHOBJ *this,
        struct _HASHBUCKET *a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        struct PFEOBJ *a5,
        int a6)
{
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  int v8; // ebx
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  unsigned __int16 *v12; // ecx
  unsigned __int16 v13; // ax
  struct PFEOBJ *v14; // edx
  int v15; // eax
  PFEOBJ *v17; // ecx
  int v18; // ecx

  v6 = PALLOCMEM2(8u, 1802398791, 1);
  v7 = v6;
  if ( v6 )
  {
    v8 = 0;
    *v6 = 0;
    v6[1] = *(_DWORD *)a5;
    if ( a2 && (a6 || (*((_BYTE *)a2 + 20) & 2) == 0) )
    {
      if ( PFEOBJ::efstyCompute(a5) || (*((_BYTE *)a2 + 20) & 4) != 0 )
      {
        **((_DWORD **)a2 + 2) = v7;
        *((_DWORD *)a2 + 2) = v7;
      }
      else
      {
        *v7 = *((_DWORD *)a2 + 1);
        *((_DWORD *)a2 + 5) |= 4u;
        *((_DWORD *)a2 + 1) = v7;
      }
      if ( (PFEOBJ::flFontType(v17) & 4) != 0 )
        ++*((_DWORD *)a2 + 3);
      if ( (PFEOBJ::flFontType(a5) & 1) != 0 )
        ++*((_DWORD *)a2 + 4);
      return 1;
    }
    v9 = PALLOCMEM2(0x64u, 1650550855, 1);
    v10 = v9;
    if ( v9 )
    {
      v9[2] = v7;
      v9[1] = v7;
      v11 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(v11 + 20) )
      {
        v10[6] = *(_DWORD *)(v11 + 24);
        v10[7] = 0;
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 24) + 28) = v10;
        *(_DWORD *)(*((_DWORD *)this + 1) + 24) = v10;
      }
      else
      {
        *(_DWORD *)(v11 + 20) = v10;
        *(_DWORD *)(*((_DWORD *)this + 1) + 24) = v10;
        v10[6] = 0;
        v10[7] = 0;
      }
      v10[8] = *(_DWORD *)(*(_DWORD *)a5 + 48);
      v10[5] = a6 != 0 ? 2 : 0;
      v10[3] = ((unsigned int)PFEOBJ::flFontType(a5) >> 2) & 1;
      v10[4] = PFEOBJ::flFontType(a5) & 1;
      if ( *(_DWORD *)(*((_DWORD *)this + 1) + 4) == 2 )
      {
        v14 = a5;
        v18 = *(_DWORD *)a5;
        v10[9] = *(_DWORD *)(*(_DWORD *)a5 + 52);
        v10[10] = *(_DWORD *)(v18 + 56);
      }
      else
      {
        v12 = (unsigned __int16 *)(v10 + 9);
        do
        {
          v13 = a4[v8++];
          *v12++ = v13;
        }
        while ( v8 < 32 );
        v14 = a5;
      }
      v15 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * a3 + 28);
      *v10 = v15;
      if ( v15 )
        ++*(_DWORD *)(*((_DWORD *)this + 1) + 16);
      *(_DWORD *)(*((_DWORD *)this + 1) + 4 * a3 + 28) = v10;
      ++*(_DWORD *)(*((_DWORD *)this + 1) + 12);
      if ( !PFEOBJ::efstyCompute(v14) )
        v10[5] |= 4u;
      return 1;
    }
    Win32FreePool(v7);
  }
  return 0;
}
