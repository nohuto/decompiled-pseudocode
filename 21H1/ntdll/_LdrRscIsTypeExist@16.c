/*
 * XREFs of _LdrRscIsTypeExist@16 @ 0x4B2BE7B0
 * Callers:
 *     _LdrIsResItemExist@16 @ 0x4B2B8120 (_LdrIsResItemExist@16.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 * Callees:
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall LdrRscIsTypeExist(_DWORD *a1, wchar_t *String1, int a3, _DWORD *a4)
{
  int v4; // ecx
  _DWORD *v5; // edx
  int v7; // ecx
  _DWORD *v8; // edx
  char v11; // al
  int v12; // edx
  const wchar_t *v13; // ecx
  int v14; // eax
  char v15; // al
  int v16; // edx
  const wchar_t *v17; // ecx
  int v18; // eax
  unsigned int v19; // kr00_4
  unsigned int v20; // kr04_4
  int v21; // [esp+28h] [ebp-28h]
  const unsigned __int16 *v22; // [esp+2Ch] [ebp-24h]
  int v23; // [esp+30h] [ebp-20h]
  const unsigned __int16 *v24; // [esp+34h] [ebp-1Ch]

  if ( a1 && a4 )
  {
    if ( (unsigned int)String1 >= 0x10000 )
    {
      v12 = a1[22] >> 1;
      v23 = v12;
      v13 = (const wchar_t *)((char *)a1 + a1[21]);
      v24 = v13;
      if ( (unsigned int)v13 > 0x10000 )
      {
        while ( v12 > 0 )
        {
          if ( !*v13 )
            goto LABEL_33;
          v14 = _wcsicmp(String1, v13);
          v13 = v24;
          if ( !v14 )
          {
            v12 = v23;
            break;
          }
          v20 = wcslen(v24);
          v13 = &v24[v20 + 1];
          v24 = v13;
          v12 = v23 - (v20 + 1);
          v23 = v12;
        }
      }
      if ( !*v13 || (v15 = 1, v12 <= 0) )
LABEL_33:
        v15 = 0;
      if ( !v15 )
        *a4 |= 0x40000u;
      v16 = a1[26] >> 1;
      v21 = v16;
      v17 = (const wchar_t *)((char *)a1 + a1[25]);
      v22 = v17;
      if ( (unsigned int)v17 > 0x10000 )
      {
        while ( v16 > 0 )
        {
          if ( !*v17 )
            goto LABEL_14;
          v18 = _wcsicmp(String1, v17);
          v17 = v22;
          if ( !v18 )
          {
            v16 = v21;
            break;
          }
          v19 = wcslen(v22);
          v17 = &v22[v19 + 1];
          v22 = v17;
          v16 = v21 - (v19 + 1);
          v21 = v16;
        }
      }
      if ( *v17 && v16 > 0 )
        v11 = 1;
      else
LABEL_14:
        v11 = 0;
      if ( v11 )
        return 0;
    }
    else
    {
      v4 = a1[24] >> 2;
      v5 = (_DWORD *)((char *)a1 + a1[23]);
      do
      {
        if ( --v4 < 0 )
          break;
      }
      while ( (char *)String1 - *v5++ );
      if ( v4 < 0 )
        *a4 |= 0x40000u;
      v7 = a1[28] >> 2;
      v8 = (_DWORD *)((char *)a1 + a1[27]);
      do
      {
        if ( --v7 < 0 )
          break;
      }
      while ( (char *)String1 - *v8++ );
      if ( v7 >= 0 )
        return 0;
    }
    *a4 |= 0x20000u;
    return 0;
  }
  return -1073741811;
}
