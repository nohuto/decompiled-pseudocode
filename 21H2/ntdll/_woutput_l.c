/*
 * XREFs of _woutput_l @ 0x180093840
 * Callers:
 *     _snwprintf @ 0x18008D8B0 (_snwprintf.c)
 *     swprintf @ 0x18008DEF0 (swprintf.c)
 *     _vswprintf_l @ 0x18008E0F4 (_vswprintf_l.c)
 *     _vsnwprintf_l @ 0x18008E28C (_vsnwprintf_l.c)
 * Callees:
 *     _invalid_parameter @ 0x18008C868 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     write_char_0 @ 0x180094154 (write_char_0.c)
 *     write_multi_char_0 @ 0x1800941A4 (write_multi_char_0.c)
 *     write_string_0 @ 0x1800941FC (write_string_0.c)
 *     _get_printf_count_output @ 0x1800966B0 (_get_printf_count_output.c)
 *     mbtowc @ 0x1800967F4 (mbtowc.c)
 */

__int64 __fastcall woutput_l(__int64 a1, unsigned __int16 *a2, __int64 a3, wchar_t *a4)
{
  wchar_t *v4; // rsi
  unsigned __int16 *v5; // r15
  __int64 v6; // r10
  int v7; // edi
  int v8; // r8d
  int v9; // r12d
  unsigned __int16 v10; // r9
  int v11; // r14d
  __int64 v12; // r13
  int v13; // r11d
  wchar_t *v14; // rbx
  int v15; // ecx
  int v16; // eax
  __int16 v17; // ax
  unsigned __int16 *v18; // rcx
  unsigned int v19; // eax
  wchar_t v20; // ax
  unsigned __int64 v21; // r10
  wchar_t *v22; // rsi
  __int64 v23; // rax
  int v24; // eax
  int v25; // ecx
  const char *v26; // rax
  const wchar_t *v27; // rax
  unsigned __int64 v28; // r8
  char v29; // r11
  char *v30; // rbx
  int v31; // r9d
  int v32; // ecx
  unsigned __int64 v33; // rdx
  char v34; // al
  _WORD *v35; // rsi
  unsigned int v36; // r14d
  unsigned int v37; // r12d
  __int64 v38; // rsi
  const char *v39; // r15
  int v40; // esi
  int v41; // eax
  __int64 v42; // r14
  unsigned __int16 v43; // cx
  int v44; // eax
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  int v48; // eax
  int v49; // ecx
  int v50; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+34h] [rbp-CCh] BYREF
  int v52; // [rsp+38h] [rbp-C8h]
  int v53; // [rsp+3Ch] [rbp-C4h]
  int v54; // [rsp+40h] [rbp-C0h]
  int v55; // [rsp+44h] [rbp-BCh]
  int v56; // [rsp+48h] [rbp-B8h]
  __int64 v57; // [rsp+50h] [rbp-B0h]
  char SrcCh[4]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t v59; // [rsp+5Ch] [rbp-A4h] BYREF
  _WORD v60[4]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *v61; // [rsp+68h] [rbp-98h]
  int v62; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v63; // [rsp+78h] [rbp-88h]
  char *v64; // [rsp+80h] [rbp-80h]
  wchar_t DstCh[56]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v66; // [rsp+100h] [rbp+0h] BYREF
  char v67; // [rsp+28Fh] [rbp+18Fh] BYREF

  v61 = a4;
  v57 = a1;
  v4 = a4;
  v62 = 0;
  v5 = a2;
  v54 = 0;
  v6 = a1;
  v53 = 0;
  v7 = 0;
  v52 = 0;
  v8 = 0;
  v50 = 0;
  v9 = 0;
  v55 = 0;
  if ( a1 && a2 )
  {
    v10 = *a2;
    v11 = 0;
    v51 = 0;
    LODWORD(v12) = 0;
    v13 = 0;
    if ( v10 )
    {
      v14 = (wchar_t *)v64;
      do
      {
        v63 = ++v5;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v10 - 32] & 0xF;
        v13 = _lookuptable[8 * v15 + v13] >> 4;
        v56 = v13;
        switch ( v13 )
        {
          case 0:
            goto LABEL_168;
          case 1:
            v9 = -1;
            v50 = 0;
            v53 = -1;
            v8 = 0;
            v54 = 0;
            v7 = 0;
            v52 = 0;
            v55 = 0;
            break;
          case 2:
            switch ( v10 )
            {
              case ' ':
                v7 |= 2u;
                break;
              case '#':
                v7 |= 0x80u;
                break;
              case '+':
                v7 |= 1u;
                break;
              case '-':
                v7 |= 4u;
                break;
              case '0':
                v7 |= 8u;
                break;
            }
            break;
          case 3:
            if ( v10 == 42 )
            {
              v48 = *(_DWORD *)v4;
              v61 = v4 + 4;
              v49 = v7 | 4;
              if ( v48 >= 0 )
                v49 = v7;
              v8 = abs32(v48);
              v7 = v49;
            }
            else
            {
              v8 = v10 + 2 * (5 * v8 - 24);
            }
            v54 = v8;
            break;
          case 4:
            v9 = 0;
            v53 = 0;
            break;
          case 5:
            if ( v10 == 42 )
            {
              v9 = *(_DWORD *)v4;
              v61 = v4 + 4;
              v53 = v9;
              if ( v9 < 0 )
              {
                v9 = -1;
                v53 = -1;
              }
            }
            else
            {
              v9 = v10 + 2 * (5 * v9 - 24);
              v53 = v9;
            }
            break;
          case 6:
            if ( v10 != 73 )
            {
              if ( v10 == 104 )
              {
                v7 |= 0x20u;
                break;
              }
              if ( v10 != 106 )
              {
                if ( v10 == 108 )
                {
                  v43 = *v5;
                  if ( *v5 == 108 )
                    ++v5;
                  v44 = 4096;
                  if ( v43 != 108 )
                    v44 = 16;
                  v7 |= v44;
                  break;
                }
                if ( v10 != 116 )
                {
                  if ( v10 == 119 )
                  {
                    v7 |= 0x800u;
                    break;
                  }
                  if ( v10 != 122 )
                    break;
                }
              }
            }
            v7 |= 0x8000u;
            if ( v10 == 73 )
            {
              if ( *v5 == 54 && v5[1] == 52 )
              {
                v5 += 2;
              }
              else
              {
                if ( *v5 != 51 || v5[1] != 50 )
                {
LABEL_165:
                  v45 = *v5;
                  LOWORD(v45) = v45 - 88;
                  if ( (unsigned __int16)v45 <= 0x20u )
                  {
                    v46 = 0x120821001LL;
                    if ( _bittest64(&v46, v45) )
                      break;
                  }
                  v56 = 0;
LABEL_168:
                  v55 = 1;
                  write_char_0(v10, v6, &v51);
                  v11 = v51;
LABEL_169:
                  v13 = v56;
                  v8 = v54;
                  v6 = v57;
                  break;
                }
                v5 += 2;
                v7 &= ~0x8000u;
              }
            }
            else if ( v10 != 106 )
            {
              goto LABEL_165;
            }
            break;
          case 7:
            if ( v10 > 0x69u )
            {
              switch ( v10 )
              {
                case 'n':
                  v61 = v4 + 4;
                  v35 = *(_WORD **)v4;
                  if ( !get_printf_count_output() )
                    goto LABEL_194;
                  if ( (v7 & 0x20) != 0 )
                    *v35 = v11;
                  else
                    *(_DWORD *)v35 = v11;
                  v16 = 1;
                  v50 = 1;
                  goto LABEL_26;
                case 'o':
                  v21 = 8LL;
                  if ( (v7 & 0x80u) != 0 )
                    v7 |= 0x200u;
                  goto LABEL_52;
                case 'p':
                  v9 = 16;
                  v7 |= 0x8000u;
                  goto LABEL_79;
              }
              if ( v10 != 115 )
              {
                if ( v10 == 117 )
                  goto LABEL_51;
                if ( v10 != 120 )
                  goto LABEL_25;
                v24 = 39;
                goto LABEL_80;
              }
            }
            else
            {
              if ( v10 == 105 )
                goto LABEL_50;
              if ( v10 == 67 )
              {
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x20u;
                goto LABEL_45;
              }
              if ( v10 != 83 )
              {
                if ( v10 != 88 )
                {
                  if ( v10 == 90 )
                  {
                    v18 = *(unsigned __int16 **)v4;
                    v61 = v4 + 4;
                    if ( v18 && (v14 = (wchar_t *)*((_QWORD *)v18 + 1)) != 0LL )
                    {
                      v19 = *v18;
                      if ( v18[1] < (unsigned __int16)v19 )
                        goto LABEL_194;
                      LODWORD(v12) = *v18;
                      if ( (v7 & 0x800) != 0 )
                      {
                        if ( (v19 & 1) != 0 || ((unsigned __int8)v14 & 1) != 0 )
                          goto LABEL_194;
                        LODWORD(v12) = v19 >> 1;
                        v55 = 1;
                      }
                      else
                      {
                        v55 = 0;
                      }
                    }
                    else
                    {
                      v12 = -1LL;
                      v14 = (wchar_t *)"(null)";
                      do
                        ++v12;
                      while ( aNull[v12] );
                    }
                    goto LABEL_25;
                  }
                  if ( v10 != 99 )
                  {
                    if ( v10 != 100 )
                      goto LABEL_25;
LABEL_50:
                    v7 |= 0x40u;
LABEL_51:
                    v21 = 10LL;
LABEL_52:
                    v22 = v4 + 4;
                    v61 = v22;
                    if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                    {
                      v23 = *((_QWORD *)v22 - 1);
                    }
                    else if ( (v7 & 0x20) != 0 )
                    {
                      if ( (v7 & 0x40) != 0 )
                        v23 = (__int16)*(v22 - 4);
                      else
                        v23 = *(v22 - 4);
                    }
                    else if ( (v7 & 0x40) != 0 )
                    {
                      v23 = *((int *)v22 - 2);
                    }
                    else
                    {
                      v23 = *((unsigned int *)v22 - 2);
                    }
                    if ( (v7 & 0x40) != 0 && v23 < 0 )
                    {
                      v23 = -v23;
                      v7 |= 0x100u;
                    }
                    v28 = (unsigned int)v23;
                    if ( (v7 & 0x9000) != 0 )
                      v28 = v23;
                    if ( v9 >= 0 )
                    {
                      v7 &= ~8u;
                      if ( v9 > 512 )
                        v9 = 512;
                    }
                    else
                    {
                      v9 = 1;
                    }
                    v29 = v62;
                    v30 = &v67;
                    v52 &= -(v28 != 0);
                    v31 = v52;
                    while ( 1 )
                    {
                      v32 = v9--;
                      if ( v32 <= 0 && !v28 )
                        break;
                      v33 = v28 % v21;
                      v28 /= v21;
                      v34 = v33 + 48;
                      if ( (int)v33 + 48 > 57 )
                        v34 = v33 + v29 + 48;
                      *v30-- = v34;
                    }
                    v53 = v9;
                    LODWORD(v12) = (unsigned int)&v66 + 399 - (_DWORD)v30;
                    v14 = (wchar_t *)(v30 + 1);
                    if ( (v7 & 0x200) != 0 )
                    {
                      if ( !(_DWORD)v12 || (v61 = v22, v52 = v31, *(_BYTE *)v14 != 48) )
                      {
                        v14 = (wchar_t *)((char *)v14 - 1);
                        v61 = v22;
                        LODWORD(v12) = v12 + 1;
                        v52 = v31;
                        *(_BYTE *)v14 = 48;
                      }
                    }
LABEL_25:
                    v16 = v50;
LABEL_26:
                    if ( v16 )
                      goto LABEL_169;
                    if ( (v7 & 0x40) != 0 )
                    {
                      if ( (v7 & 0x100) != 0 )
                      {
                        v17 = 45;
                        goto LABEL_118;
                      }
                      if ( (v7 & 1) != 0 )
                      {
                        v17 = 43;
LABEL_118:
                        v60[0] = v17;
LABEL_119:
                        v36 = 1;
                        v52 = 1;
LABEL_123:
                        v37 = v54 - v12 - v36;
                        if ( (v7 & 0xC) == 0 )
                          write_multi_char_0(32LL, v37, v57, &v51);
                        write_string_0(v60, v36, v57, &v51);
                        v38 = v57;
                        if ( (v7 & 0xC) == 8 )
                          write_multi_char_0(48LL, v37, v57, &v51);
                        if ( v55 || (int)v12 <= 0 )
                        {
                          write_string_0(v14, (unsigned int)v12, v38, &v51);
LABEL_137:
                          v11 = v51;
                        }
                        else
                        {
                          v39 = (const char *)v14;
                          v40 = v12;
                          while ( 1 )
                          {
                            --v40;
                            v41 = mbtowc(&v59, v39, _mb_cur_max);
                            v42 = v41;
                            if ( v41 == 2 )
                              --v40;
                            if ( v41 <= 0 )
                              break;
                            write_char_0(v59, v57, &v51);
                            v39 += v42;
                            if ( v40 <= 0 )
                            {
                              v5 = v63;
                              v38 = v57;
                              goto LABEL_137;
                            }
                          }
                          v5 = v63;
                          v11 = -1;
                          v38 = v57;
                          v51 = -1;
                        }
                        if ( v11 >= 0 && (v7 & 4) != 0 )
                        {
                          write_multi_char_0(32LL, v37, v38, &v51);
                          v11 = v51;
                        }
                        v9 = v53;
                        goto LABEL_169;
                      }
                      if ( (v7 & 2) != 0 )
                      {
                        v60[0] = 32;
                        goto LABEL_119;
                      }
                    }
                    v36 = v52;
                    goto LABEL_123;
                  }
LABEL_45:
                  v20 = *v4;
                  v59 = *v4;
                  v55 = 1;
                  v61 = v4 + 4;
                  if ( (v7 & 0x20) != 0 )
                  {
                    SrcCh[0] = v20;
                    SrcCh[1] = 0;
                    if ( mbtowc(DstCh, SrcCh, _mb_cur_max) < 0 )
                      v50 = 1;
                  }
                  else
                  {
                    DstCh[0] = v20;
                  }
                  v14 = DstCh;
                  LODWORD(v12) = 1;
                  goto LABEL_25;
                }
LABEL_79:
                v24 = 7;
LABEL_80:
                v62 = v24;
                if ( (v7 & 0x80u) != 0 )
                {
                  v52 = 2;
                  v60[0] = 48;
                  v60[1] = v24 + 81;
                }
                v21 = 16LL;
                goto LABEL_52;
              }
              if ( (v7 & 0x830) == 0 )
                v7 |= 0x20u;
            }
            v14 = *(wchar_t **)v4;
            v25 = v9;
            if ( v9 == -1 )
              v25 = 0x7FFFFFFF;
            LODWORD(v12) = 0;
            v61 = v4 + 4;
            if ( (v7 & 0x20) != 0 )
            {
              v26 = (const char *)v14;
              if ( !v14 )
              {
                v14 = (wchar_t *)"(null)";
                v26 = "(null)";
              }
              if ( v25 > 0 )
              {
                do
                {
                  if ( !*v26 )
                    break;
                  ++v26;
                  LODWORD(v12) = v12 + 1;
                }
                while ( (int)v12 < v25 );
              }
            }
            else
            {
              v55 = 1;
              v27 = L"(null)";
              if ( v14 )
                v27 = v14;
              v14 = (wchar_t *)v27;
              while ( v25 )
              {
                --v25;
                if ( !*v27 )
                  break;
                ++v27;
              }
              LODWORD(v12) = v27 - v14;
            }
            goto LABEL_25;
        }
        v10 = *v5;
        v4 = v61;
      }
      while ( *v5 );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_194:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
