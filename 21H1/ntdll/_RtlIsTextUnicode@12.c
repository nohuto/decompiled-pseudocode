/*
 * XREFs of _RtlIsTextUnicode@12 @ 0x4B2DC5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsTextUnicode(PVOID Buffer, ULONG Size, PULONG Result)
{
  int v3; // ecx
  unsigned int v4; // ebx
  ULONG v5; // edi
  unsigned int v6; // edx
  ULONG v7; // esi
  _WORD *v8; // eax
  ULONG v9; // edi
  unsigned __int16 v10; // cx
  unsigned int v11; // esi
  unsigned __int8 v12; // bl
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  ULONG v17; // edi
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // ecx
  unsigned int v21; // edx
  ULONG v22; // ecx
  ULONG v24; // edx
  ULONG v25; // ecx
  unsigned int v26; // ecx
  ULONG v27; // [esp+10h] [ebp-5Ch]
  unsigned int v28; // [esp+14h] [ebp-58h]
  int v29; // [esp+18h] [ebp-54h]
  int v30; // [esp+1Ch] [ebp-50h]
  int v31; // [esp+20h] [ebp-4Ch]
  int v32; // [esp+24h] [ebp-48h]
  int v33; // [esp+28h] [ebp-44h]
  int v34; // [esp+2Ch] [ebp-40h]
  int v35; // [esp+30h] [ebp-3Ch]
  int v36; // [esp+34h] [ebp-38h]
  int v37; // [esp+38h] [ebp-34h]
  int v38; // [esp+3Ch] [ebp-30h]
  int v39; // [esp+40h] [ebp-2Ch]
  int v40; // [esp+44h] [ebp-28h]
  int v41; // [esp+48h] [ebp-24h]
  ULONG v42; // [esp+4Ch] [ebp-20h]
  unsigned int v43; // [esp+50h] [ebp-1Ch]
  __int16 v44; // [esp+54h] [ebp-18h]
  int v45; // [esp+58h] [ebp-14h]
  unsigned int v46; // [esp+5Ch] [ebp-10h]
  unsigned int v47; // [esp+60h] [ebp-Ch]
  int v48; // [esp+64h] [ebp-8h]
  unsigned int v49; // [esp+68h] [ebp-4h]

  v3 = 0;
  v37 = 0;
  v28 = 0;
  v4 = 0;
  v38 = 0;
  v5 = Size >> 1;
  v6 = 0;
  v39 = 0;
  v41 = 0;
  v40 = 0;
  v29 = 0;
  v30 = 0;
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v35 = 0;
  v45 = 0;
  v32 = 0;
  v31 = 0;
  v47 = 0;
  v43 = 0;
  v46 = 0;
  v49 = 0;
  v48 = 0;
  if ( Size >> 1 > 0x100 )
  {
    v7 = 256;
    v42 = 256;
  }
  else
  {
    v7 = Size >> 1;
    v42 = Size >> 1;
    if ( !v5 )
      goto LABEL_101;
  }
  if ( Size == 2 )
  {
    if ( !*(_WORD *)Buffer || HIBYTE(*(_WORD *)Buffer) )
      goto LABEL_88;
LABEL_101:
    if ( Result )
      *Result = 5;
    return 0;
  }
  if ( Size <= 2 || v5 > 0x100 || (Size & 1) != 0 )
  {
LABEL_88:
    v8 = Buffer;
    goto LABEL_9;
  }
  v8 = Buffer;
  if ( (*((_WORD *)Buffer + v7 - 1) & 0xFF00) == 0 )
    v42 = --v7;
LABEL_9:
  v9 = 0;
  v27 = 0;
  if ( !v7 )
  {
LABEL_28:
    v45 = v3 - 1;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v10 = v8[v9];
    if ( v10 >= 0x900u || v10 < 0x21u )
    {
      if ( v10 <= 0xD00u )
      {
        if ( v10 == 3328 )
        {
          ++v33;
        }
        else if ( v10 > 0x20u )
        {
          switch ( v10 )
          {
            case 0x900u:
              ++v36;
              break;
            case 0xA00u:
              ++v34;
              break;
            case 0xA0Du:
              ++v31;
              break;
          }
        }
        else if ( v10 == 32 )
        {
          ++v41;
        }
        else
        {
          switch ( v10 )
          {
            case 0u:
              ++v32;
              break;
            case 9u:
              ++v39;
              break;
            case 0xAu:
              ++v38;
              break;
            case 0xDu:
              ++v37;
              break;
            default:
              break;
          }
        }
      }
      else if ( v10 <= 0x3000u )
      {
        if ( v10 == 12288 )
        {
          ++v40;
        }
        else if ( v10 == 0x2000 )
        {
          ++v35;
        }
      }
      else if ( v10 != 65279 )
      {
        if ( v10 == 65534 )
        {
          ++v30;
        }
        else if ( v10 == 0xFFFF )
        {
          ++v29;
        }
      }
    }
    v44 = HIBYTE(v10);
    v11 = HIBYTE(v10);
    v12 = *((_BYTE *)Buffer + 2 * v9);
    if ( v12 == 13 )
    {
      if ( v6 == 10 )
        ++v49;
    }
    else if ( v12 == 10 && v6 == 13 )
    {
      ++v49;
    }
    v45 += (v12 == 0) + (v44 == 0);
    if ( v11 > v6 )
      v13 = HIBYTE(v10);
    else
      v13 = v6;
    if ( v11 <= v6 )
      v6 = HIBYTE(v10);
    v14 = v28;
    v47 += v13 - v6;
    v15 = v12;
    if ( v12 <= v28 )
    {
      v15 = v28;
      v14 = v12;
    }
    v28 = v12;
    v6 = v11;
    v43 += v15 - v14;
    v9 = v27 + 1;
    v27 = v9;
    if ( v9 >= v42 )
      break;
    v8 = Buffer;
  }
  if ( v12 != 13 )
  {
    if ( v44 == 13 && v12 == 10 )
      goto LABEL_104;
LABEL_25:
    v16 = v49;
    goto LABEL_26;
  }
  if ( v44 != 10 )
    goto LABEL_25;
LABEL_104:
  v16 = ++v49;
LABEL_26:
  v4 = v47;
  if ( !v44 )
  {
    v3 = v45;
    goto LABEL_28;
  }
  if ( v44 == 26 )
    v49 = v16 + 1;
LABEL_29:
  if ( Size > 0x200 )
    v17 = 512;
  else
    v17 = Size;
  if ( NlsMbCodePageTag && (v24 = 0, v17) )
  {
    do
    {
      v18 = v46;
      if ( NlsLeadByteInfoTable[*((unsigned __int8 *)Buffer + v24)] )
      {
        v18 = v46 + 1;
        ++v24;
        ++v46;
      }
      ++v24;
    }
    while ( v24 < v17 );
    v4 = v47;
  }
  else
  {
    v18 = 0;
  }
  v19 = v43;
  if ( v43 < 0x7F )
  {
    if ( !v4 )
    {
      v48 = 1;
      goto LABEL_37;
    }
  }
  else if ( !v4 )
  {
    goto LABEL_37;
  }
  if ( !v43 )
    v48 = 16;
LABEL_37:
  if ( NlsMbCodePageTag && v18 && Result && (*Result & 0x400) != 0 )
  {
    v25 = Size >> 1;
    if ( Size >> 1 > 0x100 )
      v25 = 256;
    v26 = (v25 >> 1) - 1;
    if ( v46 >= v26 / 3 )
      v20 = (v46 < 2 * v26 / 3) + 1;
    else
      v20 = 3;
    v48 |= 0x400u;
    v19 = v43;
  }
  else
  {
    v20 = 3;
  }
  if ( v20 * v4 < v19 )
    v48 |= 2u;
  v21 = v20 * v19;
  v22 = v48;
  if ( v21 < v4 )
    v22 = v48 | 0x20;
  if ( v37 + v38 + v39 + v40 + v41 )
    v22 |= 4u;
  if ( v33 + v34 + v35 + v36 )
    v22 |= 0x40u;
  if ( v29 + v30 + v31 + v32 || v49 && v49 >= v17 / 0x28 )
    v22 |= 0x100u;
  if ( (Size & 1) != 0 )
    v22 |= 0x200u;
  if ( v45 )
    v22 |= 0x1000u;
  if ( *(_WORD *)Buffer == 0xFEFF )
  {
    v22 |= 8u;
  }
  else if ( *(_WORD *)Buffer == 0xFFFE )
  {
    v22 |= 0x80u;
  }
  if ( Result )
  {
    *Result &= v22;
    v22 = *Result;
  }
  return (v22 & 0xB08) == 8 || (v22 & 0xF0) == 0 && (v22 & 0xF00) == 0 && (v22 & 0xF00F) != 0;
}
