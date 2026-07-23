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
  wchar_t *v10; // edi
  unsigned int v11; // eax
  _WORD *v12; // edx
  unsigned int v13; // ecx
  _WORD *v14; // esi
  int v15; // edi
  unsigned __int16 *v16; // esi
  int v17; // edx
  int v18; // eax
  _DWORD *v19; // esi
  unsigned int v20; // ecx
  unsigned int v21; // eax
  _WORD *v22; // edx
  unsigned int v23; // edi
  _WORD *v24; // edx
  int v25; // eax
  _UNICODE_STRING String2; // [esp+Ch] [ebp-20h] BYREF
  _UNICODE_STRING String1; // [esp+14h] [ebp-18h] BYREF
  int v29; // [esp+1Ch] [ebp-10h]
  int v30; // [esp+20h] [ebp-Ch]
  unsigned int v31; // [esp+24h] [ebp-8h]
  bool v32; // [esp+2Ah] [ebp-2h]
  bool v33; // [esp+2Bh] [ebp-1h]

  v4 = *a2;
  v5 = 0;
  v30 = a1;
  v6 = 0;
  v33 = 0;
  v32 = 0;
  if ( v4 >= 8 )
  {
    v7 = (_DWORD *)*((_DWORD *)a2 + 1);
    v8 = *v7 & 0xFFDFFFDF;
    v9 = v7[1] & 0xFFFFFFDF;
    v6 = v8 == 5242945 && v9 == 2949193 || v8 == 5767237 && v9 == 2949204;
  }
  v10 = (wchar_t *)*((_DWORD *)a2 + 1);
  String1.Buffer = v10;
  if ( !v6 )
  {
    String1.Length = 20;
    String1.MaximumLength = 20;
    String2.Length = 20;
    String2.MaximumLength = 20;
    String1.Buffer = v10;
    String2.Buffer = L"SchemaExt-";
    if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
    {
      v33 = ApiSetpSearchForApiSet(v30, (unsigned __int16)v4 >> 1) != 0;
      v32 = v33;
      goto LABEL_28;
    }
    return -1073741811;
  }
  v11 = v4;
  v12 = (wchar_t *)((char *)v10 + v4);
  if ( v4 > 1 )
  {
    do
    {
      --v12;
      v11 -= 2;
    }
    while ( *v12 != 45 && v11 > 1 );
  }
  v29 = (unsigned __int16)v11 >> 1;
  if ( !(_WORD)v29 )
    return -1073741811;
  v31 = 0;
  v13 = (v4 - (unsigned __int16)v11) >> 1;
  if ( !v13 )
    return -1073741811;
  v14 = (wchar_t *)((char *)v10 + (unsigned __int16)v11);
  if ( *v14 != 45 )
    return -1073741811;
  v15 = v13 - 1;
  v16 = v14 + 1;
  if ( v13 == 1 )
    return -1073741811;
  String2.Buffer = (wchar_t *)9;
  if ( (int)(v13 - 1) > 0 )
  {
    do
    {
      v17 = *v16;
      if ( (unsigned __int16)(v17 - 48) > 9u )
        return -1073741811;
      ++v16;
      --v15;
      v31 = v17 + 10 * v31 - 48;
    }
    while ( v15 > 0 );
  }
  v18 = ApiSetpSearchForApiSet(v30, v29);
  v19 = (_DWORD *)v18;
  if ( v18 )
  {
    v20 = 0;
    v21 = (unsigned int)(*(_DWORD *)(v18 + 8) - *(_DWORD *)(v18 + 12)) >> 1;
    if ( v21 )
    {
      v22 = (_WORD *)(v30 + v19[3] + v19[1]);
      if ( *v22 == 45 )
      {
        v23 = v21 - 1;
        v24 = v22 + 1;
        if ( v21 != 1 )
        {
          if ( (int)(v21 - 1) <= 0 )
          {
LABEL_25:
            if ( v31 <= v20 )
            {
              v33 = 1;
              if ( v19[5] )
                v32 = *(_DWORD *)(v19[4] + v30 + 16) != 0;
            }
          }
          else
          {
            while ( (unsigned __int16)(*v24 - 48) <= LOWORD(String2.Buffer) )
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
  *a3 = v33;
  *a4 = v32;
  return v5;
}
