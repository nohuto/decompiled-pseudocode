/*
 * XREFs of __output_l @ 0x4B2FB9B0
 * Callers:
 *     __snprintf @ 0x4B2F7080 (__snprintf.c)
 *     __vsprintf_l @ 0x4B2F766F (__vsprintf_l.c)
 *     __vsnprintf_l @ 0x4B2F781D (__vsnprintf_l.c)
 *     _sprintf @ 0x4B2F9900 (_sprintf.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __aulldvrm @ 0x4B2F6720 (__aulldvrm.c)
 *     write_char @ 0x4B2FC2B8 (write_char.c)
 *     write_multi_char @ 0x4B2FC302 (write_multi_char.c)
 *     write_string @ 0x4B2FC330 (write_string.c)
 *     __get_printf_count_output @ 0x4B2FED52 (__get_printf_count_output.c)
 *     _wctomb_s @ 0x4B2FEDF3 (_wctomb_s.c)
 */

int __cdecl _output_l(int a1, _BYTE *a2, int a3, char **a4)
{
  unsigned int v4; // ebx
  signed __int64 v5; // rax
  int v6; // ecx
  char *v7; // esi
  char **v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char *v12; // edi
  char v13; // cl
  char v14; // al
  int v15; // eax
  unsigned __int16 *v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  char *j; // eax
  int v20; // eax
  _DWORD *v21; // edi
  _BYTE *k; // eax
  int v23; // ecx
  char **v24; // edi
  int v25; // ebx
  char *i; // esi
  char *v27; // edi
  unsigned __int64 v28; // rcx
  int v29; // edi
  char *v30; // eax
  char *v31; // edi
  int v32; // edi
  int v33; // eax
  unsigned __int16 *v34; // ecx
  unsigned __int64 v36; // [esp-14h] [ebp-274h]
  rsize_t v37; // [esp-8h] [ebp-268h]
  rsize_t v38; // [esp-8h] [ebp-268h]
  int v39; // [esp-4h] [ebp-264h]
  wchar_t v40; // [esp+0h] [ebp-260h]
  char *v41; // [esp+10h] [ebp-250h]
  unsigned __int16 *v42; // [esp+10h] [ebp-250h]
  char v43; // [esp+14h] [ebp-24Ch]
  int v44; // [esp+18h] [ebp-248h] BYREF
  int v45; // [esp+1Ch] [ebp-244h]
  int v46; // [esp+20h] [ebp-240h]
  int v47; // [esp+24h] [ebp-23Ch]
  int v48; // [esp+28h] [ebp-238h]
  int v49; // [esp+2Ch] [ebp-234h]
  int v50; // [esp+30h] [ebp-230h]
  int v51; // [esp+34h] [ebp-22Ch]
  _BYTE v52[4]; // [esp+38h] [ebp-228h] BYREF
  int v53; // [esp+3Ch] [ebp-224h]
  char **v54; // [esp+40h] [ebp-220h]
  int v55; // [esp+44h] [ebp-21Ch]
  int SizeConverted; // [esp+48h] [ebp-218h] BYREF
  unsigned int v57; // [esp+4Ch] [ebp-214h]
  int v58; // [esp+50h] [ebp-210h] BYREF
  char MbCh[511]; // [esp+54h] [ebp-20Ch] BYREF
  char v60; // [esp+253h] [ebp-Dh] BYREF
  char v61[8]; // [esp+254h] [ebp-Ch] BYREF
  char *v62; // [esp+26Ch] [ebp+Ch]

  v50 = a1;
  v46 = 0;
  v49 = 0;
  v53 = 0;
  v51 = 0;
  v55 = 0;
  v48 = 0;
  v4 = 0;
  v57 = 0;
  v54 = a4;
  if ( a1 && (LODWORD(v5) = a2) != 0 )
  {
    v6 = 0;
    SizeConverted = 0;
    v47 = 0;
    BYTE4(v5) = *a2;
    v58 = 0;
    v43 = BYTE4(v5);
    if ( BYTE4(v5) )
    {
      v7 = v41;
      while ( 1 )
      {
        v62 = (char *)(v5 + 1);
        if ( v6 < 0 )
          return v6;
        if ( (unsigned __int8)(BYTE4(v5) - 32) > 0x5Au )
          LODWORD(v5) = 0;
        else
          LODWORD(v5) = byte_4B286728[SBYTE4(v5)] & 0xF;
        v8 = v54;
        v47 = __lookuptable[8 * (_DWORD)v5 + v47] >> 4;
        switch ( v47 )
        {
          case 0:
            goto LABEL_61;
          case 1:
            v53 = -1;
            v4 = 0;
            v55 = 0;
            v49 = 0;
            v51 = 0;
            v57 = 0;
            v48 = 0;
            goto LABEL_188;
          case 2:
            switch ( SBYTE4(v5) )
            {
              case ' ':
                v4 |= 2u;
                goto LABEL_18;
              case '#':
                v4 |= 0x80u;
                goto LABEL_18;
              case '+':
                v4 |= 1u;
                goto LABEL_18;
              case '-':
                v4 |= 4u;
                goto LABEL_18;
            }
            v6 = v58;
            if ( SBYTE4(v5) == 48 )
            {
              v4 |= 8u;
              v57 = v4;
            }
            goto LABEL_189;
          case 3:
            if ( BYTE4(v5) != 42 )
            {
              v49 = SBYTE4(v5) + 10 * v49 - 48;
              goto LABEL_188;
            }
            v9 = (int)*v54;
            v6 = v58;
            ++v54;
            v49 = v9;
            if ( v9 < 0 )
            {
              v4 |= 4u;
              v57 = v4;
              v49 = -v9;
            }
            goto LABEL_189;
          case 4:
            v10 = 0;
            goto LABEL_27;
          case 5:
            if ( BYTE4(v5) == 42 )
            {
              v11 = (int)*v54;
              v6 = v58;
              ++v54;
              v53 = v11;
              if ( v11 < 0 )
                v53 = -1;
              goto LABEL_189;
            }
            v10 = SBYTE4(v5) + 10 * v53 - 48;
LABEL_27:
            v53 = v10;
            goto LABEL_188;
          case 6:
            switch ( SBYTE4(v5) )
            {
              case 'I':
                goto LABEL_39;
              case 'h':
                v4 |= 0x20u;
                goto LABEL_18;
              case 'j':
                goto LABEL_39;
              case 'l':
                v13 = *v62;
                if ( *v62 == 108 )
                  ++v62;
                v4 |= v13 == 108 ? 4096 : 16;
                goto LABEL_18;
              case 't':
                goto LABEL_39;
              case 'w':
                v4 |= 0x800u;
                goto LABEL_18;
              case 'z':
LABEL_39:
                if ( BYTE4(v5) == 73 )
                {
                  v12 = v62;
                  if ( *v62 == 54 && v62[1] == 52 )
                  {
                    v62 += 2;
LABEL_43:
                    v4 |= 0x8000u;
LABEL_18:
                    v57 = v4;
                    goto LABEL_188;
                  }
                  if ( *v62 == 51 && v62[1] == 50 )
                  {
                    v4 &= ~0x8000u;
                    v62 += 2;
                    goto LABEL_18;
                  }
                }
                else
                {
                  if ( BYTE4(v5) == 106 )
                    goto LABEL_43;
                  v12 = v62;
                }
                v14 = *v12;
                if ( *v12 != 100 && v14 != 105 && v14 != 111 && v14 != 117 && v14 != 120 && v14 != 88 )
                {
                  v47 = 0;
LABEL_61:
                  v48 = 0;
                  write_char(v43, v50, &v58);
                }
                break;
            }
            goto LABEL_188;
          case 7:
            if ( SBYTE4(v5) <= 105 )
            {
              if ( SBYTE4(v5) != 105 )
              {
                switch ( SBYTE4(v5) )
                {
                  case 'C':
                    if ( (v4 & 0x830) == 0 )
                    {
                      v4 |= 0x800u;
                      v57 = v4;
                    }
                    break;
                  case 'S':
                    if ( (v4 & 0x830) == 0 )
                    {
                      v4 |= 0x800u;
                      v57 = v4;
                    }
                    goto LABEL_86;
                  case 'X':
                    goto LABEL_120;
                  case 'Z':
                    v16 = (unsigned __int16 *)*v54++;
                    if ( v16 && (v7 = (char *)*((_DWORD *)v16 + 1)) != 0 )
                    {
                      v17 = *v16;
                      if ( v16[1] < (unsigned __int16)v17 )
                        goto LABEL_191;
                      if ( (v4 & 0x800) != 0 )
                      {
                        if ( (v17 & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                          goto LABEL_191;
                        SizeConverted = v17 >> 1;
                        v48 = 1;
                      }
                      else
                      {
                        SizeConverted = *v16;
                        v48 = 0;
                      }
                    }
                    else
                    {
                      v7 = "(null)";
                      SizeConverted = 6;
                    }
                    goto LABEL_70;
                  case 'c':
                    break;
                  case 'd':
                    goto LABEL_102;
                  default:
                    goto LABEL_70;
                }
                v21 = ++v54;
                if ( (v4 & 0x810) != 0 )
                {
                  HIDWORD(v37) = *((unsigned __int16 *)v21 - 2);
                  LODWORD(v37) = 512;
                  if ( wctomb_s(&SizeConverted, MbCh, v37, v40) )
                    v55 = 1;
                }
                else
                {
                  MbCh[0] = *((_BYTE *)v21 - 4);
                  SizeConverted = 1;
                }
                v7 = MbCh;
                goto LABEL_70;
              }
LABEL_102:
              v4 |= 0x40u;
              SizeConverted = 10;
              goto LABEL_126;
            }
            if ( SBYTE4(v5) != 110 )
            {
              if ( SBYTE4(v5) != 111 )
              {
                if ( SBYTE4(v5) != 112 )
                {
                  if ( SBYTE4(v5) != 115 )
                  {
                    if ( SBYTE4(v5) != 117 )
                    {
                      if ( SBYTE4(v5) == 120 )
                      {
                        v39 = 39;
                        goto LABEL_121;
                      }
LABEL_70:
                      v15 = v55;
                      goto LABEL_71;
                    }
                    SizeConverted = 10;
LABEL_127:
                    if ( (v4 & 0x8000) != 0 || (v4 & 0x1000) != 0 )
                    {
                      v23 = (int)*v54;
                      v24 = v54 + 2;
                      HIDWORD(v5) = v54[1];
                    }
                    else
                    {
                      v24 = ++v54;
                      if ( (v4 & 0x20) != 0 )
                      {
                        if ( (v4 & 0x40) != 0 )
                          LODWORD(v5) = *((__int16 *)v24 - 2);
                        else
                          LODWORD(v5) = *((unsigned __int16 *)v24 - 2);
                        v5 = (int)v5;
                        v23 = v5;
LABEL_140:
                        if ( (v4 & 0x40) != 0 && v5 < 0 )
                        {
                          v23 = -v23;
                          HIDWORD(v5) = (unsigned __int64)-__SPAIR64__(HIDWORD(v5), v23) >> 32;
                          v4 |= 0x100u;
                          v57 = v4;
                        }
                        if ( (v4 & 0x9000) == 0 )
                          HIDWORD(v5) = 0;
                        if ( v53 >= 0 )
                        {
                          v57 = v4 & 0xFFFFFFF7;
                          v25 = v53;
                          if ( v53 > 512 )
                            v25 = 512;
                        }
                        else
                        {
                          v25 = 1;
                        }
                        if ( !__PAIR64__(v23, HIDWORD(v5)) )
                          v51 = 0;
                        for ( i = &v60; ; --i )
                        {
                          v27 = i;
                          v53 = v25 - 1;
                          if ( v25 <= 0 && !__PAIR64__(v23, HIDWORD(v5)) )
                            break;
                          v36 = __PAIR64__(HIDWORD(v5), v23);
                          v28 = __PAIR64__(HIDWORD(v5), v23) % (unsigned int)SizeConverted;
                          v5 = v36 / (unsigned int)SizeConverted;
                          v29 = v28;
                          v23 = v5;
                          LOBYTE(v5) = v29 + 48;
                          if ( v29 + 48 > 57 )
                            LOBYTE(v5) = v29 + v46 + 48;
                          v25 = v53;
                          *i = v5;
                        }
                        v4 = v57;
                        v30 = (char *)(&v60 - i);
                        v7 = i + 1;
                        SizeConverted = (int)v30;
                        if ( (v57 & 0x200) == 0 || v30 && *v7 == 48 )
                          goto LABEL_70;
                        v7 = v27;
                        v20 = (int)(v30 + 1);
                        *v27 = 48;
LABEL_118:
                        SizeConverted = v20;
                        goto LABEL_70;
                      }
                      if ( (v4 & 0x40) != 0 )
                        v5 = (int)*(v24 - 1);
                      else
                        v5 = 0LL;
                      v23 = (int)*(v24 - 1);
                    }
                    v54 = v24;
                    goto LABEL_140;
                  }
LABEL_86:
                  v18 = 0x7FFFFFFF;
                  if ( v53 != -1 )
                    v18 = v53;
                  v7 = *v54++;
                  if ( (v4 & 0x810) != 0 )
                  {
                    if ( !v7 )
                      v7 = (char *)L"(null)";
                    v48 = 1;
                    for ( j = v7; v18; j += 2 )
                    {
                      --v18;
                      if ( !*(_WORD *)j )
                        break;
                    }
                    v20 = (j - v7) >> 1;
                  }
                  else
                  {
                    if ( !v7 )
                      v7 = "(null)";
                    for ( k = v7; v18; ++k )
                    {
                      --v18;
                      if ( !*k )
                        break;
                    }
                    v20 = k - v7;
                  }
                  goto LABEL_118;
                }
                v53 = 8;
LABEL_120:
                v39 = 7;
LABEL_121:
                v46 = v39;
                if ( (v4 & 0x80u) != 0 )
                {
                  v52[0] = 48;
                  v52[1] = v39 + 81;
                  v51 = 2;
                }
                SizeConverted = 16;
                goto LABEL_127;
              }
              SizeConverted = 8;
              if ( (v4 & 0x80u) == 0 )
                goto LABEL_127;
              v4 |= 0x200u;
              SizeConverted = 8;
LABEL_126:
              v57 = v4;
              goto LABEL_127;
            }
            ++v54;
            v31 = *v8;
            if ( !_get_printf_count_output() )
              goto LABEL_191;
            if ( (v4 & 0x20) != 0 )
              *(_WORD *)v31 = v58;
            else
              *(_DWORD *)v31 = v58;
            v15 = 1;
            v55 = 1;
LABEL_71:
            if ( v15 )
              goto LABEL_188;
            if ( (v4 & 0x40) == 0 )
              goto LABEL_171;
            if ( (v4 & 0x100) != 0 )
            {
              v52[0] = 45;
            }
            else if ( (v4 & 1) != 0 )
            {
              v52[0] = 43;
            }
            else
            {
              if ( (v4 & 2) == 0 )
                goto LABEL_171;
              v52[0] = 32;
            }
            v51 = 1;
LABEL_171:
            v32 = v49 - SizeConverted - v51;
            v45 = v4 & 0xC;
            if ( (v4 & 0xC) == 0 )
              write_multi_char(32, v49 - SizeConverted - v51, v50, &v58);
            write_string(v52, v51, v50, &v58);
            if ( v45 == 8 )
              write_multi_char(48, v32, v50, &v58);
            v33 = SizeConverted;
            if ( v48 && SizeConverted > 0 )
            {
              v34 = (unsigned __int16 *)v7;
              while ( 1 )
              {
                v45 = v33 - 1;
                HIDWORD(v38) = *v34;
                LODWORD(v38) = 6;
                v42 = v34 + 1;
                if ( wctomb_s(&v44, v61, v38, v40) || !v44 )
                  break;
                write_string(v61, v44, v50, &v58);
                v33 = v45;
                v34 = v42;
                if ( !v45 )
                  goto LABEL_184;
              }
              v6 = -1;
              v58 = -1;
            }
            else
            {
              write_string(v7, SizeConverted, v50, &v58);
LABEL_184:
              v6 = v58;
            }
            if ( v6 >= 0 && (v4 & 4) != 0 )
            {
              write_multi_char(32, v32, v50, &v58);
LABEL_188:
              v6 = v58;
            }
LABEL_189:
            LODWORD(v5) = v62;
            BYTE4(v5) = *v62;
            v43 = *v62;
            if ( !*v62 )
              return v6;
            break;
          default:
            goto LABEL_188;
        }
      }
    }
    return v6;
  }
  else
  {
LABEL_191:
    _invalid_parameter();
    return -1;
  }
}
