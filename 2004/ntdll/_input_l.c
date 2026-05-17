/*
 * XREFs of _input_l @ 0x1800956F0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008C168 (_invalid_parameter.c)
 *     isleadbyte @ 0x18008FAB8 (isleadbyte.c)
 *     __pctype_func @ 0x180092530 (__pctype_func.c)
 *     ReadString @ 0x180095384 (ReadString.c)
 *     ReadStringDelimited @ 0x18009554C (ReadStringDelimited.c)
 *     _inc @ 0x1800956BC (_inc.c)
 *     _ungetc_nolock @ 0x18009618C (_ungetc_nolock.c)
 */

__int64 __fastcall input_l(FILE *Stream, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned __int8 *v5; // rsi
  FILE *v6; // r14
  unsigned __int8 v7; // bl
  int v8; // r15d
  __int64 result; // rax
  unsigned int v10; // r12d
  int v11; // ebx
  __int64 v12; // rbx
  int v13; // edi
  int v14; // r15d
  char v15; // r14
  char v16; // r13
  __int64 v17; // rbx
  unsigned __int8 *v18; // rax
  char v19; // r9
  __int64 v20; // rcx
  __int64 *v21; // rax
  char v22; // bl
  unsigned int v23; // r14d
  int v24; // edx
  int v25; // r8d
  int v26; // ecx
  int v27; // eax
  char v28; // cl
  int v29; // eax
  FILE *v30; // r13
  FILE *v31; // r13
  __int64 v32; // rbx
  __int64 v33; // rbx
  int v34; // ebx
  const unsigned __int16 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // ecx
  int v39; // ebx
  const unsigned __int16 *v40; // rax
  __int64 v41; // rcx
  char v42; // dl
  int v43; // ecx
  char v44; // al
  char v45; // dl
  char v46; // cl
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  FILE *v51; // rdx
  char v52; // [rsp+48h] [rbp-39h]
  char v53; // [rsp+49h] [rbp-38h]
  char v54; // [rsp+4Ah] [rbp-37h]
  char v55; // [rsp+4Bh] [rbp-36h]
  int v56; // [rsp+4Ch] [rbp-35h] BYREF
  int v57; // [rsp+50h] [rbp-31h] BYREF
  int v58; // [rsp+54h] [rbp-2Dh]
  int v59; // [rsp+58h] [rbp-29h]
  int Character; // [rsp+5Ch] [rbp-25h]
  int v61; // [rsp+60h] [rbp-21h]
  int v62; // [rsp+64h] [rbp-1Dh]
  int v63; // [rsp+68h] [rbp-19h]
  int v64; // [rsp+6Ch] [rbp-15h]
  __int64 v65; // [rsp+70h] [rbp-11h] BYREF
  __int64 v66; // [rsp+78h] [rbp-9h]
  __int64 *v67; // [rsp+80h] [rbp-1h]
  unsigned int v68; // [rsp+88h] [rbp+7h]
  __int64 v69; // [rsp+90h] [rbp+Fh]
  char SrcCh[8]; // [rsp+98h] [rbp+17h] BYREF
  unsigned __int8 *v72; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v73; // [rsp+100h] [rbp+7Fh]

  v73 = a4;
  v4 = 0;
  v5 = a2;
  v69 = 0LL;
  v6 = Stream;
  Character = 0;
  v57 = 0;
  if ( !a2 || !Stream )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v7 = *a2;
  v8 = 0;
  result = 0LL;
  v54 = 0;
  v58 = 0;
  v56 = 0;
  LODWORD(v65) = 0;
  if ( !v7 )
    return result;
  v10 = -1;
  while ( 2 )
  {
    if ( (_pctype_func()[v7] & 8) != 0 )
    {
      --v8;
      while ( 1 )
      {
        v58 = ++v8;
        v56 = v8;
        v11 = inc(v6);
        if ( v11 == -1 )
          break;
        if ( (_pctype_func()[(unsigned __int8)v11] & 8) == 0 )
        {
          ungetc_nolock(v11, v6);
          goto LABEL_10;
        }
      }
      do
LABEL_10:
        v12 = *++v5;
      while ( (_pctype_func()[v12] & 8) != 0 );
      goto LABEL_190;
    }
    if ( *v5 != 37 )
      goto LABEL_184;
    if ( v5[1] == 37 )
    {
      if ( *v5 == 37 && v5[1] == 37 )
        ++v5;
LABEL_184:
      v58 = ++v8;
      v56 = v8;
      v4 = inc(v6);
      Character = v4;
      v57 = v4;
      v48 = *v5++;
      if ( v48 == v4 )
      {
        if ( !isleadbyte((unsigned __int8)v4) )
          goto LABEL_187;
        v49 = inc(v6);
        v50 = *v5++;
        if ( v50 == v49 )
          goto LABEL_187;
        if ( v49 != -1 )
          ungetc_nolock(v49, v6);
      }
      if ( v4 == -1 )
        goto LABEL_200;
      v51 = v6;
      goto LABEL_198;
    }
    v62 = 0;
    v13 = 0;
    v64 = 0;
    v14 = 0;
    v55 = 0;
    v15 = 0;
    v52 = 0;
    v16 = 0;
    v53 = 1;
    v59 = 0;
    do
    {
      v72 = ++v5;
      v17 = *v5;
      v18 = (unsigned __int8 *)_pctype_func();
      if ( (v18[2 * v17] & 4) != 0 )
      {
        ++v13;
        v14 = v17 + 2 * (5 * v14 - 24);
        goto LABEL_44;
      }
      if ( (unsigned __int8)v17 > 0x68u )
      {
        if ( (_BYTE)v17 == 106 )
          goto LABEL_29;
        if ( (_BYTE)v17 == 108 )
        {
          if ( v5[1] != 108 )
          {
            ++v53;
LABEL_51:
            ++v16;
            goto LABEL_44;
          }
          v72 = ++v5;
          goto LABEL_29;
        }
        if ( (_BYTE)v17 != 116 )
        {
          if ( (_BYTE)v17 == 119 )
            goto LABEL_51;
          if ( (_BYTE)v17 != 122 )
            goto LABEL_43;
        }
        goto LABEL_40;
      }
      if ( (_BYTE)v17 == 104 )
      {
        --v53;
        --v16;
        goto LABEL_44;
      }
      if ( (_BYTE)v17 == 42 )
      {
        v19 = ++v52;
        continue;
      }
      if ( (_BYTE)v17 != 70 )
      {
        if ( (_BYTE)v17 != 73 )
        {
          if ( (_BYTE)v17 == 76 )
          {
            ++v53;
          }
          else if ( (_BYTE)v17 != 78 )
          {
            goto LABEL_43;
          }
          goto LABEL_44;
        }
        if ( v5[1] == 54 )
        {
          v18 = v5 + 2;
          if ( v5[2] == 52 )
          {
            v5 += 2;
            v72 = v18;
LABEL_29:
            ++v59;
            v66 = 0LL;
            goto LABEL_44;
          }
        }
        if ( v5[1] == 51 )
        {
          v18 = v5 + 2;
          if ( v5[2] == 50 )
          {
            v5 += 2;
            v72 = v18;
            goto LABEL_44;
          }
        }
LABEL_40:
        LOBYTE(v18) = v5[1] - 88;
        if ( (unsigned __int8)v18 > 0x20u || (v20 = 0x120821001LL, !_bittest64(&v20, (unsigned __int64)v18)) )
        {
          ++v59;
          v66 = 0LL;
LABEL_43:
          ++v15;
          goto LABEL_44;
        }
        goto LABEL_29;
      }
LABEL_44:
      v19 = v52;
    }
    while ( !v15 );
    v63 = v13;
    v4 = Character;
    v61 = v14;
    v8 = v58;
    if ( v19 )
    {
      v21 = 0LL;
    }
    else
    {
      v69 = v73;
      v73 += 8LL;
      v21 = *(__int64 **)(v73 - 8);
    }
    v22 = 0;
    v67 = v21;
    *(_QWORD *)SrcCh = v21;
    if ( !v16 )
      v16 = ((*v5 - 67) & 0xEF) != 0 ? -1 : 1;
    v23 = *v5 | 0x20;
    v68 = v23;
    if ( v23 != 110 )
    {
      if ( v23 == 99 || v23 == 123 )
      {
        v8 = v58 + 1;
        v58 = v8;
        v56 = v8;
        v4 = inc(Stream);
        Character = v4;
        v57 = v4;
      }
      else
      {
        do
        {
          v56 = ++v8;
          v4 = inc(Stream);
          Character = v4;
        }
        while ( v4 != -1 && (_pctype_func()[(unsigned __int8)v4] & 8) != 0 );
        v23 = v68;
        v58 = v8;
        v57 = v4;
      }
      if ( v4 == -1 )
        goto LABEL_200;
      v19 = v52;
    }
    v24 = v63;
    v25 = v61;
    if ( v63 && !v61 )
      goto LABEL_192;
    if ( v23 > 0x70 )
    {
      if ( v23 == 115 )
      {
        v28 = 32;
        goto LABEL_169;
      }
      if ( v23 != 117 )
      {
        if ( v23 == 120 )
          goto LABEL_78;
        if ( v23 != 123 )
          goto LABEL_90;
        v28 = 64;
        goto LABEL_169;
      }
    }
    else
    {
      if ( v23 != 112 )
      {
        if ( v23 != 99 )
        {
          if ( v23 == 100 )
            break;
          if ( v23 != 105 )
          {
            if ( v23 != 110 )
            {
              if ( v23 == 111 )
                break;
LABEL_90:
              if ( *v5 == v4 )
              {
                --v54;
                if ( !v19 )
                  v73 = v69;
                goto LABEL_180;
              }
LABEL_192:
              if ( v4 == -1 )
                goto LABEL_200;
              v51 = Stream;
LABEL_198:
              ungetc_nolock(v4, v51);
              goto LABEL_199;
            }
            v26 = v8;
            if ( !v19 )
            {
LABEL_163:
              if ( v59 )
              {
                *v67 = v66;
              }
              else if ( v53 )
              {
                *(_DWORD *)v67 = v26;
              }
              else
              {
                *(_WORD *)v67 = v26;
              }
            }
LABEL_180:
            ++v54;
            v6 = Stream;
            ++v5;
LABEL_187:
            if ( v4 == -1 && (*v5 != 37 || v5[1] != 110) )
              goto LABEL_200;
LABEL_190:
            v7 = *v5;
            if ( !*v5 )
              goto LABEL_199;
            continue;
          }
          v23 = 100;
LABEL_78:
          switch ( v4 )
          {
            case '-':
              v55 = 1;
LABEL_95:
              --v61;
              if ( v25 == 1 && v63 )
              {
                v22 = 1;
                goto LABEL_98;
              }
              v30 = Stream;
              v58 = ++v8;
              v56 = v8;
              v4 = inc(Stream);
              Character = v4;
              v57 = v4;
              break;
            case '+':
              goto LABEL_95;
            case '0':
              v58 = ++v8;
              v56 = v8;
              v4 = inc(v30);
              Character = v4;
              v57 = v4;
              if ( (((_BYTE)v4 - 88) & 0xDF) != 0 )
              {
                v64 = 1;
                if ( v23 == 120 )
                {
                  v58 = --v8;
                  v56 = v8;
                  if ( v4 != -1 )
                    ungetc_nolock(v4, v30);
                  v4 = 48;
                  Character = 48;
                  v57 = 48;
                }
                else
                {
                  if ( v63 )
                  {
                    if ( !--v61 )
                      ++v22;
                  }
                  v23 = 111;
                }
              }
              else
              {
                v58 = ++v8;
                v56 = v8;
                v4 = inc(v30);
                Character = v4;
                v57 = v4;
                if ( v63 )
                {
                  v61 -= 2;
                  if ( v61 < 1 )
                    ++v22;
                }
                v23 = 120;
              }
              break;
            default:
LABEL_98:
              v30 = Stream;
              break;
          }
LABEL_106:
          v31 = Stream;
          goto LABEL_107;
        }
        v27 = v61 + 1;
        v28 = 16;
        if ( v63 )
          v27 = v61;
        v25 = v27;
        v29 = 1;
        if ( v63 )
          v29 = v63;
        v24 = v29;
LABEL_169:
        v44 = v28 | 1;
        if ( !v24 )
          v44 = v28;
        v45 = v44 | 2;
        if ( v16 <= 0 )
          v45 = v44;
        v46 = v45 | 4;
        if ( !v19 )
          v46 = v45;
        if ( v23 == 123 )
        {
          v47 = ReadStringDelimited(v46, &v72, &v57, &v56, SrcCh, v25, Stream, &v65);
          v5 = v72;
        }
        else
        {
          v47 = ReadString(v46, 0LL, &v57, &v56, SrcCh, v25, Stream, &v65);
        }
        v4 = v57;
        if ( !v47 )
        {
          v8 = v56;
          v58 = v56;
          Character = v57;
          goto LABEL_180;
        }
        goto LABEL_199;
      }
      ++v59;
      v66 = 0LL;
      v53 = 1;
    }
    break;
  }
  if ( v4 == 45 )
  {
    v55 = 1;
  }
  else if ( v4 != 43 )
  {
    goto LABEL_106;
  }
  --v61;
  if ( v25 == 1 && v63 )
  {
    v22 = 1;
    goto LABEL_106;
  }
  v31 = Stream;
  v58 = ++v8;
  v56 = v8;
  v4 = inc(Stream);
  Character = v4;
  v57 = v4;
LABEL_107:
  if ( !v59 )
  {
    if ( !v22 )
    {
      while ( 1 )
      {
        if ( ((v23 - 112) & 0xFFFFFFF7) != 0 )
        {
          if ( (_pctype_func()[(unsigned __int8)v4] & 4) == 0 )
            goto LABEL_155;
          if ( v23 == 111 )
          {
            if ( v4 >= 56 )
              goto LABEL_155;
            v38 = 8 * v62;
          }
          else
          {
            v38 = 10 * v62;
          }
        }
        else
        {
          if ( SLOBYTE(_pctype_func()[(unsigned __int8)v4]) >= 0 )
          {
LABEL_155:
            v58 = --v8;
            v56 = v8;
            if ( v4 != -1 )
              ungetc_nolock(v4, v31);
            break;
          }
          v62 *= 16;
          v39 = (char)v4;
          v40 = _pctype_func();
          v41 = (unsigned __int8)v4;
          v4 = ((char)v4 & 0xFFFFFFDF) - 7;
          v42 = v40[v41];
          v38 = v62;
          if ( (v42 & 4) != 0 )
            v4 = v39;
          Character = v4;
          v57 = v4;
        }
        ++v64;
        v43 = v4 + v38 - 48;
        v62 = v43;
        if ( v63 )
        {
          if ( !--v61 )
            goto LABEL_158;
        }
        v58 = ++v8;
        v56 = v8;
        v4 = inc(v31);
        Character = v4;
        v57 = v4;
      }
    }
    v43 = v62;
LABEL_158:
    if ( v55 )
      v62 = -v43;
    goto LABEL_160;
  }
  if ( v22 )
    goto LABEL_138;
  v32 = v66;
  while ( 2 )
  {
    if ( ((v23 - 112) & 0xFFFFFFF7) != 0 )
    {
      if ( (_pctype_func()[(unsigned __int8)v4] & 4) == 0 )
        break;
      if ( v23 == 111 )
      {
        if ( v4 >= 56 )
          break;
        v33 = 8 * v32;
      }
      else
      {
        v33 = 10 * v32;
      }
      goto LABEL_133;
    }
    if ( SLOBYTE(_pctype_func()[(unsigned __int8)v4]) < 0 )
    {
      v66 = 16 * v32;
      v34 = (char)v4;
      v35 = _pctype_func();
      v36 = (unsigned __int8)v4;
      v4 = ((char)v4 & 0xFFFFFFDF) - 7;
      if ( (v35[v36] & 4) != 0 )
        v4 = v34;
      v33 = v66;
      Character = v4;
      v57 = v4;
LABEL_133:
      ++v64;
      v32 = v4 - 48 + v33;
      v66 = v32;
      if ( v63 )
      {
        if ( !--v61 )
          goto LABEL_138;
      }
      v58 = ++v8;
      v56 = v8;
      v4 = inc(v31);
      Character = v4;
      v57 = v4;
      continue;
    }
    break;
  }
  v58 = --v8;
  v56 = v8;
  if ( v4 != -1 )
    ungetc_nolock(v4, v31);
LABEL_138:
  v37 = -v66;
  if ( !v55 )
    v37 = v66;
  v66 = v37;
LABEL_160:
  if ( v64 )
  {
    if ( !v52 )
    {
      LODWORD(v65) = v65 + 1;
      v26 = v62;
      goto LABEL_163;
    }
    goto LABEL_180;
  }
LABEL_199:
  if ( v4 != -1 )
    return (unsigned int)v65;
LABEL_200:
  if ( (_DWORD)v65 || v54 )
    return (unsigned int)v65;
  return v10;
}
