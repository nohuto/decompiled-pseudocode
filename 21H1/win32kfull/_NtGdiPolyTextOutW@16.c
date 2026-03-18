/*
 * XREFs of _NtGdiPolyTextOutW@16 @ 0x5619E
 * Callers:
 *     <none>
 * Callees:
 *     _GrePolyTextOutW@16 @ 0x564DC (_GrePolyTextOutW@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiPolyTextOutW(HDC a1, char *Src, unsigned int a3, int a4)
{
  int v4; // esi
  unsigned int v5; // edi
  unsigned int i; // ecx
  unsigned int j; // edi
  unsigned int k; // edi
  unsigned int v9; // eax
  char *v10; // edx
  char *v11; // ecx
  char *v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  unsigned int v16; // eax
  size_t v17; // edx
  char *v18; // eax
  char *v19; // ecx
  unsigned int v21; // [esp+18h] [ebp-48h]
  char *v22; // [esp+18h] [ebp-48h]
  char *v23; // [esp+24h] [ebp-3Ch]
  unsigned int v24; // [esp+24h] [ebp-3Ch]
  unsigned int v25; // [esp+24h] [ebp-3Ch]
  int v26; // [esp+28h] [ebp-38h]
  size_t v27; // [esp+28h] [ebp-38h]
  char *v28; // [esp+28h] [ebp-38h]
  char *v29; // [esp+30h] [ebp-30h]
  int v30; // [esp+30h] [ebp-30h]
  char *v31; // [esp+40h] [ebp-20h]
  char *Srca; // [esp+6Ch] [ebp+Ch]

  v4 = 1;
  v5 = 40 * a3;
  v31 = 0;
  if ( a3 > (unsigned int)&loc_FA000 )
  {
    v4 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned int)&Src[v5] > _MmUserProbeAddress || &Src[v5] < Src )
        *(_BYTE *)_MmUserProbeAddress = 0;
    }
    for ( i = 0; i < a3; ++i )
    {
      v13 = 40 * i;
      v27 = *(_DWORD *)&Src[40 * i + 8];
      v24 = v5;
      v5 += 2 * v27;
      if ( v27 > 0x1388000 || v5 < v24 )
        goto LABEL_55;
      v14 = *(_DWORD *)&Src[40 * i + 8];
      if ( *(_DWORD *)&Src[v13 + 36] )
      {
        v14 = *(_DWORD *)&Src[40 * i + 8];
        if ( (*(_DWORD *)&Src[40 * i + 16] & 0x2000) != 0 )
        {
          v4 = 2 * v27 <= 0x9C4000 ? v4 : 0;
          v15 = 8 * v27;
        }
        else
        {
          v4 = v27 <= 0x9C4000 ? v4 : 0;
          v15 = 4 * v27;
        }
        v25 = v5;
        v5 += v15;
        if ( !v4 || v5 < v25 )
        {
LABEL_55:
          v4 = 0;
          break;
        }
        v13 = 40 * i;
      }
      if ( v14 && !*(_DWORD *)&Src[v13 + 12] )
        goto LABEL_55;
    }
  }
  if ( v4 && v5 )
  {
    if ( v5 <= 0x2710000 )
      v31 = (char *)AllocFreeTmpBuffer(v5);
    if ( v31 )
    {
      memcpy(v31, Src, 40 * a3);
      Srca = &v31[40 * a3];
      v23 = &v31[v5];
      for ( j = 0; j < a3; ++j )
      {
        v30 = 40 * j;
        v16 = *(_DWORD *)&v31[40 * j + 8];
        if ( v16 )
        {
          v28 = *(char **)&v31[40 * j + 36];
          if ( v28 )
          {
            v17 = 4 * v16;
            if ( (*(_DWORD *)&v31[v30 + 16] & 0x2000) != 0 )
            {
              v4 = v16 <= 0x4E2000 ? v4 : 0;
              v17 = 8 * v16;
            }
            else
            {
              v4 = v16 <= 0x9C4000 ? v4 : 0;
            }
            v18 = &Srca[v17];
            v22 = &Srca[v17];
            if ( !v4 || v18 < Srca || v18 > v23 )
            {
LABEL_60:
              v4 = 0;
              goto LABEL_48;
            }
            v19 = Srca;
            if ( &v28[v17] < v28 || (v19 = Srca, (unsigned int)&v28[v17] > _MmUserProbeAddress) )
              *(_BYTE *)_MmUserProbeAddress = 0;
            memcpy(v19, v28, v17);
            *(_DWORD *)&v31[v30 + 36] = Srca;
            Srca = v22;
          }
        }
      }
      for ( k = 0; k < a3; ++k )
      {
        v9 = *(_DWORD *)&v31[40 * k + 8];
        v21 = v9;
        if ( v9 )
        {
          v10 = *(char **)&v31[40 * k + 12];
          v11 = Srca;
          if ( !v10 )
            goto LABEL_60;
          v26 = 2 * v9;
          v12 = &Srca[2 * v9];
          v29 = v12;
          if ( v21 > 0x1388000 || v12 < Srca || v12 > v23 )
            goto LABEL_60;
          if ( &v10[v26] < v10 || (v11 = Srca, (unsigned int)&v10[v26] > _MmUserProbeAddress) )
            *(_BYTE *)_MmUserProbeAddress = 0;
          memcpy(v11, v10, v26);
          *(_DWORD *)&v31[40 * k + 12] = Srca;
          Srca = v29;
        }
      }
LABEL_48:
      if ( v4 )
        v4 = GrePolyTextOutW(a1, a3, a4);
      FreeTmpBuffer(v31);
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
