/*
 * XREFs of _RtlFindCharInUnicodeString@16 @ 0x4B2CAA20
 * Callers:
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 *     _RtlpQueryPseudoEnvironmentVariable@16 @ 0x4B32E262 (_RtlpQueryPseudoEnvironmentVariable@16.c)
 * Callees:
 *     _NLS_DOWNCASE@4 @ 0x4B2AABCB (_NLS_DOWNCASE@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlFindCharInUnicodeString(int a1, __int16 *a2, int a3, _WORD *a4)
{
  _WORD *v4; // ebx
  char v5; // dl
  int v6; // edi
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  int result; // eax
  unsigned __int16 *v11; // esi
  int v12; // edi
  int v13; // ecx
  unsigned __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // di
  __int16 v17; // ax
  unsigned __int16 *v18; // esi
  int v19; // edi
  unsigned __int16 v20; // ax
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // si
  bool v24; // zf
  unsigned __int16 *v25; // esi
  int v26; // edx
  unsigned __int16 v27; // bx
  unsigned __int16 v28; // bx
  unsigned __int16 v29; // [esp+4h] [ebp-68h]
  int v30; // [esp+8h] [ebp-64h]
  int v31; // [esp+Ch] [ebp-60h]
  char *v32; // [esp+10h] [ebp-5Ch]
  int v33; // [esp+14h] [ebp-58h]
  unsigned __int16 v34; // [esp+18h] [ebp-54h]
  unsigned __int16 v35; // [esp+20h] [ebp-4Ch]
  unsigned __int16 *v36; // [esp+24h] [ebp-48h]
  unsigned __int16 v37; // [esp+24h] [ebp-48h]
  _WORD v38[32]; // [esp+28h] [ebp-44h] BYREF
  int v39; // [esp+74h] [ebp+8h]
  int v40; // [esp+74h] [ebp+8h]
  int v41; // [esp+74h] [ebp+8h]

  v4 = a4;
  if ( a4 )
    *a4 = 0;
  v5 = a1;
  if ( (a1 & 0xFFFFFFF8) != 0 || !a4 )
    return -1073741811;
  v6 = 0;
  if ( a2 )
  {
    v7 = *a2;
    if ( (*a2 & 1) != 0 || (v8 = a2[1], (v8 & 1) != 0) || v7 > v8 || v8 == 0xFFFF || !*((_DWORD *)a2 + 1) && (v7 || v8) )
      v6 = -1073741811;
  }
  if ( v6 < 0 )
    return v6;
  if ( a3
    && ((*(_WORD *)a3 & 1) != 0
     || (v9 = *(_WORD *)(a3 + 2), (v9 & 1) != 0)
     || *(_WORD *)a3 > v9
     || v9 == 0xFFFF
     || !*(_DWORD *)(a3 + 4) && (*(_WORD *)a3 || v9)) )
  {
    result = -1073741811;
  }
  else
  {
    result = 0;
  }
  if ( result >= 0 )
  {
    v11 = (unsigned __int16 *)*((_DWORD *)a2 + 1);
    v29 = *a2;
    v12 = (unsigned __int16)*a2 >> 1;
    v32 = *(char **)(a3 + 4);
    v13 = a1 & 1;
    v14 = *(_WORD *)a3 >> 1;
    v33 = v12;
    v35 = v14;
    v30 = v13;
    v36 = v11;
    if ( (a1 & 1) != 0 )
    {
      v31 = -2;
      v14 = *(_WORD *)a3 >> 1;
      v11 = &v11[(unsigned __int16)v12 - 1];
      v36 = v11;
    }
    else
    {
      v31 = 2;
    }
    if ( (a1 & 4) != 0 )
    {
      if ( v14 > 0x20u )
      {
        if ( (_WORD)v12 )
        {
          v40 = a1 & 2;
          do
          {
            v22 = NLS_DOWNCASE(*v11);
            v23 = 0;
            v34 = v22;
            if ( v40 )
            {
              do
              {
                if ( v34 == NLS_DOWNCASE(*(_WORD *)&v32[2 * v23]) )
                  break;
                ++v23;
              }
              while ( v23 < v35 );
              v12 = v33;
              v24 = v23 == v35;
              v25 = v36;
              v4 = a4;
              if ( v24 )
                goto LABEL_56;
            }
            else
            {
              do
              {
                if ( v34 == NLS_DOWNCASE(*(_WORD *)&v32[2 * v23]) )
                  break;
                ++v23;
              }
              while ( v23 < v35 );
              v12 = v33;
              v24 = v23 == v35;
              v25 = v36;
              v4 = a4;
              if ( !v24 )
              {
LABEL_56:
                v13 = v30;
                goto LABEL_29;
              }
            }
            v11 = &v25[v31 / 2u];
            v33 = v12 + 0xFFFF;
            v36 = v11;
          }
          while ( (_WORD)v12 != 1 );
        }
      }
      else
      {
        if ( v14 )
        {
          v18 = v38;
          v19 = v14;
          do
          {
            *v18 = NLS_DOWNCASE(*(unsigned __int16 *)((char *)v18 + v32 - (char *)v38));
            ++v18;
            --v19;
          }
          while ( v19 );
          v11 = v36;
          LOWORD(v12) = v33;
          v4 = a4;
          v5 = a1;
        }
        if ( (_WORD)v12 )
        {
          v39 = v5 & 2;
          do
          {
            v20 = NLS_DOWNCASE(*v11);
            v21 = 0;
            if ( v39 )
            {
              if ( v35 )
              {
                do
                {
                  if ( v20 == v38[v21] )
                    break;
                  ++v21;
                }
                while ( v21 < v35 );
                v4 = a4;
              }
              if ( v21 == v35 )
                goto LABEL_56;
            }
            else
            {
              if ( v35 )
              {
                do
                {
                  if ( v20 == v38[v21] )
                    break;
                  ++v21;
                }
                while ( v21 < v35 );
                v4 = a4;
              }
              if ( v21 != v35 )
                goto LABEL_56;
            }
            v11 = (unsigned __int16 *)((char *)v11 + v31);
            LOWORD(v12) = v12 - 1;
          }
          while ( (_WORD)v12 );
        }
      }
    }
    else if ( v14 == 1 )
    {
      v15 = *(_WORD *)v32;
      if ( (unsigned __int16)*a2 >> 1 )
      {
        if ( (a1 & 2) != 0 )
        {
          while ( *v11 == v15 )
          {
            LOWORD(v12) = v12 - 1;
            v11 = (unsigned __int16 *)((char *)v11 + v31);
            if ( !(_WORD)v12 )
              return -1073741275;
          }
        }
        else
        {
          while ( *v11 != v15 )
          {
            v11 = (unsigned __int16 *)((char *)v11 + v31);
            LOWORD(v12) = v12 - 1;
            if ( !(_WORD)v12 )
              return -1073741275;
          }
        }
LABEL_29:
        if ( (_WORD)v12 )
        {
          v16 = 2 * v12 - 2;
          if ( v13 )
            v17 = v16;
          else
            v17 = v29 - v16;
          *v4 = v17;
          return 0;
        }
      }
    }
    else if ( (_WORD)v12 )
    {
      v26 = a1 & 2;
      v41 = v26;
      do
      {
        v4 = a4;
        v37 = 0;
        if ( v26 )
        {
          if ( v14 )
          {
            v27 = 0;
            do
            {
              if ( *v11 == *(_WORD *)&v32[2 * v27] )
                break;
              ++v27;
            }
            while ( v27 < v35 );
            v12 = v33;
            v26 = v41;
            v13 = v30;
            v14 = *(_WORD *)a3 >> 1;
            v37 = v27;
            v4 = a4;
          }
          if ( v37 == v14 )
            goto LABEL_29;
        }
        else
        {
          if ( v14 )
          {
            v28 = 0;
            do
            {
              if ( *v11 == *(_WORD *)&v32[2 * v28] )
                break;
              ++v28;
            }
            while ( v28 < v35 );
            v12 = v33;
            v26 = v41;
            v13 = v30;
            v14 = *(_WORD *)a3 >> 1;
            v37 = v28;
            v4 = a4;
          }
          if ( v37 != v14 )
            goto LABEL_29;
        }
        v11 = (unsigned __int16 *)((char *)v11 + v31);
        v12 += 0xFFFF;
        v33 = v12;
      }
      while ( (_WORD)v12 );
    }
    return -1073741275;
  }
  return result;
}
