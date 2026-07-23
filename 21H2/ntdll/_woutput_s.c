/*
 * XREFs of _woutput_s @ 0x18009A0DC
 * Callers:
 *     _swoutput_s @ 0x180099FAC (_swoutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008C868 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     _safecrt_mbtowc @ 0x180098EE8 (_safecrt_mbtowc.c)
 *     write_char_2 @ 0x18009AA08 (write_char_2.c)
 *     write_string_2 @ 0x18009AA5C (write_string_2.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

__int64 __fastcall woutput_s(__int64 a1, unsigned __int16 *a2, int *a3)
{
  int v5; // edi
  int v6; // r14d
  WCHAR *v7; // rbx
  __int64 v8; // r11
  int v9; // r10d
  unsigned __int16 v10; // r9
  int v11; // esi
  __int64 v12; // r12
  int v13; // r8d
  int v14; // edx
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  unsigned __int16 *v17; // rcx
  unsigned int v18; // eax
  WCHAR v19; // ax
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  const char *v23; // rax
  const wchar_t *v24; // rax
  unsigned __int64 v25; // r8
  char v26; // r11
  char *v27; // rbx
  int v28; // r9d
  int v29; // ecx
  unsigned __int64 v30; // rdx
  char v31; // al
  __int16 v32; // ax
  unsigned int v33; // r11d
  __int64 v34; // rdx
  int v35; // r14d
  unsigned int v36; // r11d
  int v37; // r10d
  __int64 v38; // rdx
  int v39; // r10d
  UCHAR *v40; // r15
  int v41; // esi
  int v42; // eax
  __int64 v43; // r10
  bool i; // zf
  unsigned __int16 v46; // cx
  int v47; // eax
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // eax
  int v51; // ecx
  int v52; // [rsp+30h] [rbp-D0h] BYREF
  int v53; // [rsp+34h] [rbp-CCh]
  int v54; // [rsp+38h] [rbp-C8h]
  int v55; // [rsp+3Ch] [rbp-C4h]
  WCHAR v56[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v57; // [rsp+44h] [rbp-BCh]
  UCHAR v58[4]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v59[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v60; // [rsp+50h] [rbp-B0h]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  int v62; // [rsp+60h] [rbp-A0h]
  int v63; // [rsp+64h] [rbp-9Ch]
  int v64; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v65; // [rsp+70h] [rbp-90h]
  WCHAR v66[512]; // [rsp+80h] [rbp-80h] BYREF

  v61 = a1;
  v62 = 0;
  v5 = 0;
  v60 = 0;
  v6 = 0;
  v54 = 0;
  v7 = 0LL;
  v53 = 0;
  v63 = 0;
  memset(v66, 0, sizeof(v66));
  v8 = v61;
  v9 = 0;
  v56[0] = 0;
  v57 = 0;
  if ( !v61 || !a2 )
    goto LABEL_199;
  v10 = *a2;
  v11 = 0;
  v52 = 0;
  LODWORD(v12) = 0;
  v13 = 0;
  if ( !v10 )
    return (unsigned int)v11;
  do
  {
    v65 = ++a2;
    if ( v11 < 0 )
      break;
    if ( (unsigned __int16)(v10 - 32) > 0x5Au )
      v14 = v9;
    else
      v14 = _lookuptable_s[v10 - 32] & 0xF;
    v13 = _lookuptable_s[v14 + v13 + 8 * v14] >> 4;
    v55 = v13;
    switch ( v13 )
    {
      case 8:
        goto LABEL_199;
      case 0:
        goto LABEL_175;
      case 1:
        v6 = -1;
        v63 = v9;
        v54 = -1;
        v5 = v9;
        v60 = v9;
        v53 = v9;
        v57 = v9;
        break;
      case 2:
        switch ( v10 )
        {
          case ' ':
            v5 |= 2u;
            break;
          case '#':
            v5 |= 0x80u;
            break;
          case '+':
            v5 |= 1u;
            break;
          case '-':
            v5 |= 4u;
            break;
          case '0':
            v5 |= 8u;
            break;
        }
        break;
      case 3:
        if ( v10 == 42 )
        {
          v50 = *a3;
          a3 += 2;
          v51 = v5 | 4;
          if ( v50 >= 0 )
            v51 = v5;
          v5 = v51;
          v60 = abs32(v50);
          v9 = 0;
        }
        else
        {
          v60 = v10 + 2 * (5 * v60 - 24);
        }
        break;
      case 4:
        v6 = v9;
        v54 = v9;
        break;
      case 5:
        if ( v10 == 42 )
        {
          v6 = *a3;
          a3 += 2;
          v54 = v6;
          if ( v6 < 0 )
          {
            v6 = -1;
            v54 = -1;
          }
        }
        else
        {
          v6 = v10 + 2 * (5 * v6 - 24);
          v54 = v6;
        }
        break;
      case 6:
        switch ( v10 )
        {
          case 'I':
            goto LABEL_157;
          case 'h':
            v5 |= 0x20u;
            goto LABEL_146;
          case 'j':
            goto LABEL_157;
          case 'l':
            v46 = *a2;
            if ( *a2 == 108 )
              ++a2;
            v47 = 4096;
            if ( v46 != 108 )
              v47 = 16;
            v5 |= v47;
            goto LABEL_146;
          case 't':
            goto LABEL_157;
          case 'w':
            v5 |= 0x800u;
            goto LABEL_146;
          case 'z':
LABEL_157:
            v5 |= 0x8000u;
            if ( v10 == 73 )
            {
              if ( *a2 == 54 && a2[1] == 52 )
              {
                a2 += 2;
                goto LABEL_146;
              }
              if ( *a2 == 51 && a2[1] == 50 )
              {
                a2 += 2;
                v5 &= ~0x8000u;
                goto LABEL_146;
              }
            }
            else if ( v10 == 106 )
            {
              goto LABEL_146;
            }
            v48 = *a2;
            LOWORD(v48) = v48 - 88;
            if ( (unsigned __int16)v48 <= 0x20u )
            {
              v49 = 0x120821001LL;
              if ( _bittest64(&v49, v48) )
                goto LABEL_146;
            }
            v55 = v9;
LABEL_175:
            v57 = 1;
            write_char_2(v10, v8, &v52);
            v11 = v52;
LABEL_145:
            v13 = v55;
            break;
        }
        break;
      case 7:
        if ( v10 > 0x69u )
        {
          switch ( v10 )
          {
            case 'n':
              goto LABEL_199;
            case 'o':
              v15 = 8LL;
              if ( (v5 & 0x80u) != 0 )
                v5 |= 0x200u;
              goto LABEL_27;
            case 'p':
              v6 = 16;
              v5 |= 0x8000u;
              goto LABEL_74;
          }
          if ( v10 != 115 )
          {
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_107;
              v21 = 39;
              goto LABEL_75;
            }
LABEL_26:
            v15 = 10LL;
LABEL_27:
            a3 += 2;
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v16 = *((_QWORD *)a3 - 1);
            }
            else if ( (v5 & 0x20) != 0 )
            {
              if ( (v5 & 0x40) != 0 )
                v16 = *((__int16 *)a3 - 4);
              else
                v16 = *((unsigned __int16 *)a3 - 4);
            }
            else if ( (v5 & 0x40) != 0 )
            {
              v16 = *(a3 - 2);
            }
            else
            {
              v16 = (unsigned int)*(a3 - 2);
            }
            if ( (v5 & 0x40) != 0 && v16 < 0 )
            {
              v16 = -v16;
              v5 |= 0x100u;
            }
            v25 = (unsigned int)v16;
            if ( (v5 & 0x9000) != 0 )
              v25 = v16;
            if ( v6 >= 0 )
            {
              v5 &= ~8u;
              if ( v6 > 512 )
                v6 = 512;
            }
            else
            {
              v6 = 1;
            }
            v26 = v62;
            v27 = (char *)&v66[255] + 1;
            v53 &= -(v25 != 0);
            v28 = v53;
            while ( 1 )
            {
              v29 = v6--;
              if ( v29 <= 0 && !v25 )
                break;
              v30 = v25 % v15;
              v25 /= v15;
              v31 = v30 + 48;
              if ( (int)v30 + 48 > 57 )
                v31 = v30 + v26 + 48;
              *v27-- = v31;
            }
            v54 = v6;
            LODWORD(v12) = (unsigned int)&v66[64] + 383 - (_DWORD)v27;
            v7 = (WCHAR *)(v27 + 1);
            if ( (v5 & 0x200) != 0 )
            {
              v9 = 0;
              if ( !(_DWORD)v12 || (v53 = v28, *(_BYTE *)v7 != 48) )
              {
                v7 = (WCHAR *)((char *)v7 - 1);
                v53 = v28;
                LODWORD(v12) = v12 + 1;
                *(_BYTE *)v7 = 48;
              }
            }
            else
            {
              v9 = 0;
            }
            goto LABEL_107;
          }
        }
        else
        {
          if ( v10 == 105 )
            goto LABEL_25;
          if ( v10 == 67 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x20u;
            goto LABEL_45;
          }
          if ( v10 != 83 )
          {
            if ( v10 != 88 )
            {
              if ( v10 == 90 )
              {
                v17 = *(unsigned __int16 **)a3;
                a3 += 2;
                if ( v17 && (v7 = (WCHAR *)*((_QWORD *)v17 + 1)) != 0LL )
                {
                  v18 = *v17;
                  if ( v17[1] < (unsigned __int16)v18 )
                    goto LABEL_199;
                  LODWORD(v12) = *v17;
                  if ( (v5 & 0x800) != 0 )
                  {
                    if ( (v18 & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                      goto LABEL_199;
                    LODWORD(v12) = v18 >> 1;
                    v57 = 1;
                  }
                  else
                  {
                    v57 = v9;
                  }
                }
                else
                {
                  v12 = -1LL;
                  v7 = (WCHAR *)"(null)";
                  do
                    ++v12;
                  while ( aNull[v12] != (_BYTE)v9 );
                }
                goto LABEL_107;
              }
              if ( v10 != 99 )
              {
                if ( v10 == 100 )
                {
LABEL_25:
                  v5 |= 0x40u;
                  goto LABEL_26;
                }
LABEL_107:
                if ( v63 != v9 )
                {
                  v13 = v55;
                  v8 = v61;
                  break;
                }
                if ( (v5 & 0x40) == 0 )
                  goto LABEL_116;
                if ( (v5 & 0x100) != 0 )
                {
                  v32 = 45;
                  goto LABEL_113;
                }
                if ( (v5 & 1) != 0 )
                {
                  v32 = 43;
                  goto LABEL_113;
                }
                if ( (v5 & 2) != 0 )
                {
                  v32 = 32;
LABEL_113:
                  v33 = 1;
                  v59[0] = v32;
                  v53 = 1;
                }
                else
                {
LABEL_116:
                  v33 = v53;
                }
                v34 = v61;
                v35 = v60 - v12 - v33;
                v64 = v35;
                if ( (v5 & 0xC) == 0 && v35 > 0 )
                {
                  v36 = 32;
                  do
                    write_char_2(v36, v34, &v52);
                  while ( v52 != -1 && v37 > 0 );
                  v33 = v53;
                }
                write_string_2(v59, v33, v34, &v52);
                v38 = v61;
                if ( (v5 & 0xC) == 8 && v35 > 0 )
                {
                  do
                    write_char_2(48LL, v38, &v52);
                  while ( v52 != -1 && v39 > 0 );
                  v35 = v64;
                }
                if ( v57 || (int)v12 <= 0 )
                {
                  write_string_2(v7, (unsigned int)v12, v38, &v52);
                  v8 = v61;
                  v9 = 0;
LABEL_138:
                  v11 = v52;
                }
                else
                {
                  v40 = (UCHAR *)v7;
                  v41 = v12;
                  while ( 1 )
                  {
                    --v41;
                    v42 = safecrt_mbtowc(v56, v40, _mb_cur_max);
                    if ( v42 == 2 )
                      --v41;
                    v8 = v61;
                    if ( v42 <= 0 )
                      break;
                    write_char_2(v56[0], v61, &v52);
                    v40 += v43;
                    v9 = 0;
                    if ( v41 <= 0 )
                    {
                      a2 = v65;
                      goto LABEL_138;
                    }
                  }
                  a2 = v65;
                  v11 = -1;
                  v52 = -1;
                  v9 = 0;
                }
                if ( v11 >= 0 )
                {
                  for ( i = (v5 & 4) == 0; !i && v35 > 0; i = v52 == -1 )
                  {
                    --v35;
                    write_char_2(32LL, v8, &v52);
                    v11 = v52;
                  }
                }
                v6 = v54;
                goto LABEL_145;
              }
LABEL_45:
              v19 = *(_WORD *)a3;
              a3 += 2;
              v56[0] = v19;
              v57 = 1;
              if ( (v5 & 0x20) != 0 )
              {
                v58[0] = v19;
                v58[1] = v9;
                v20 = safecrt_mbtowc(v66, v58, _mb_cur_max);
                v9 = 0;
                if ( v20 < 0 )
                  v63 = 1;
              }
              else
              {
                v66[0] = v19;
              }
              v7 = v66;
              LODWORD(v12) = 1;
              goto LABEL_107;
            }
LABEL_74:
            v21 = 7;
LABEL_75:
            v62 = v21;
            if ( (v5 & 0x80u) != 0 )
            {
              v53 = 2;
              v59[0] = 48;
              v59[1] = v21 + 81;
            }
            v15 = 16LL;
            goto LABEL_27;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x20u;
        }
        v7 = *(WCHAR **)a3;
        v22 = v6;
        if ( v6 == -1 )
          v22 = 0x7FFFFFFF;
        a3 += 2;
        if ( (v5 & 0x20) != 0 )
        {
          v23 = (const char *)v7;
          if ( !v7 )
          {
            v7 = (WCHAR *)"(null)";
            v23 = "(null)";
          }
          LODWORD(v12) = v9;
          if ( v22 > 0 )
          {
            do
            {
              if ( *v23 == (_BYTE)v9 )
                break;
              ++v23;
              LODWORD(v12) = v12 + 1;
            }
            while ( (int)v12 < v22 );
          }
        }
        else
        {
          v57 = 1;
          v24 = L"(null)";
          if ( v7 )
            v24 = v7;
          v7 = (WCHAR *)v24;
          while ( v22 )
          {
            --v22;
            if ( *v24 == (_WORD)v9 )
              break;
            ++v24;
          }
          LODWORD(v12) = v24 - v7;
        }
        goto LABEL_107;
    }
LABEL_146:
    v10 = *a2;
  }
  while ( *a2 );
  if ( !v13 || v13 == 7 )
    return (unsigned int)v11;
LABEL_199:
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
