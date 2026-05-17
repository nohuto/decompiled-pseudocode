/*
 * XREFs of _RtlpComputeLangListCheckSum@4 @ 0x4B2D2774
 * Callers:
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlIntegerToUnicodeString@12 @ 0x4B2D2A70 (_RtlIntegerToUnicodeString@12.c)
 *     _RtlUpcaseUnicodeString@12 @ 0x4B2D2BD0 (_RtlUpcaseUnicodeString@12.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlCopyUnicodeString@8 @ 0x4B2D5EF0 (_RtlCopyUnicodeString@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __thiscall RtlpComputeLangListCheckSum(char *this)
{
  int inited; // ebx
  char *v2; // edi
  int v3; // esi
  int v4; // eax
  _WORD *v5; // edx
  int v6; // eax
  int v7; // edx
  _WORD *v8; // ecx
  __int16 v9; // ax
  unsigned __int16 *v10; // edi
  unsigned __int16 *v11; // ebx
  unsigned __int16 v12; // ax
  int v13; // edi
  unsigned __int8 *v14; // edx
  int v15; // ebx
  int v16; // eax
  int v17; // esi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  _BYTE v25[8]; // [esp+Ch] [ebp-104h] BYREF
  UNICODE_STRING DestinationString; // [esp+14h] [ebp-FCh] BYREF
  char *v27; // [esp+1Ch] [ebp-F4h]
  int v28; // [esp+20h] [ebp-F0h]
  int v29; // [esp+24h] [ebp-ECh]
  int i; // [esp+28h] [ebp-E8h]
  int v31; // [esp+2Ch] [ebp-E4h]
  int v32; // [esp+30h] [ebp-E0h]
  int v33; // [esp+34h] [ebp-DCh] BYREF
  unsigned __int8 *v34; // [esp+38h] [ebp-D8h]
  _WORD v35[14]; // [esp+3Ch] [ebp-D4h] BYREF
  _BYTE v36[180]; // [esp+58h] [ebp-B8h] BYREF

  inited = 0;
  v2 = this;
  v27 = this;
  v3 = 0;
  memset(v36, 0, 0xAAu);
  v33 = 0;
  v34 = 0;
  v31 = 0;
  if ( !v2 )
    return -1073741811;
  v32 = *((_DWORD *)v2 + 3);
  if ( !v32 )
    return -1073741811;
  v28 = 0;
  v4 = 0;
  if ( !*((_WORD *)v2 + 2) )
    goto LABEL_28;
  for ( i = 0; ; v4 = i )
  {
    v5 = (_WORD *)(v4 + *((_DWORD *)v2 + 4));
    memset(v35, 0, sizeof(v35));
    switch ( *v5 )
    {
      case 0:
        goto LABEL_17;
      case 1:
        v35[2] = v5[2];
        break;
      case 2:
        v6 = (__int16)v5[2];
        v7 = v32;
        v8 = (_WORD *)(*(_DWORD *)(*(_DWORD *)(v32 + 20) + 12) + 28 * v6);
        goto LABEL_9;
      case 3:
        v35[3] = v5[2];
        break;
      default:
        return -1073741595;
    }
    v7 = v32;
    v8 = v35;
LABEL_9:
    v9 = v8[3];
    if ( v9 <= 0 )
      break;
    inited = RtlInitUnicodeStringEx(
               (int)v25,
               (_WORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 16)
                       + 2 * *(__int16 *)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 12) + 2 * v9)));
    v31 = inited;
    if ( inited < 0 )
      return inited;
    v33 = 11141120;
    v34 = v36;
    RtlCopyUnicodeString(&v33, v25);
LABEL_12:
    if ( v3 )
    {
      RtlUpcaseUnicodeString(&v33, &v33, 0);
      v13 = (unsigned __int16)v33;
      v14 = v34;
      if ( (unsigned __int16)v33 >= 8u )
      {
        v29 = (unsigned __int16)v33 >> 3;
        v15 = v29;
        v13 = -8 * v29 + (unsigned __int16)v33;
        do
        {
          v16 = 442596621 * *v14;
          v17 = 37 * (v14[6] + 37 * (v14[5] + 37 * (v14[4] + 37 * (v14[3] + 37 * (v14[2] + 37 * v14[1])))))
              - 803794207 * v3
              + v14[7];
          v14 += 8;
          v3 = v16 + v17;
          --v15;
        }
        while ( v15 );
        inited = v31;
      }
      v19 = v13 - 1;
      if ( !v19 )
        goto LABEL_31;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_30;
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_45;
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_44;
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_43;
      v24 = v23 - 1;
      if ( !v24 )
        goto LABEL_42;
      if ( v24 == 1 )
      {
        v3 = *v14++ + 37 * v3;
LABEL_42:
        v3 = *v14++ + 37 * v3;
LABEL_43:
        v3 = *v14++ + 37 * v3;
LABEL_44:
        v3 = *v14++ + 37 * v3;
LABEL_45:
        v3 = *v14++ + 37 * v3;
LABEL_30:
        v3 = *v14++ + 37 * v3;
LABEL_31:
        v3 = *v14 + 37 * v3;
      }
    }
    else
    {
      v3 = 314159;
      v10 = (unsigned __int16 *)v34;
      if ( v34 < &v34[2 * ((unsigned __int16)v33 >> 1)] )
      {
        v11 = (unsigned __int16 *)&v34[2 * ((unsigned __int16)v33 >> 1)];
        do
        {
          v12 = NLS_UPCASE(*v10++);
          v3 = HIBYTE(v12) + 37 * ((unsigned __int8)v12 + 37 * v3);
        }
        while ( v10 < v11 );
        inited = v31;
      }
    }
LABEL_17:
    v2 = v27;
    i += 6;
    if ( ++v28 >= (unsigned int)*((unsigned __int16 *)v27 + 2) )
      goto LABEL_27;
  }
  v33 = 11141120;
  v34 = v36;
  if ( (unsigned __int8)RtlLCIDToCultureName((unsigned __int16)v8[2], &v33) )
    goto LABEL_12;
  v2 = v27;
  inited = -1073741595;
LABEL_27:
  if ( inited < 0 )
    return inited;
LABEL_28:
  DestinationString.Buffer = (wchar_t *)(v2 + 36);
  DestinationString.Length = 0;
  DestinationString.MaximumLength = 20;
  return RtlIntegerToUnicodeString(v3, 16, &DestinationString);
}
