/*
 * XREFs of _output_l @ 0x1800927B0
 * Callers:
 *     _snprintf @ 0x18008D100 (_snprintf.c)
 *     _vsprintf_l @ 0x18008D920 (_vsprintf_l.c)
 *     _vsnprintf_l @ 0x18008DABC (_vsnprintf_l.c)
 *     sprintf @ 0x180090830 (sprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x18008C168 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     write_char @ 0x180093010 (write_char.c)
 *     write_multi_char @ 0x180093060 (write_multi_char.c)
 *     write_string @ 0x1800930B8 (write_string.c)
 *     _get_printf_count_output @ 0x180095FB0 (_get_printf_count_output.c)
 *     wctomb_s @ 0x180096088 (wctomb_s.c)
 */

__int64 __fastcall output_l(__int64 a1, char *a2, __int64 a3, int *a4)
{
  char *v5; // r12
  __int64 v6; // r10
  int v7; // edi
  int v8; // r8d
  int v9; // esi
  int v10; // r14d
  int v11; // r15d
  int v12; // r11d
  char v13; // r9
  wchar_t *v14; // rbx
  int v15; // ecx
  char *v16; // rax
  __int64 v17; // rcx
  unsigned __int16 *v18; // rdx
  const wchar_t *v19; // rax
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  char *v25; // rbx
  int v26; // ecx
  char v27; // r14
  int v28; // r9d
  unsigned __int64 v29; // rdx
  char v30; // al
  int v31; // eax
  wchar_t *v32; // rsi
  unsigned int v33; // r15d
  unsigned int v34; // r14d
  __int64 v35; // rcx
  __int64 v36; // r15
  int v37; // esi
  wchar_t *v38; // r15
  wchar_t v39; // r9
  __int64 v40; // rcx
  char v41; // cl
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // eax
  int v46; // ecx
  int v48; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v50[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v51; // [rsp+3Ch] [rbp-C4h]
  int SizeConverted; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+44h] [rbp-BCh]
  int v54; // [rsp+48h] [rbp-B8h]
  int v55; // [rsp+4Ch] [rbp-B4h]
  __int64 v56; // [rsp+50h] [rbp-B0h]
  int v57; // [rsp+58h] [rbp-A8h]
  int v58; // [rsp+5Ch] [rbp-A4h]
  int v59; // [rsp+60h] [rbp-A0h] BYREF
  char *v60; // [rsp+68h] [rbp-98h]
  char MbCh[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+100h] [rbp+0h] BYREF
  char v63; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v64[8]; // [rsp+270h] [rbp+170h] BYREF

  v56 = a1;
  v5 = a2;
  v58 = 0;
  v6 = a1;
  v53 = 0;
  v7 = 0;
  v51 = 0;
  v8 = 0;
  v48 = 0;
  v9 = 0;
  v57 = 0;
  v10 = 0;
  v54 = 0;
  if ( a1 && a2 )
  {
    v11 = 0;
    v49 = 0;
    SizeConverted = 0;
    v12 = 0;
    v13 = *a2;
    if ( *a2 )
    {
      v14 = (wchar_t *)v60;
      do
      {
        ++v5;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int8)(v13 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v13 - 32] & 0xF;
        v16 = _lookuptable;
        v12 = _lookuptable[8 * v15 + v12] >> 4;
        v55 = v12;
        switch ( v12 )
        {
          case 0:
            v44 = 0LL;
            goto LABEL_190;
          case 1:
            v9 = -1;
            v57 = 0;
            v51 = -1;
            v8 = 0;
            v53 = 0;
            v10 = 0;
            v48 = 0;
            v7 = 0;
            v54 = 0;
            break;
          case 2:
            switch ( v13 )
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
            if ( v13 == 42 )
            {
              v45 = *a4;
              a4 += 2;
              v46 = v7 | 4;
              if ( v45 >= 0 )
                v46 = v7;
              v8 = abs32(v45);
              v7 = v46;
            }
            else
            {
              v8 = v13 + 2 * (5 * v8 - 24);
            }
            v53 = v8;
            break;
          case 4:
            v9 = 0;
            v51 = 0;
            break;
          case 5:
            if ( v13 != 42 )
            {
              v9 = v13 + 2 * (5 * v9 - 24);
              goto LABEL_170;
            }
            v9 = *a4;
            a4 += 2;
            v51 = v9;
            if ( v9 < 0 )
            {
              v9 = -1;
LABEL_170:
              v51 = v9;
            }
            break;
          default:
            v17 = (unsigned int)(v12 - 6);
            if ( v12 == 6 )
            {
              switch ( v13 )
              {
                case 'I':
                  goto LABEL_148;
                case 'h':
                  v7 |= 0x20u;
                  goto LABEL_192;
                case 'j':
                  goto LABEL_148;
                case 'l':
                  v41 = *v5;
                  if ( *v5 == 108 )
                    ++v5;
                  v42 = 4096;
                  if ( v41 != 108 )
                    v42 = 16;
                  v7 |= v42;
                  goto LABEL_192;
                case 't':
                  goto LABEL_148;
                case 'w':
                  v7 |= 0x800u;
                  goto LABEL_192;
                case 'z':
LABEL_148:
                  v7 |= 0x8000u;
                  if ( v13 == 73 )
                  {
                    if ( *v5 == 54 && v5[1] == 52 )
                    {
                      v5 += 2;
                    }
                    else
                    {
                      if ( *v5 != 51 || v5[1] != 50 )
                      {
LABEL_163:
                        LOBYTE(v16) = *v5 - 88;
                        if ( (unsigned __int8)v16 <= 0x20u )
                        {
                          v43 = 0x120821001LL;
                          if ( _bittest64(&v43, (unsigned __int64)v16) )
                            goto LABEL_192;
                        }
                        v44 = 0LL;
                        v55 = 0;
LABEL_190:
                        v54 = 0;
                        LOBYTE(v44) = v13;
                        write_char(v44, v6, &v49);
                        v11 = v49;
LABEL_191:
                        v12 = v55;
                        v8 = v53;
                        v6 = v56;
                        goto LABEL_192;
                      }
                      v5 += 2;
                      v7 &= ~0x8000u;
                    }
                  }
                  else if ( v13 != 106 )
                  {
                    goto LABEL_163;
                  }
                  break;
              }
            }
            else if ( v12 == 7 )
            {
              if ( v13 > 105 )
              {
                switch ( v13 )
                {
                  case 'n':
                    v32 = *(wchar_t **)a4;
                    a4 += 2;
                    if ( !get_printf_count_output() )
                      goto LABEL_194;
                    if ( (v7 & 0x20) != 0 )
                      *v32 = v11;
                    else
                      *(_DWORD *)v32 = v11;
                    v9 = v51;
                    v57 = 1;
                    goto LABEL_25;
                  case 'o':
                    v20 = 8LL;
                    if ( (v7 & 0x80u) != 0 )
                      v7 |= 0x200u;
                    goto LABEL_57;
                  case 'p':
                    v9 = 16;
                    v7 |= 0x8000u;
                    goto LABEL_80;
                }
                if ( v13 != 115 )
                {
                  if ( v13 == 117 )
                    goto LABEL_56;
                  if ( v13 != 120 )
                    goto LABEL_25;
                  v22 = 39;
                  goto LABEL_81;
                }
              }
              else
              {
                if ( v13 == 105 )
                  goto LABEL_55;
                if ( v13 == 67 )
                {
                  if ( (v7 & 0x830) == 0 )
                    v7 |= 0x800u;
                  goto LABEL_50;
                }
                if ( v13 != 83 )
                {
                  if ( v13 != 88 )
                  {
                    if ( v13 == 90 )
                    {
                      v18 = *(unsigned __int16 **)a4;
                      a4 += 2;
                      if ( v18 && (v14 = (wchar_t *)*((_QWORD *)v18 + 1)) != 0LL )
                      {
                        if ( v18[1] < *v18 )
                          goto LABEL_194;
                        v17 = *v18;
                        if ( (v7 & 0x800) != 0 )
                        {
                          if ( (*v18 & 1) != 0 || ((unsigned __int8)v14 & 1) != 0 )
                            goto LABEL_194;
                          v54 = 1;
                          v17 = (unsigned int)v17 >> 1;
                        }
                        else
                        {
                          v54 = 0;
                        }
                      }
                      else
                      {
                        v17 = -1LL;
                        v14 = (wchar_t *)"(null)";
                        do
                          ++v17;
                        while ( aNull[v17] );
                      }
                      SizeConverted = v17;
                      goto LABEL_25;
                    }
                    if ( v13 != 99 )
                    {
                      if ( v13 != 100 )
                        goto LABEL_25;
LABEL_55:
                      v7 |= 0x40u;
LABEL_56:
                      v20 = 10LL;
LABEL_57:
                      a4 += 2;
                      if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                      {
                        v21 = *((_QWORD *)a4 - 1);
                      }
                      else if ( (v7 & 0x20) != 0 )
                      {
                        if ( (v7 & 0x40) != 0 )
                          v21 = *((__int16 *)a4 - 4);
                        else
                          v21 = *((unsigned __int16 *)a4 - 4);
                      }
                      else if ( (v7 & 0x40) != 0 )
                      {
                        v21 = *(a4 - 2);
                      }
                      else
                      {
                        v21 = (unsigned int)*(a4 - 2);
                      }
                      if ( (v7 & 0x40) != 0 && v21 < 0 )
                      {
                        v21 = -v21;
                        v7 |= 0x100u;
                      }
                      v24 = (unsigned int)v21;
                      if ( (v7 & 0x9000) != 0 )
                        v24 = v21;
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
                      v25 = &v63;
                      v26 = v24 != 0 ? v10 : 0;
                      v27 = v58;
                      v48 = v26;
                      v28 = v26;
                      while ( 1 )
                      {
                        v17 = (unsigned int)v9--;
                        if ( (int)v17 <= 0 && !v24 )
                          break;
                        v29 = v24 % v20;
                        v24 /= v20;
                        v30 = v29 + 48;
                        if ( (int)v29 + 48 > 57 )
                          v30 = v29 + v27 + 48;
                        *v25-- = v30;
                      }
                      v51 = v9;
                      v31 = (unsigned int)&v62 + 367 - (_DWORD)v25;
                      v14 = (wchar_t *)(v25 + 1);
                      SizeConverted = v31;
                      v10 = v28;
                      if ( (v7 & 0x200) != 0 )
                      {
                        if ( !v31 || (v48 = v28, *(_BYTE *)v14 != 48) )
                        {
                          v14 = (wchar_t *)((char *)v14 - 1);
                          v48 = v28;
                          SizeConverted = v31 + 1;
                          v10 = v28;
                          *(_BYTE *)v14 = 48;
                        }
                      }
LABEL_25:
                      if ( v57 )
                        goto LABEL_191;
                      if ( (v7 & 0x40) == 0 )
                        goto LABEL_122;
                      if ( (v7 & 0x100) != 0 )
                      {
                        v50[0] = 45;
                        goto LABEL_119;
                      }
                      if ( (v7 & 1) != 0 )
                      {
                        v50[0] = 43;
                        goto LABEL_119;
                      }
                      if ( (v7 & 2) != 0 )
                      {
                        v50[0] = 32;
LABEL_119:
                        v33 = 1;
                        v48 = 1;
                      }
                      else
                      {
LABEL_122:
                        v33 = v48;
                      }
                      v34 = v53 - SizeConverted - v33;
                      if ( (v7 & 0xC) == 0 )
                      {
                        LOBYTE(v17) = 32;
                        write_multi_char(v17, v34, v56, &v49);
                      }
                      write_string(v50, v33, v56, &v49);
                      v36 = v56;
                      if ( (v7 & 0xC) == 8 )
                      {
                        LOBYTE(v35) = 48;
                        write_multi_char(v35, v34, v56, &v49);
                      }
                      v37 = SizeConverted;
                      if ( v54 && SizeConverted > 0 )
                      {
                        v38 = v14;
                        while ( 1 )
                        {
                          v39 = *v38++;
                          --v37;
                          if ( wctomb_s(&v59, v64, 6uLL, v39) || !v59 )
                            break;
                          write_string(v64, (unsigned int)v59, v56, &v49);
                          if ( !v37 )
                            goto LABEL_136;
                        }
                        v11 = -1;
                        v49 = -1;
                      }
                      else
                      {
                        write_string(v14, (unsigned int)SizeConverted, v36, &v49);
LABEL_136:
                        v11 = v49;
                      }
                      if ( v11 >= 0 && (v7 & 4) != 0 )
                      {
                        LOBYTE(v40) = 32;
                        write_multi_char(v40, v34, v56, &v49);
                        v11 = v49;
                      }
                      v9 = v51;
                      v10 = v48;
                      goto LABEL_191;
                    }
LABEL_50:
                    a4 += 2;
                    if ( (v7 & 0x810) != 0 )
                    {
                      if ( wctomb_s(&SizeConverted, MbCh, 0x200uLL, *((_WORD *)a4 - 4)) )
                        v57 = 1;
                    }
                    else
                    {
                      MbCh[0] = *((_BYTE *)a4 - 8);
                      SizeConverted = 1;
                    }
                    v14 = (wchar_t *)MbCh;
                    goto LABEL_25;
                  }
LABEL_80:
                  v22 = 7;
LABEL_81:
                  v58 = v22;
                  if ( (v7 & 0x80u) != 0 )
                  {
                    v50[0] = 48;
                    v50[1] = v22 + 81;
                    v10 = 2;
                  }
                  v20 = 16LL;
                  goto LABEL_57;
                }
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x800u;
              }
              v14 = *(wchar_t **)a4;
              v17 = (unsigned int)v9;
              if ( v9 == -1 )
                v17 = 0x7FFFFFFFLL;
              a4 += 2;
              if ( (v7 & 0x810) != 0 )
              {
                v19 = v14;
                if ( !v14 )
                {
                  v14 = L"(null)";
                  v19 = L"(null)";
                }
                v54 = 1;
                while ( (_DWORD)v17 )
                {
                  v17 = (unsigned int)(v17 - 1);
                  if ( !*v19 )
                    break;
                  ++v19;
                }
                v23 = v19 - v14;
              }
              else
              {
                v23 = (__int64)"(null)";
                if ( v14 )
                  v23 = (__int64)v14;
                v14 = (wchar_t *)v23;
                while ( (_DWORD)v17 )
                {
                  v17 = (unsigned int)(v17 - 1);
                  if ( !*(_BYTE *)v23 )
                    break;
                  ++v23;
                }
                LODWORD(v23) = v23 - (_DWORD)v14;
              }
              SizeConverted = v23;
              goto LABEL_25;
            }
            break;
        }
LABEL_192:
        v13 = *v5;
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
