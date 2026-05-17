/*
 * XREFs of _ApiSetQuerySchemaInfo@16 @ 0x4B2D0221
 * Callers:
 *     _ApiSetQueryApiSetPresenceEx@12 @ 0x4B2D0200 (_ApiSetQueryApiSetPresenceEx@12.c)
 * Callees:
 *     _ApiSetpSearchForApiSet@12 @ 0x4B2D03B0 (_ApiSetpSearchForApiSet@12.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 */

int __fastcall ApiSetQuerySchemaInfo(int a1, unsigned __int16 *a2, bool *a3, bool *a4)
{
  unsigned int v4; // esi
  int v5; // ebx
  bool v6; // al
  _DWORD *v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // edi
  unsigned int v11; // eax
  _WORD *v12; // edx
  unsigned int v13; // ecx
  _WORD *v14; // esi
  int v15; // edi
  unsigned __int16 *v16; // esi
  int v17; // edx
  _DWORD *v18; // eax
  _DWORD *v19; // esi
  unsigned int v20; // ecx
  unsigned int v21; // eax
  _WORD *v22; // edx
  unsigned int v23; // edi
  _WORD *v24; // edx
  int v25; // eax
  _WORD v27[2]; // [esp+Ch] [ebp-20h] BYREF
  int v28; // [esp+10h] [ebp-1Ch]
  _WORD v29[2]; // [esp+14h] [ebp-18h] BYREF
  int v30; // [esp+18h] [ebp-14h]
  int v31; // [esp+1Ch] [ebp-10h]
  int v32; // [esp+20h] [ebp-Ch]
  unsigned int v33; // [esp+24h] [ebp-8h]
  bool v34; // [esp+2Ah] [ebp-2h]
  bool v35; // [esp+2Bh] [ebp-1h]

  v4 = *a2;
  v5 = 0;
  v32 = a1;
  v6 = 0;
  v35 = 0;
  v34 = 0;
  if ( v4 >= 8 )
  {
    v7 = (_DWORD *)*((_DWORD *)a2 + 1);
    v8 = *v7 & 0xFFDFFFDF;
    v9 = v7[1] & 0xFFFFFFDF;
    v6 = v8 == 5242945 && v9 == 2949193 || v8 == 5767237 && v9 == 2949204;
  }
  v10 = *((_DWORD *)a2 + 1);
  v30 = v10;
  if ( !v6 )
  {
    v29[0] = 20;
    v29[1] = 20;
    v27[0] = 20;
    v27[1] = 20;
    v30 = v10;
    v28 = (int)L"SchemaExt-";
    if ( !RtlCompareUnicodeString(v29, v27, 1) )
    {
      v35 = ApiSetpSearchForApiSet((unsigned __int16)v4 >> 1) != 0;
      v34 = v35;
      goto LABEL_28;
    }
    return -1073741811;
  }
  v11 = v4;
  v12 = (_WORD *)(v10 + v4);
  if ( v4 > 1 )
  {
    do
    {
      --v12;
      v11 -= 2;
    }
    while ( *v12 != 45 && v11 > 1 );
  }
  v31 = (unsigned __int16)v11 >> 1;
  if ( !(_WORD)v31 )
    return -1073741811;
  v33 = 0;
  v13 = (v4 - (unsigned __int16)v11) >> 1;
  if ( !v13 )
    return -1073741811;
  v14 = (_WORD *)(v10 + (unsigned __int16)v11);
  if ( *v14 != 45 )
    return -1073741811;
  v15 = v13 - 1;
  v16 = v14 + 1;
  if ( v13 == 1 )
    return -1073741811;
  v28 = 9;
  if ( (int)(v13 - 1) > 0 )
  {
    do
    {
      v17 = *v16;
      if ( (unsigned __int16)(v17 - 48) > 9u )
        return -1073741811;
      ++v16;
      --v15;
      v33 = v17 + 10 * v33 - 48;
    }
    while ( v15 > 0 );
  }
  v18 = (_DWORD *)ApiSetpSearchForApiSet(v31);
  v19 = v18;
  if ( v18 )
  {
    v20 = 0;
    v21 = (unsigned int)(v18[2] - v18[3]) >> 1;
    if ( v21 )
    {
      v22 = (_WORD *)(v32 + v19[3] + v19[1]);
      if ( *v22 == 45 )
      {
        v23 = v21 - 1;
        v24 = v22 + 1;
        if ( v21 != 1 )
        {
          if ( (int)(v21 - 1) <= 0 )
          {
LABEL_25:
            if ( v33 <= v20 )
            {
              v35 = 1;
              if ( v19[5] )
                v34 = *(_DWORD *)(v19[4] + v32 + 16) != 0;
            }
          }
          else
          {
            while ( (unsigned __int16)(*v24 - 48) <= (unsigned __int16)v28 )
            {
              v25 = (unsigned __int16)*v24++;
              v20 = v25 + 10 * v20 - 48;
              if ( (int)--v23 <= 0 )
                goto LABEL_25;
            }
          }
        }
      }
    }
  }
LABEL_28:
  *a3 = v35;
  *a4 = v34;
  return v5;
}
