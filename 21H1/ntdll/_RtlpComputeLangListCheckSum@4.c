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

NTSTATUS __thiscall RtlpComputeLangListCheckSum(char *this)
{
  NTSTATUS inited; // ebx
  char *v2; // edi
  ULONG v3; // esi
  int v4; // eax
  _WORD *v5; // edx
  int v6; // eax
  int v7; // edx
  _WORD *v8; // ecx
  __int16 v9; // ax
  unsigned __int16 *v10; // edi
  wchar_t *v11; // ebx
  unsigned __int16 v12; // ax
  int Length; // edi
  unsigned __int8 *Buffer; // edx
  int v15; // ebx
  int v16; // eax
  int v17; // esi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  size_t v25; // [esp-4h] [ebp-114h]
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-104h] BYREF
  _UNICODE_STRING v27; // [esp+14h] [ebp-FCh] BYREF
  char *v28; // [esp+1Ch] [ebp-F4h]
  int v29; // [esp+20h] [ebp-F0h]
  int v30; // [esp+24h] [ebp-ECh]
  int i; // [esp+28h] [ebp-E8h]
  NTSTATUS v32; // [esp+2Ch] [ebp-E4h]
  int v33; // [esp+30h] [ebp-E0h]
  _UNICODE_STRING String; // [esp+34h] [ebp-DCh] BYREF
  _WORD v35[14]; // [esp+3Ch] [ebp-D4h] BYREF
  _BYTE v36[180]; // [esp+58h] [ebp-B8h] BYREF

  inited = 0;
  LODWORD(v25) = 170;
  v2 = this;
  v28 = this;
  v3 = 0;
  memset(v36, 0, v25);
  *(_DWORD *)&String.Length = 0;
  String.Buffer = 0;
  v32 = 0;
  if ( !v2 )
    return -1073741811;
  v33 = *((_DWORD *)v2 + 3);
  if ( !v33 )
    return -1073741811;
  v29 = 0;
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
        v7 = v33;
        v8 = (_WORD *)(*(_DWORD *)(*(_DWORD *)(v33 + 20) + 12) + 28 * v6);
        goto LABEL_9;
      case 3:
        v35[3] = v5[2];
        break;
      default:
        return -1073741595;
    }
    v7 = v33;
    v8 = v35;
LABEL_9:
    v9 = v8[3];
    if ( v9 <= 0 )
      break;
    inited = RtlInitUnicodeStringEx(
               &DestinationString,
               (PCWSTR)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 16)
                      + 2 * *(__int16 *)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 12) + 2 * v9)));
    v32 = inited;
    if ( inited < 0 )
      return inited;
    *(_DWORD *)&String.Length = 11141120;
    String.Buffer = (wchar_t *)v36;
    RtlCopyUnicodeString(&String, &DestinationString);
LABEL_12:
    if ( v3 )
    {
      RtlUpcaseUnicodeString(&String, &String, 0);
      Length = String.Length;
      Buffer = (unsigned __int8 *)String.Buffer;
      if ( String.Length >= 8u )
      {
        v30 = String.Length >> 3;
        v15 = v30;
        Length = -8 * v30 + String.Length;
        do
        {
          v16 = 442596621 * *Buffer;
          v17 = 37
              * (Buffer[6] + 37 * (Buffer[5] + 37 * (Buffer[4] + 37 * (Buffer[3] + 37 * (Buffer[2] + 37 * Buffer[1])))))
              - 803794207 * v3
              + Buffer[7];
          Buffer += 8;
          v3 = v16 + v17;
          --v15;
        }
        while ( v15 );
        inited = v32;
      }
      v19 = Length - 1;
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
        v3 = *Buffer++ + 37 * v3;
LABEL_42:
        v3 = *Buffer++ + 37 * v3;
LABEL_43:
        v3 = *Buffer++ + 37 * v3;
LABEL_44:
        v3 = *Buffer++ + 37 * v3;
LABEL_45:
        v3 = *Buffer++ + 37 * v3;
LABEL_30:
        v3 = *Buffer++ + 37 * v3;
LABEL_31:
        v3 = *Buffer + 37 * v3;
      }
    }
    else
    {
      v3 = 314159;
      v10 = String.Buffer;
      if ( String.Buffer < &String.Buffer[String.Length >> 1] )
      {
        v11 = &String.Buffer[String.Length >> 1];
        do
        {
          v12 = NLS_UPCASE(*v10++);
          v3 = HIBYTE(v12) + 37 * ((unsigned __int8)v12 + 37 * v3);
        }
        while ( v10 < v11 );
        inited = v32;
      }
    }
LABEL_17:
    v2 = v28;
    i += 6;
    if ( ++v29 >= (unsigned int)*((unsigned __int16 *)v28 + 2) )
      goto LABEL_27;
  }
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = (wchar_t *)v36;
  if ( RtlLCIDToCultureName((unsigned __int16)v8[2], &String) )
    goto LABEL_12;
  v2 = v28;
  inited = -1073741595;
LABEL_27:
  if ( inited < 0 )
    return inited;
LABEL_28:
  v27.Buffer = (wchar_t *)(v2 + 36);
  v27.Length = 0;
  v27.MaximumLength = 20;
  return RtlIntegerToUnicodeString(v3, 0x10u, &v27);
}
