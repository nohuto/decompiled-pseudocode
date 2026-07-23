/*
 * XREFs of _output_s @ 0x1800986B4
 * Callers:
 *     _soutput_s @ 0x180099018 (_soutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008C868 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     _safecrt_wctomb_s @ 0x180098F3C (_safecrt_wctomb_s.c)
 *     write_char_1 @ 0x18009910C (write_char_1.c)
 *     write_multi_char_1 @ 0x18009915C (write_multi_char_1.c)
 *     write_string_1 @ 0x1800991B4 (write_string_1.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

__int64 __fastcall output_s(__int64 a1, char *a2, int *a3)
{
  int v5; // edi
  int v6; // esi
  int v7; // r14d
  wchar_t *v8; // rbx
  char v10; // r9
  __int64 v11; // r12
  int v12; // r8d
  unsigned __int64 v13; // r10
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // eax
  const wchar_t *v23; // rax
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  _BYTE *v32; // rbx
  int v33; // ecx
  char v34; // r14
  int v35; // r9d
  unsigned __int64 v36; // rdx
  char v37; // al
  int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // r14d
  __int64 v41; // rcx
  __int64 v42; // rsi
  wchar_t *v43; // r15
  int v44; // esi
  __int64 v45; // r9
  __int64 v46; // rcx
  char v47; // cl
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  int v52; // [rsp+30h] [rbp-D0h]
  _BYTE v53[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v54; // [rsp+38h] [rbp-C8h] BYREF
  int v55; // [rsp+3Ch] [rbp-C4h]
  int v56; // [rsp+40h] [rbp-C0h] BYREF
  int v57; // [rsp+44h] [rbp-BCh]
  int v58; // [rsp+48h] [rbp-B8h]
  unsigned int v59; // [rsp+4Ch] [rbp-B4h]
  __int64 v60; // [rsp+50h] [rbp-B0h]
  int v61; // [rsp+58h] [rbp-A8h]
  int v62; // [rsp+5Ch] [rbp-A4h]
  unsigned int v63; // [rsp+60h] [rbp-A0h] BYREF
  char *v64; // [rsp+68h] [rbp-98h]
  _BYTE v65[512]; // [rsp+70h] [rbp-90h] BYREF
  char v66[8]; // [rsp+270h] [rbp+170h] BYREF

  v60 = a1;
  v61 = 0;
  v5 = 0;
  v59 = 0;
  v6 = 0;
  v55 = 0;
  v7 = 0;
  v52 = 0;
  v8 = 0LL;
  v62 = 0;
  memset(v65, 0, sizeof(v65));
  v57 = 0;
  if ( !a1 || !a2 )
    goto LABEL_189;
  v10 = *a2;
  LODWORD(v11) = 0;
  v54 = 0;
  v12 = 0;
  v56 = 0;
  if ( !v10 )
    return (unsigned int)v54;
  v13 = 16LL;
  do
  {
    v64 = ++a2;
    if ( v54 < 0 )
      break;
    if ( (unsigned __int8)(v10 - 32) > 0x5Au )
      v14 = 0;
    else
      v14 = _lookuptable_s[v10 - 32] & 0xF;
    v15 = (unsigned int)v10;
    v16 = (unsigned int)(v14 + v12 + 8 * v14);
    v12 = _lookuptable_s[v16] >> 4;
    v58 = v12;
    switch ( v12 )
    {
      case 8:
        goto LABEL_189;
      case 0:
        goto LABEL_159;
      case 1:
        v6 = -1;
        v62 = 0;
        v55 = -1;
        v7 = 0;
        v59 = 0;
        v5 = 0;
        v52 = 0;
        v57 = 0;
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
          v49 = *a3;
          a3 += 2;
          v50 = v5 | 4;
          if ( v49 >= 0 )
            v50 = v5;
          v5 = v50;
          v59 = abs32(v49);
          goto LABEL_184;
        }
        v59 = v15 + 2 * (5 * v59 - 24);
        break;
      case 4:
        v6 = 0;
        v55 = 0;
        break;
      case 5:
        if ( v10 != 42 )
        {
          v6 = v15 + 2 * (5 * v6 - 24);
          goto LABEL_164;
        }
        v6 = *a3;
        a3 += 2;
        v55 = v6;
        if ( v6 < 0 )
        {
          v6 = -1;
LABEL_164:
          v55 = v6;
        }
        break;
      case 6:
        switch ( v10 )
        {
          case 'I':
            goto LABEL_141;
          case 'h':
            v5 |= 0x20u;
            goto LABEL_185;
          case 'j':
            goto LABEL_141;
          case 'l':
            v47 = *a2;
            if ( *a2 == 108 )
              ++a2;
            v48 = 4096;
            if ( v47 != 108 )
              v48 = 16;
            v5 |= v48;
            goto LABEL_185;
          case 't':
            goto LABEL_141;
          case 'w':
            v5 |= 0x800u;
            goto LABEL_185;
          case 'z':
LABEL_141:
            v5 |= 0x8000u;
            if ( v10 == 73 )
            {
              if ( *a2 == 54 && a2[1] == 52 )
              {
                a2 += 2;
              }
              else
              {
                if ( *a2 != 51 || a2[1] != 50 )
                {
LABEL_156:
                  LOBYTE(v16) = *a2 - 88;
                  if ( (unsigned __int8)v16 <= 0x20u )
                  {
                    v15 = 0x120821001LL;
                    if ( _bittest64(&v15, v16) )
                      goto LABEL_185;
                  }
                  v58 = 0;
LABEL_159:
                  LOBYTE(v15) = v10;
                  v57 = 0;
                  write_char_1(v15, v60, &v54);
LABEL_183:
                  v12 = v58;
LABEL_184:
                  v13 = 16LL;
                  goto LABEL_185;
                }
                a2 += 2;
                v5 &= ~0x8000u;
              }
            }
            else if ( v10 != 106 )
            {
              goto LABEL_156;
            }
            break;
        }
        break;
      case 7:
        if ( (int)v15 > 105 )
        {
          v25 = v15 - 110;
          if ( !v25 )
            goto LABEL_189;
          v26 = v25 - 1;
          if ( !v26 )
          {
            v13 = 8LL;
            if ( (v5 & 0x80u) != 0 )
              v5 |= 0x200u;
            goto LABEL_28;
          }
          v27 = v26 - 1;
          if ( !v27 )
          {
            v6 = 16;
            v5 |= 0x8000u;
            goto LABEL_77;
          }
          v28 = v27 - 3;
          if ( v28 )
          {
            v17 = (unsigned int)(v28 - 2);
            if ( (_DWORD)v17 )
            {
              if ( (_DWORD)v17 != 3 )
                goto LABEL_108;
              v29 = 39;
              goto LABEL_78;
            }
LABEL_27:
            v13 = 10LL;
LABEL_28:
            a3 += 2;
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v21 = *((_QWORD *)a3 - 1);
            }
            else if ( (v5 & 0x20) != 0 )
            {
              if ( (v5 & 0x40) != 0 )
                v21 = *((__int16 *)a3 - 4);
              else
                v21 = *((unsigned __int16 *)a3 - 4);
            }
            else if ( (v5 & 0x40) != 0 )
            {
              v21 = *(a3 - 2);
            }
            else
            {
              v21 = (unsigned int)*(a3 - 2);
            }
            if ( (v5 & 0x40) != 0 && v21 < 0 )
            {
              v21 = -v21;
              v5 |= 0x100u;
            }
            v31 = (unsigned int)v21;
            if ( (v5 & 0x9000) != 0 )
              v31 = v21;
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
            v32 = &v65[511];
            v33 = v31 != 0 ? v7 : 0;
            v34 = v61;
            v52 = v33;
            v35 = v33;
            while ( 1 )
            {
              v17 = (unsigned int)v6--;
              if ( (int)v17 <= 0 && !v31 )
                break;
              v36 = v31 % v13;
              v31 /= v13;
              v37 = v36 + 48;
              if ( (int)v36 + 48 > 57 )
                v37 = v36 + v34 + 48;
              *v32-- = v37;
            }
            v55 = v6;
            v38 = (unsigned int)&v65[144] + 367 - (_DWORD)v32;
            v7 = v35;
            v8 = (wchar_t *)(v32 + 1);
            v56 = v38;
            LODWORD(v11) = v38;
            if ( (v5 & 0x200) != 0 )
            {
              if ( !v38 || (v52 = v35, *(_BYTE *)v8 != 48) )
              {
                v8 = (wchar_t *)((char *)v8 - 1);
                v52 = v35;
                LODWORD(v11) = v38 + 1;
                v7 = v35;
                v56 = v38 + 1;
                *(_BYTE *)v8 = 48;
              }
            }
            goto LABEL_108;
          }
        }
        else
        {
          if ( (_DWORD)v15 == 105 )
            goto LABEL_26;
          v17 = (unsigned int)(v15 - 67);
          if ( !(_DWORD)v17 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x800u;
            goto LABEL_52;
          }
          v18 = v17 - 16;
          if ( v18 )
          {
            v19 = v18 - 5;
            if ( v19 )
            {
              v20 = v19 - 2;
              if ( !v20 )
              {
                v17 = *(_QWORD *)a3;
                a3 += 2;
                if ( v17 && (v8 = *(wchar_t **)(v17 + 8)) != 0LL )
                {
                  v22 = *(unsigned __int16 *)v17;
                  if ( *(_WORD *)(v17 + 2) < (unsigned __int16)v22 )
                    goto LABEL_189;
                  LODWORD(v11) = *(unsigned __int16 *)v17;
                  if ( (v5 & 0x800) != 0 )
                  {
                    if ( (v22 & 1) != 0 || ((unsigned __int8)v8 & 1) != 0 )
                      goto LABEL_189;
                    v57 = 1;
                    LODWORD(v11) = v22 >> 1;
                  }
                  else
                  {
                    v57 = 0;
                  }
                }
                else
                {
                  v11 = -1LL;
                  v8 = (wchar_t *)"(null)";
                  do
                    ++v11;
                  while ( aNull[v11] );
                }
                v56 = v11;
                goto LABEL_108;
              }
              v17 = (unsigned int)(v20 - 9);
              if ( (_DWORD)v17 )
              {
                if ( (_DWORD)v17 == 1 )
                {
LABEL_26:
                  v5 |= 0x40u;
                  goto LABEL_27;
                }
LABEL_108:
                if ( v62 )
                  goto LABEL_183;
                if ( (v5 & 0x40) != 0 )
                {
                  if ( (v5 & 0x100) != 0 )
                  {
                    v53[0] = 45;
                    goto LABEL_116;
                  }
                  if ( (v5 & 1) != 0 )
                  {
                    v53[0] = 43;
                    goto LABEL_116;
                  }
                  if ( (v5 & 2) != 0 )
                  {
                    v53[0] = 32;
LABEL_116:
                    v52 = 1;
                  }
                }
                v39 = v52;
                v40 = v59 - v11 - v52;
                if ( (v5 & 0xC) == 0 )
                {
                  LOBYTE(v17) = 32;
                  write_multi_char_1(v17, v40, v60, &v54);
                  v39 = v52;
                }
                write_string_1(v53, v39, v60, &v54);
                v42 = v60;
                if ( (v5 & 0xC) == 8 )
                {
                  LOBYTE(v41) = 48;
                  write_multi_char_1(v41, v40, v60, &v54);
                }
                if ( v57 && (int)v11 > 0 )
                {
                  v63 = 0;
                  v43 = v8;
                  v44 = v11;
                  while ( 1 )
                  {
                    v45 = *v43++;
                    --v44;
                    if ( (unsigned int)safecrt_wctomb_s(&v63, v66, 6LL, v45) || !v63 )
                      break;
                    write_string_1(v66, v63, v60, &v54);
                    if ( !v44 )
                      goto LABEL_129;
                  }
                  v54 = -1;
LABEL_129:
                  a2 = v64;
                  v42 = v60;
                }
                else
                {
                  write_string_1(v8, (unsigned int)v11, v42, &v54);
                }
                if ( v54 >= 0 && (v5 & 4) != 0 )
                {
                  LOBYTE(v46) = 32;
                  write_multi_char_1(v46, v40, v42, &v54);
                  v6 = v55;
                  v7 = v52;
                }
                else
                {
                  v7 = v52;
                  v6 = v55;
                }
                goto LABEL_183;
              }
LABEL_52:
              a3 += 2;
              if ( (v5 & 0x810) != 0 )
              {
                v24 = safecrt_wctomb_s(&v56, v65, 512LL, *((unsigned __int16 *)a3 - 4));
                LODWORD(v11) = v56;
                if ( v24 )
                  v62 = 1;
              }
              else
              {
                LODWORD(v11) = 1;
                v65[0] = *((_BYTE *)a3 - 8);
                v56 = 1;
              }
              v8 = (wchar_t *)v65;
              goto LABEL_108;
            }
LABEL_77:
            v29 = 7;
LABEL_78:
            v61 = v29;
            if ( (v5 & 0x80u) != 0 )
            {
              v53[0] = 48;
              v53[1] = v29 + 81;
              v7 = 2;
            }
            goto LABEL_28;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x800u;
        }
        v8 = *(wchar_t **)a3;
        v17 = (unsigned int)v6;
        if ( v6 == -1 )
          v17 = 0x7FFFFFFFLL;
        a3 += 2;
        if ( (v5 & 0x810) != 0 )
        {
          v23 = v8;
          if ( !v8 )
          {
            v8 = L"(null)";
            v23 = L"(null)";
          }
          v57 = 1;
          while ( (_DWORD)v17 )
          {
            v17 = (unsigned int)(v17 - 1);
            if ( !*v23 )
              break;
            ++v23;
          }
          v30 = v23 - v8;
        }
        else
        {
          v30 = (__int64)"(null)";
          if ( v8 )
            v30 = (__int64)v8;
          v8 = (wchar_t *)v30;
          while ( (_DWORD)v17 )
          {
            v17 = (unsigned int)(v17 - 1);
            if ( !*(_BYTE *)v30 )
              break;
            ++v30;
          }
          LODWORD(v30) = v30 - (_DWORD)v8;
        }
        LODWORD(v11) = v30;
        v56 = v30;
        goto LABEL_108;
    }
LABEL_185:
    v10 = *a2;
  }
  while ( *a2 );
  if ( !v12 || v12 == 7 )
    return (unsigned int)v54;
LABEL_189:
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
