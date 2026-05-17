/*
 * XREFs of _RtlpCallQueryRegistryRoutine@28 @ 0x4B2EB0AD
 * Callers:
 *     _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8 (_RtlpQueryRegistryValues@24.c)
 * Callees:
 *     _RtlExpandEnvironmentStrings_U@16 @ 0x4B2DC330 (_RtlExpandEnvironmentStrings_U@16.c)
 *     _RtlpQueryRegistryDirect@16 @ 0x4B2EB1AB (_RtlpQueryRegistryDirect@16.c)
 *     _RtlpValidateKeyTrust@8 @ 0x4B2EB243 (_RtlpValidateKeyTrust@8.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpCallQueryRegistryRoutine(int a1, _DWORD *a2, char *a3, unsigned int *a4, int a5, int a6, char a7)
{
  int v7; // ebx
  char *v8; // eax
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // esi
  char *v12; // edi
  int v13; // eax
  int result; // eax
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  size_t v18; // ecx
  char *v19; // eax
  char *v20; // edx
  signed int v21; // esi
  char *v22; // ecx
  char *v23; // ecx
  int v24; // eax
  char *v25; // ecx
  __int16 v26; // ax
  __int16 v27; // ax
  unsigned int v28; // eax
  char *v29; // esi
  __int16 v30; // ax
  int v31; // ecx
  unsigned int v32; // eax
  int RegistryDirect; // eax
  unsigned int v34; // ebx
  char *v35; // eax
  char *v36; // ebx
  unsigned int v38; // [esp+14h] [ebp-20h] BYREF
  unsigned __int16 v39; // [esp+18h] [ebp-1Ch] BYREF
  __int16 v40; // [esp+1Ah] [ebp-1Ah]
  char *v41; // [esp+1Ch] [ebp-18h]
  unsigned __int16 v42[2]; // [esp+20h] [ebp-14h] BYREF
  char *i; // [esp+24h] [ebp-10h]
  char *v44; // [esp+28h] [ebp-Ch]
  int v45; // [esp+2Ch] [ebp-8h]
  _DWORD *v46; // [esp+30h] [ebp-4h]

  v7 = 0;
  v38 = *a4;
  v8 = &a3[v38];
  *a4 = 0;
  v9 = *((unsigned __int8 *)a2 + 16);
  i = v8;
  v10 = *((_DWORD *)a3 + 1);
  v46 = a2;
  v41 = a3;
  v45 = v10;
  if ( v10 )
  {
    if ( *((_DWORD *)a3 + 2) != -1 )
    {
      v11 = *((_DWORD *)a3 + 3);
      if ( v11 || v10 != v9 )
      {
        if ( (a2[1] & 0x20) != 0 )
        {
          v44 = (char *)a2[2];
LABEL_6:
          v12 = &a3[*((_DWORD *)a3 + 2)];
LABEL_7:
          v9 = v45;
          goto LABEL_8;
        }
        v18 = *((_DWORD *)a3 + 4);
        if ( v11 )
          v19 = &a3[v11 + *((_DWORD *)a3 + 2)];
        else
          v19 = &a3[v18 + 20];
        v20 = (char *)((unsigned int)(v19 + 7) & 0xFFFFFFF8);
        v21 = v18 + 2;
        v44 = v20;
        if ( v18 < 0xFFFFFFFE )
        {
          if ( i - v20 < v21 )
          {
            result = -1073741789;
            *a4 = (unsigned int)&v20[v21 - (_DWORD)a3];
            return result;
          }
          memcpy(v20, a3 + 20, v18);
          v22 = v44;
          *(_WORD *)&v44[*((_DWORD *)a3 + 4)] = 0;
          v23 = &v22[v21 + 7];
          v11 = *((_DWORD *)a3 + 3);
          v23 = (char *)((unsigned int)v23 & 0xFFFFFFF8);
          a2 = v46;
          v38 = i - v23;
          v24 = *((_DWORD *)a3 + 1);
          v41 = v23;
          v45 = v24;
          goto LABEL_6;
        }
        return -1073741764;
      }
    }
  }
  v16 = v9;
  if ( !v9 )
  {
    v17 = (a2[1] & 4) == 0;
    goto LABEL_24;
  }
  v11 = a2[6];
  v12 = (char *)a2[5];
  v44 = (char *)a2[2];
  v45 = v9;
  if ( !v11 )
  {
    v25 = v12;
    if ( v16 == 1 || v16 == 2 )
    {
      if ( v12 )
      {
        do
        {
          v27 = *(_WORD *)v25;
          v25 += 2;
        }
        while ( v27 );
        v11 = v25 - v12;
        goto LABEL_7;
      }
      return -1073741764;
    }
    if ( v16 == 7 )
    {
      if ( v12 )
      {
        if ( *(_WORD *)v12 )
        {
          do
          {
            do
            {
              v26 = *(_WORD *)v25;
              v25 += 2;
            }
            while ( v26 );
          }
          while ( *(_WORD *)v25 );
        }
        v11 = v25 - v12 + 2;
        goto LABEL_7;
      }
      return -1073741764;
    }
    v9 = v16;
  }
LABEL_8:
  v13 = a2[1];
  if ( (v13 & 0x20) == 0 )
    goto LABEL_12;
  if ( (v13 & 0x100) == 0 )
  {
    if ( (v13 & 0x80u) == 0 || v9 != 1 && v9 != 7 && v9 != 2 )
      goto LABEL_12;
    v17 = (v13 & 4) == 0;
LABEL_24:
    if ( v17 )
      return 0;
    else
      return -1073741772;
  }
  if ( *((unsigned __int8 *)a2 + 19) != v9 )
    return -1073741788;
  v13 = a2[1];
LABEL_12:
  if ( (v13 & 0x10) == 0 )
  {
    if ( v9 == 7 )
    {
      v28 = v11 - 4;
      v29 = v12;
      for ( i = &v12[v28]; v29 < i; v12 = v29 )
      {
        do
        {
          v30 = *(_WORD *)v29;
          v29 += 2;
        }
        while ( v30 );
        v31 = a2[1];
        v32 = v29 - v12;
        v41 = v29;
        v38 = v29 - v12;
        if ( (v31 & 0x20) != 0 )
        {
          if ( a7 )
          {
            v7 = RtlpValidateKeyTrust(a1, v31);
            if ( v7 < 0 )
              return v7;
            a2 = v46;
            v32 = v38;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1, v12, v32, a2[3]);
          a2 = v46;
          v46[3] += 8;
        }
        else
        {
          RegistryDirect = ((int (__thiscall *)(_DWORD, char *, int, char *, unsigned int, int, _DWORD))*a2)(
                             *a2,
                             v44,
                             1,
                             v12,
                             v32,
                             a5,
                             a2[3]);
          a2 = v46;
          v29 = v41;
        }
        v7 = RegistryDirect != -1073741789 ? RegistryDirect : 0;
        if ( v7 < 0 )
          break;
      }
      return v7;
    }
    if ( v9 == 2 && v11 >= 2 && v11 <= 0xFFFC )
    {
      v34 = v11 - 2;
      v35 = v12;
      if ( v11 != 2 )
      {
        while ( *(_WORD *)v35 != 37 )
        {
          v35 += 2;
          v34 -= 2;
          if ( !v34 )
            goto LABEL_15;
        }
        v36 = v41;
        v42[1] = v11;
        v42[0] = v11 - 2;
        v39 = 0;
        i = v12;
        if ( (int)v38 > 0 )
        {
          if ( v38 > 0xFFFE )
          {
            v40 = -2;
            *((_WORD *)v41 + 32766) = 0;
          }
          else
          {
            v40 = v38;
            *(_WORD *)&v41[2 * (v38 >> 1) - 2] = 0;
          }
        }
        else
        {
          v40 = 0;
        }
        result = RtlExpandEnvironmentStrings_U(a6, v42, (int)&v39, &v38);
        v9 = 1;
        v45 = 1;
        if ( result < 0 )
        {
          if ( result == -1073741789 )
            *a4 = (unsigned int)&v36[v38 - (_DWORD)a3];
          if ( result != -2147483643 && (result != -1073741789 || v40 != -2 && v38 <= 0xFFFC) )
            return result;
        }
        else
        {
          v12 = v41;
          v11 = v39 + 2;
        }
        a2 = v46;
      }
    }
  }
LABEL_15:
  if ( (a2[1] & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(a1, a2[1]);
      if ( result < 0 )
        return result;
      a2 = v46;
      v9 = v45;
    }
    v15 = RtlpQueryRegistryDirect(v9, v12, v11, a2[3]);
  }
  else
  {
    v15 = ((int (__thiscall *)(_DWORD, char *, int, char *, unsigned int, int, _DWORD))*a2)(
            *a2,
            v44,
            v9,
            v12,
            v11,
            a5,
            a2[3]);
  }
  return v15 != -1073741789 ? v15 : 0;
}
