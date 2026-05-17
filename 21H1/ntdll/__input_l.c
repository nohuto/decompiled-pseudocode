/*
 * XREFs of __input_l @ 0x4B2FE430
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     _isleadbyte @ 0x4B2F85A1 (_isleadbyte.c)
 *     ___pctype_func @ 0x4B2FB4F6 (___pctype_func.c)
 *     ReadString @ 0x4B2FE156 (ReadString.c)
 *     ReadStringDelimited @ 0x4B2FE2D6 (ReadStringDelimited.c)
 *     _hextodec @ 0x4B2FE3D5 (_hextodec.c)
 *     _inc @ 0x4B2FE3FC (_inc.c)
 *     _whiteout @ 0x4B2FEB50 (_whiteout.c)
 *     __ungetc_nolock @ 0x4B2FEE9C (__ungetc_nolock.c)
 */

int __cdecl _input_l(FILE *Stream, unsigned __int8 *a2, int a3, int a4)
{
  unsigned __int8 *v4; // edi
  int v5; // ebx
  int v6; // ecx
  unsigned __int8 v7; // al
  int v8; // eax
  int v9; // esi
  int v10; // edx
  char v11; // bh
  char v12; // bl
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  bool v18; // zf
  char v19; // al
  char v20; // dl
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  unsigned __int8 v25; // cl
  unsigned __int8 v26; // al
  int *v27; // esi
  unsigned int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  char v32; // al
  int v33; // esi
  int v34; // esi
  int v35; // eax
  char v36; // al
  unsigned int v37; // esi
  int v38; // ecx
  unsigned int v39; // eax
  __int64 v40; // rax
  int v41; // ecx
  unsigned int v42; // esi
  int v43; // eax
  int v44; // ecx
  int v45; // esi
  int v46; // esi
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  char v53; // [esp-4h] [ebp-54h]
  int v54; // [esp-4h] [ebp-54h]
  int v55; // [esp+Ch] [ebp-44h]
  int v56; // [esp+10h] [ebp-40h] BYREF
  int *v57; // [esp+14h] [ebp-3Ch]
  int v58; // [esp+18h] [ebp-38h]
  int v59; // [esp+1Ch] [ebp-34h] BYREF
  int v60; // [esp+20h] [ebp-30h]
  int v61; // [esp+24h] [ebp-2Ch]
  int v62; // [esp+28h] [ebp-28h]
  int v63; // [esp+2Ch] [ebp-24h]
  int v64; // [esp+30h] [ebp-20h]
  int v65; // [esp+34h] [ebp-1Ch]
  int v66; // [esp+38h] [ebp-18h]
  int Character; // [esp+3Ch] [ebp-14h] BYREF
  int v68; // [esp+40h] [ebp-10h]
  int v69; // [esp+44h] [ebp-Ch] BYREF
  char v70; // [esp+4Ah] [ebp-6h]
  char v71; // [esp+4Bh] [ebp-5h]
  unsigned __int8 v72; // [esp+4Ch] [ebp-4h]
  char v73; // [esp+4Dh] [ebp-3h]
  char v74; // [esp+4Eh] [ebp-2h]
  char v75; // [esp+4Fh] [ebp-1h]

  v4 = a2;
  v5 = 0;
  Character = 0;
  v58 = 0;
  if ( !a2 || !Stream )
  {
    _invalid_parameter();
    return -1;
  }
  v6 = 0;
  v71 = 0;
  v69 = 0;
  v7 = *a2;
  v59 = 0;
  if ( !v7 )
    return v6;
  v63 = v56;
  v66 = v55;
  while ( 1 )
  {
    if ( (__pctype_func()[v7] & 8) != 0 )
    {
      --v69;
      v8 = whiteout(&v69, Stream);
      if ( v8 != -1 )
        _ungetc_nolock(v8, Stream);
      do
        v9 = *++v4;
      while ( (__pctype_func()[v9] & 8) != 0 );
      v10 = -1;
      goto LABEL_193;
    }
    if ( *v4 == 37 )
      break;
LABEL_187:
    ++v69;
    v5 = inc(Stream);
    v49 = *v4++;
    Character = v5;
    if ( v49 != v5 )
      goto LABEL_199;
    if ( isleadbyte((unsigned __int8)v5) )
    {
      v50 = inc(Stream);
      v51 = *v4++;
      if ( v51 != v50 )
      {
        v10 = -1;
        if ( v50 != -1 )
        {
          _ungetc_nolock(v50, Stream);
LABEL_199:
          v10 = -1;
        }
        if ( v5 == -1 )
          goto LABEL_204;
        goto LABEL_201;
      }
    }
LABEL_190:
    v10 = -1;
    if ( v5 == -1 && (*v4 != 37 || v4[1] != 110) )
      goto LABEL_204;
LABEL_193:
    v7 = *v4;
    if ( !*v4 )
      goto LABEL_203;
  }
  if ( v4[1] == 37 )
  {
    ++v4;
    goto LABEL_187;
  }
  v11 = 1;
  v62 = 0;
  v12 = 0;
  v60 = 0;
  v65 = 0;
  v68 = 0;
  v70 = 0;
  v74 = 0;
  v75 = 0;
  v61 = 0;
  do
  {
    a2 = ++v4;
    v72 = *v4;
    v13 = v72;
    if ( (__pctype_func()[v13] & 4) != 0 )
    {
      ++v65;
      v68 = v13 + 10 * v68 - 48;
LABEL_53:
      v19 = v74;
      goto LABEL_54;
    }
    if ( v72 > 0x68u )
    {
      v21 = v13 - 106;
      if ( !v21 )
        goto LABEL_31;
      v22 = v21 - 2;
      if ( v22 )
      {
        v23 = v22 - 8;
        if ( v23 )
        {
          v24 = v23 - 3;
          if ( !v24 )
            goto LABEL_40;
          if ( v24 != 3 )
            goto LABEL_52;
        }
        goto LABEL_31;
      }
      if ( v4[1] == 108 )
      {
        ++v4;
        goto LABEL_37;
      }
      ++v11;
LABEL_40:
      v20 = v75 + 1;
LABEL_25:
      v19 = v74;
      v75 = v20;
      continue;
    }
    if ( v72 == 104 )
    {
      --v11;
      v20 = v75 - 1;
      goto LABEL_25;
    }
    v14 = v13 - 42;
    if ( v14 )
    {
      v15 = v14 - 28;
      if ( !v15 )
        goto LABEL_53;
      v16 = v15 - 3;
      if ( v16 )
      {
        v17 = v16 - 3;
        if ( !v17 )
        {
          ++v11;
          goto LABEL_53;
        }
        v18 = v17 == 2;
        goto LABEL_51;
      }
LABEL_31:
      if ( v72 == 73 )
      {
        v25 = v4[1];
        if ( v25 == 54 && v4[2] == 52 )
        {
          v4 += 2;
LABEL_37:
          a2 = v4;
LABEL_38:
          ++v61;
          v66 = 0;
          v63 = 0;
          goto LABEL_53;
        }
        if ( v25 == 51 && v4[2] == 50 )
        {
          v4 += 2;
          a2 = v4;
          goto LABEL_53;
        }
      }
      else if ( v72 == 106 )
      {
        goto LABEL_38;
      }
      v26 = v4[1];
      if ( v26 == 100 || v26 == 105 || v26 == 111 || v26 == 117 || v26 == 120 )
        goto LABEL_53;
      v18 = v26 == 88;
LABEL_51:
      if ( v18 )
        goto LABEL_53;
LABEL_52:
      ++v12;
      goto LABEL_53;
    }
    v19 = ++v74;
LABEL_54:
    v20 = v75;
  }
  while ( !v12 );
  v72 = v11;
  v5 = Character;
  if ( v19 )
  {
    v27 = 0;
  }
  else
  {
    v58 = a4;
    a4 += 4;
    v27 = *(int **)(a4 - 4);
  }
  v57 = v27;
  v56 = (int)v27;
  v73 = 0;
  if ( !v20 )
  {
    if ( *v4 != 83 && *v4 != 67 )
    {
      v10 = -1;
      v75 = -1;
      goto LABEL_65;
    }
    v75 = 1;
  }
  v10 = -1;
LABEL_65:
  v28 = *v4 | 0x20;
  v64 = v28;
  if ( v28 == 110 )
  {
LABEL_72:
    v30 = v65;
    if ( !v65 || v68 )
    {
      if ( v28 > 0x70 )
      {
        switch ( v28 )
        {
          case 's':
            v53 = 32;
            break;
          case 'u':
            goto LABEL_81;
          case 'x':
            goto LABEL_87;
          case '{':
            v53 = 64;
            break;
          default:
            goto LABEL_96;
        }
        v32 = v53;
        if ( !v65 )
        {
LABEL_177:
          if ( v75 > 0 )
            v32 |= 2u;
          if ( v74 )
            v32 |= 4u;
          if ( v28 == 123 )
          {
            v48 = ReadStringDelimited(v32, &a2, &Character, &v69, &v56, v68, Stream, &v59);
            v4 = a2;
          }
          else
          {
            v48 = ReadString(v32, 0, &Character, &v69, &v56, v68, Stream, &v59);
          }
          v5 = Character;
          if ( v48 )
            goto LABEL_202;
          goto LABEL_185;
        }
      }
      else
      {
        if ( v28 == 112 )
        {
          v72 = 1;
          goto LABEL_82;
        }
        if ( v28 != 99 )
        {
          if ( v28 != 100 )
          {
            if ( v28 != 105 )
            {
              if ( v28 == 110 )
              {
                v31 = v69;
                if ( v74 )
                {
LABEL_185:
                  ++v71;
                  ++v4;
                  goto LABEL_190;
                }
LABEL_169:
                if ( v61 )
                {
                  *v27 = v66;
                  v27[1] = v63;
                }
                else if ( v72 )
                {
                  *v27 = v31;
                }
                else
                {
                  *(_WORD *)v27 = v31;
                }
                goto LABEL_185;
              }
              if ( v28 == 111 )
                goto LABEL_81;
LABEL_96:
              if ( *v4 != v5 )
                goto LABEL_195;
              --v71;
              if ( !v74 )
                a4 = v58;
              goto LABEL_185;
            }
            v64 = 100;
LABEL_87:
            if ( v5 == 45 )
            {
              v70 = 1;
            }
            else if ( v5 != 43 )
            {
              goto LABEL_104;
            }
            if ( --v68 || !v65 )
            {
              v33 = ++v69;
              v5 = inc(Stream);
              Character = v5;
              goto LABEL_105;
            }
            v73 = 1;
LABEL_104:
            v33 = v69;
LABEL_105:
            if ( v5 != 48 )
            {
LABEL_127:
              v28 = v64;
              goto LABEL_128;
            }
            v34 = v33 + 1;
            v69 = v34;
            v35 = inc(Stream);
            v5 = v35;
            Character = v35;
            if ( (_BYTE)v35 == 120 || (_BYTE)v35 == 88 )
            {
              v69 = v34 + 1;
              v5 = inc(Stream);
              Character = v5;
              if ( v65 )
              {
                v68 -= 2;
                if ( v68 < 1 )
                  ++v73;
              }
              v54 = 120;
            }
            else
            {
              v28 = v64;
              v60 = 1;
              if ( v64 == 120 )
              {
                v69 = v34 - 1;
                if ( v35 != -1 )
                {
                  _ungetc_nolock(v35, Stream);
                  v28 = v64;
                }
                v5 = 48;
                Character = 48;
                goto LABEL_128;
              }
              if ( v65 )
              {
                if ( !--v68 )
                  ++v73;
              }
              v54 = 111;
            }
            v28 = v54;
            v64 = v54;
            goto LABEL_128;
          }
LABEL_81:
          v30 = v65;
LABEL_82:
          if ( v5 == 45 )
          {
            v70 = 1;
            goto LABEL_123;
          }
          if ( v5 == 43 )
          {
LABEL_123:
            if ( !--v68 && v30 )
            {
              v36 = 1;
LABEL_129:
              if ( v61 )
              {
                if ( !v36 )
                {
                  while ( 1 )
                  {
                    if ( v28 == 120 || v28 == 112 )
                    {
                      if ( SLOBYTE(__pctype_func()[(unsigned __int8)v5]) >= 0 )
                      {
LABEL_143:
                        --v69;
                        if ( v5 != -1 )
                          _ungetc_nolock(v5, Stream);
                        break;
                      }
                      v37 = __PAIR64__(v63, v66) >> 28;
                      v66 *= 16;
                      v39 = hextodec(v5);
                      v38 = v66;
                      v5 = v39;
                      Character = v39;
                    }
                    else
                    {
                      if ( (__pctype_func()[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_143;
                      if ( v64 == 111 )
                      {
                        if ( v5 >= 56 )
                          goto LABEL_143;
                        v37 = __PAIR64__(v63, v66) >> 29;
                        v38 = 8 * v66;
                      }
                      else
                      {
                        v37 = (10 * __PAIR64__(v63, v66)) >> 32;
                        v38 = 10 * v66;
                      }
                    }
                    ++v60;
                    v40 = v5 - 48;
                    v66 = v40 + v38;
                    v42 = (v40 + __PAIR64__(v37, v38)) >> 32;
                    v41 = v40 + v38;
                    v63 = v42;
                    if ( v65 )
                    {
                      if ( !--v68 )
                        goto LABEL_146;
                    }
                    ++v69;
                    v43 = inc(Stream);
                    v28 = v64;
                    v5 = v43;
                    Character = v43;
                  }
                }
                v42 = v63;
                v41 = v66;
LABEL_146:
                if ( v70 )
                {
                  v44 = -v41;
                  v66 = v44;
                  v63 = (unsigned __int64)-__SPAIR64__(v42, v44) >> 32;
                }
              }
              else
              {
                if ( !v36 )
                {
                  while ( 1 )
                  {
                    if ( v28 == 120 || v28 == 112 )
                    {
                      if ( SLOBYTE(__pctype_func()[(unsigned __int8)v5]) >= 0 )
                      {
LABEL_161:
                        --v69;
                        if ( v5 != -1 )
                          _ungetc_nolock(v5, Stream);
                        break;
                      }
                      v45 = 16 * v62;
                      v5 = hextodec(v5);
                      Character = v5;
                    }
                    else
                    {
                      if ( (__pctype_func()[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_161;
                      if ( v64 == 111 )
                      {
                        if ( v5 >= 56 )
                          goto LABEL_161;
                        v45 = 8 * v62;
                      }
                      else
                      {
                        v45 = 10 * v62;
                      }
                    }
                    ++v60;
                    v46 = v5 + v45 - 48;
                    v62 = v46;
                    if ( v65 )
                    {
                      if ( !--v68 )
                        goto LABEL_164;
                    }
                    ++v69;
                    v47 = inc(Stream);
                    v28 = v64;
                    v5 = v47;
                    Character = v47;
                  }
                }
                v46 = v62;
LABEL_164:
                if ( v70 )
                  v62 = -v46;
              }
              if ( !v60 )
                goto LABEL_202;
              if ( v74 )
                goto LABEL_185;
              ++v59;
              v27 = v57;
              v31 = v62;
              goto LABEL_169;
            }
            ++v69;
            v5 = inc(Stream);
            Character = v5;
            goto LABEL_127;
          }
LABEL_128:
          v36 = v73;
          goto LABEL_129;
        }
        v32 = 16;
        if ( !v65 )
          ++v68;
      }
      v32 |= 1u;
      goto LABEL_177;
    }
LABEL_195:
    if ( v5 == -1 )
      goto LABEL_204;
LABEL_201:
    _ungetc_nolock(v5, Stream);
LABEL_202:
    v10 = -1;
LABEL_203:
    if ( v5 == -1 )
      goto LABEL_204;
    return v59;
  }
  if ( v28 == 99 || v28 == 123 )
  {
    ++v69;
    v29 = inc(Stream);
  }
  else
  {
    v29 = whiteout(&v69, Stream);
  }
  v5 = v29;
  v10 = -1;
  Character = v29;
  if ( v29 != -1 )
  {
    v28 = v64;
    goto LABEL_72;
  }
LABEL_204:
  if ( v59 || v71 )
    return v59;
  return v10;
}
