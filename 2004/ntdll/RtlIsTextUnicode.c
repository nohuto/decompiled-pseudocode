/*
 * XREFs of RtlIsTextUnicode @ 0x180064350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsTextUnicode(PVOID Buffer, ULONG Size, PULONG Result)
{
  ULONG v3; // r14d
  unsigned __int8 *v4; // r13
  int v5; // eax
  int v6; // ecx
  PULONG v7; // r9
  ULONG v8; // esi
  unsigned int v9; // r10d
  unsigned int v10; // r8d
  unsigned int v11; // r15d
  unsigned int v12; // ebx
  int v13; // r12d
  ULONG v14; // edx
  bool v15; // cc
  int v16; // ebp
  _WORD *v17; // r11
  __int64 v18; // rdi
  int v19; // r13d
  unsigned int v20; // r9d
  unsigned int v21; // r12d
  unsigned int v22; // r14d
  int v23; // r15d
  int v24; // esi
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // edi
  unsigned int v31; // r11d
  bool v32; // zf
  unsigned int v33; // r10d
  int v34; // ecx
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v42; // r8d
  __int16 v43; // dx
  unsigned int v44; // eax
  int v45; // eax
  unsigned __int64 v46; // rax
  unsigned int v47; // ecx
  int v48; // [rsp+0h] [rbp-98h]
  int v49; // [rsp+4h] [rbp-94h]
  unsigned int v50; // [rsp+8h] [rbp-90h]
  int v51; // [rsp+Ch] [rbp-8Ch]
  int v52; // [rsp+10h] [rbp-88h]
  int v53; // [rsp+14h] [rbp-84h]
  int v54; // [rsp+18h] [rbp-80h]
  int v55; // [rsp+1Ch] [rbp-7Ch]
  int v56; // [rsp+20h] [rbp-78h]
  int v57; // [rsp+24h] [rbp-74h]
  int v58; // [rsp+28h] [rbp-70h]
  int v59; // [rsp+2Ch] [rbp-6Ch]
  int v60; // [rsp+30h] [rbp-68h]
  int v61; // [rsp+34h] [rbp-64h]
  int v62; // [rsp+38h] [rbp-60h]
  ULONG v63; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v67; // [rsp+B8h] [rbp+20h]

  v3 = Size >> 1;
  v4 = (unsigned __int8 *)Buffer;
  v55 = 0;
  v54 = 0;
  v5 = 0;
  v53 = 0;
  v6 = 0;
  v51 = 0;
  v7 = Result;
  v52 = 0;
  v8 = Size;
  v62 = 0;
  v9 = 0;
  v61 = 0;
  v10 = 0;
  v48 = 0;
  v11 = 0;
  v58 = 0;
  v12 = 0;
  v56 = 0;
  v13 = 0;
  v57 = 0;
  v49 = 0;
  v59 = 0;
  v60 = 0;
  v67 = 0;
  v50 = 0;
  v63 = Size >> 1;
  if ( Size >> 1 > 0x100 )
  {
    v14 = 256;
  }
  else
  {
    v14 = Size >> 1;
    if ( !v3 )
      goto LABEL_98;
  }
  v15 = v8 <= 2;
  if ( v8 == 2 )
  {
    if ( !*(_WORD *)v4 )
      goto LABEL_10;
    if ( v4[1] )
    {
      v15 = 1;
      goto LABEL_4;
    }
LABEL_98:
    if ( v7 )
      *v7 = 5;
    return 0;
  }
LABEL_4:
  if ( !v15 && v3 <= 0x100 && (v8 & 1) == 0 )
  {
    if ( (*(_WORD *)&v4[2 * v14 - 2] & 0xFF00) == 0 )
      --v14;
    v6 = 0;
  }
LABEL_10:
  v16 = 3;
  if ( v14 )
  {
    v17 = v4;
    v18 = v14;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    do
    {
      v25 = (unsigned __int16)*v17;
      if ( v25 > 0xD00 )
      {
        if ( v25 == 0x2000 )
        {
          ++v57;
        }
        else if ( v25 != 8232 && v25 != 8233 )
        {
          if ( v25 == 12288 )
          {
            ++v52;
          }
          else if ( v25 != 65279 )
          {
            if ( v25 == 65534 )
            {
              ++v61;
            }
            else if ( v25 == 0xFFFF )
            {
              ++v62;
            }
          }
        }
      }
      else if ( v25 == 3328 )
      {
        v48 = v5 + 1;
      }
      else if ( *v17 )
      {
        switch ( v25 )
        {
          case 9u:
            ++v19;
            break;
          case 0xAu:
            ++v24;
            break;
          case 0xDu:
            ++v23;
            break;
          case 0x20u:
            ++v51;
            break;
          case 0x900u:
            ++v56;
            break;
          case 0xA00u:
            ++v58;
            break;
          case 0xA0Du:
            ++v60;
            break;
        }
      }
      else
      {
        ++v59;
      }
      v10 = *(unsigned __int8 *)v17;
      v26 = v25 >> 8;
      if ( (_BYTE)v10 == 13 && v9 == 10 || (_BYTE)v10 == 10 && v9 == 13 )
        ++v12;
      v6 = v49 + (v26 == 0) + ((_BYTE)v10 == 0);
      v27 = v26;
      v49 = v6;
      if ( v26 <= v9 )
      {
        v27 = v9;
        v9 = v26;
      }
      v28 = v27 - v9;
      v9 = v26;
      v22 += v28;
      v29 = *(unsigned __int8 *)v17;
      if ( v10 <= v20 )
      {
        v29 = v20;
        v20 = *(unsigned __int8 *)v17;
      }
      ++v17;
      v21 += v29 - v20;
      v20 = v10;
      v5 = v48;
      --v18;
    }
    while ( v18 );
    v7 = Result;
    v55 = v23;
    v11 = 0;
    v53 = v19;
    v4 = (unsigned __int8 *)Buffer;
    v54 = v24;
    v8 = Size;
    v67 = v22;
    v3 = v63;
    v50 = v21;
    v13 = 0;
  }
  if ( v9 == 10 && v10 == 13 || v10 == 10 && v9 == 13 )
    ++v12;
  v30 = v6 - 1;
  v31 = v12 + 1;
  if ( v9 )
    v30 = v6;
  v32 = v9 == 26;
  v33 = 512;
  if ( !v32 )
    v31 = v12;
  if ( v8 <= 0x200 )
    v33 = v8;
  if ( NlsMbCodePageTag )
  {
    v42 = 0;
    if ( v33 )
    {
      do
      {
        v43 = NlsLeadByteInfoTable[v4[v42]];
        v44 = v11 + 1;
        if ( !v43 )
          v44 = v11;
        v11 = v44;
        v45 = v42 + 1;
        if ( !v43 )
          v45 = v42;
        v42 = v45 + 1;
      }
      while ( v45 + 1 < v33 );
      v3 = v63;
    }
  }
  if ( v50 >= 0x7F )
  {
LABEL_41:
    if ( !v67 )
      goto LABEL_42;
    goto LABEL_89;
  }
  if ( !v67 )
  {
    v13 = 1;
    goto LABEL_41;
  }
LABEL_89:
  if ( !v50 )
    v13 |= 0x10u;
LABEL_42:
  if ( NlsMbCodePageTag && v11 && v7 && (*v7 & 0x400) != 0 )
  {
    v46 = 256LL;
    if ( v3 <= 0x100 )
      v46 = (unsigned __int64)v8 >> 1;
    v47 = (v46 >> 1) - 1;
    if ( v11 >= v47 / 3 )
      v16 = (v11 < 2 * v47 / 3) + 1;
    v13 |= 0x400u;
  }
  v34 = v13 | 2;
  if ( v16 * v67 >= v50 )
    v34 = v13;
  v35 = v34 | 0x20;
  if ( v16 * v50 >= v67 )
    v35 = v34;
  v36 = v35 | 4;
  if ( !(v55 + v54 + v53 + v52 + v51) )
    v36 = v35;
  v37 = v36 | 0x40;
  if ( !(v48 + v58 + v57 + v56) )
    v37 = v36;
  if ( v62 + v61 + v60 + v59 || (v38 = v37, v31) && v31 >= v33 / 0x28 )
    v38 = v37 | 0x100;
  v39 = v38 | 0x200;
  if ( (v8 & 1) == 0 )
    v39 = v38;
  v40 = v39 | 0x1000;
  if ( !v30 )
    v40 = v39;
  if ( *(_WORD *)v4 == 0xFEFF )
  {
    v40 |= 8u;
  }
  else if ( *(_WORD *)v4 == 0xFFFE )
  {
    v40 |= 0x80u;
  }
  if ( v7 )
  {
    *v7 &= v40;
    v40 = *v7;
  }
  return (v40 & 0xB08) == 8 || (v40 & 0xF0) == 0 && (v40 & 0xF00) == 0 && (v40 & 0xF00F) != 0;
}
