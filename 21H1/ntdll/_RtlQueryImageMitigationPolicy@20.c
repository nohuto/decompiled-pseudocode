/*
 * XREFs of _RtlQueryImageMitigationPolicy@20 @ 0x4B33FE30
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpQueryEafPlusModuleList@8 @ 0x4B342700 (_RtlpQueryEafPlusModuleList@8.c)
 */

int __stdcall RtlQueryImageMitigationPolicy(_WORD *a1, int a2, char a3, char *a4, int a5)
{
  int v5; // ebx
  int result; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int v11; // edx
  int v12; // edi
  bool v13; // zf
  unsigned int v14; // edi
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // edi
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  unsigned int v25; // ecx
  bool v26; // zf
  int v27; // eax
  int v28; // edi
  unsigned int v29; // ecx
  int v30; // eax
  int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // edi
  int v37; // eax
  int v38; // eax
  unsigned int v39; // eax
  int v40; // edi
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  int v43; // edi
  int v44; // ecx
  unsigned int v45; // eax
  int v46; // edi
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  int v49; // eax
  int v50; // eax
  unsigned int v51; // ecx
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // eax
  unsigned int v55; // ecx
  int v56; // eax
  unsigned int v57; // edx
  int v58; // edi
  int v59; // ecx
  unsigned int v60; // edx
  int v61; // ecx
  int v62; // eax
  unsigned int v63; // ecx
  int v64; // edi
  HANDLE v65; // eax
  int v66; // eax
  unsigned int v67; // ecx
  int ValueKey; // [esp+10h] [ebp-470h]
  unsigned int v69; // [esp+14h] [ebp-46Ch]
  int v70; // [esp+14h] [ebp-46Ch]
  HANDLE Handle[2]; // [esp+18h] [ebp-468h] BYREF
  _DWORD v72[2]; // [esp+20h] [ebp-460h] BYREF
  unsigned int v73; // [esp+28h] [ebp-458h] BYREF
  int v74; // [esp+2Ch] [ebp-454h]
  _DWORD v75[2]; // [esp+30h] [ebp-450h] BYREF
  _DWORD v76[6]; // [esp+38h] [ebp-448h] BYREF
  _DWORD v77[2]; // [esp+50h] [ebp-430h] BYREF
  size_t Size; // [esp+58h] [ebp-428h]
  _DWORD Src[7]; // [esp+5Ch] [ebp-424h] BYREF
  _BYTE v80[1028]; // [esp+78h] [ebp-408h] BYREF
  int v81; // [esp+490h] [ebp+10h]

  v73 = a3 & 4;
  v81 = a3 & 8;
  v5 = 0;
  Handle[0] = 0;
  memset(v76, 0, sizeof(v76));
  result = RtlInitUnicodeStringEx((int)v75, a1);
  if ( result >= 0 )
  {
    result = v81
           ? RtlInitUnicodeStringEx((int)v72, L"MitigationAuditOptions")
           : RtlInitUnicodeStringEx((int)v72, L"MitigationOptions");
    ValueKey = result;
    if ( result >= 0 )
    {
      v7 = v73;
      if ( v73 )
      {
        if ( LOWORD(v75[0]) )
          return -1073741811;
      }
      else
      {
        if ( LOWORD(v75[0]) )
        {
          result = RtlpOpenImageFileOptionsKeyEx((unsigned __int16 *)v75, 9, 0, Handle);
        }
        else
        {
          v77[0] = 24;
          v77[1] = 0;
          Src[0] = 576;
          Size = (size_t)&dword_4B281748;
          Src[1] = 0;
          Src[2] = 0;
          result = ZwOpenKey((int)Handle, 9, (int)v77);
        }
        v7 = v73;
        ValueKey = result;
      }
      if ( result >= 0 )
      {
        if ( v7 )
        {
          if ( v81 )
          {
            v10 = v76[0] & 0xCCCCCCCC | 0x22222222;
            v9 = v76[1] & 0xCCCCCCCC | 0x22222222;
          }
          else
          {
            v10 = v76[0] & 0xCCCCCCCC | 0x22111211;
            v9 = v76[1] & 0xCCCCCCCC | 0x22222122;
          }
          v69 = v76[2] & 0xCCCCFCCC | 0x22220222;
          v8 = v76[3] & 0xCCCCFCCC | 0x22220222;
          Handle[0] = (HANDLE)(v76[4] & 0xFFFCFFCC | 0x20022);
LABEL_26:
          v75[0] = v10;
          v73 = v9;
          v72[0] = v8;
          switch ( a2 )
          {
            case 0:
              if ( a5 != 8 )
                return -1073741811;
              goto LABEL_28;
            case 1:
              if ( a5 != 24 )
                return -1073741811;
              v72[0] = 0;
              Handle[0] = 0;
              memset(a4, 0, 0x18u);
              v14 = v75[0];
              v15 = v73;
              v70 = __PAIR64__(v73, v75[0]) >> 8;
              if ( (v75[0] & 0x300) != 0 )
              {
                switch ( BYTE1(v75[0]) & 3 )
                {
                  case 1:
                    v16 = 0;
                    goto LABEL_48;
                  case 2:
                    v15 = v73;
                    v17 = 2;
                    *(_DWORD *)a4 = 2;
                    *((_DWORD *)a4 + 1) = 0;
                    Handle[0] = 0;
                    goto LABEL_51;
                  case 3:
                    v16 = 8;
                    v72[0] = 0;
LABEL_48:
                    v17 = v16 | 1;
                    Handle[0] = (HANDLE)v72[0];
                    *((_DWORD *)a4 + 1) = v72[0];
                    v14 = v75[0];
                    *(_DWORD *)a4 = v17;
                    goto LABEL_51;
                }
              }
              else
              {
                Handle[0] = 0;
              }
              v17 = 0;
LABEL_51:
              if ( (v70 & 4) != 0 )
              {
                *(_DWORD *)a4 = v17 | 4;
                *((HANDLE *)a4 + 1) = Handle[0];
              }
              v18 = __PAIR64__(v15, v14) >> 16;
              v19 = 0;
              if ( (v18 & 3) != 0 )
              {
                if ( (v18 & 3) != 1 )
                {
                  if ( (v18 & 3) == 2 )
                  {
                    v20 = *((_DWORD *)a4 + 3);
                    v19 = *((_DWORD *)a4 + 2) & 0xFFFFFFFC | 2;
                    *((_DWORD *)a4 + 3) = v20;
                    *((_DWORD *)a4 + 2) = v19;
                    goto LABEL_61;
                  }
LABEL_60:
                  v20 = 0;
LABEL_61:
                  v13 = (v18 & 4) == 0;
                  v21 = v73;
                  if ( !v13 )
                  {
                    *((_DWORD *)a4 + 3) = v20;
                    *((_DWORD *)a4 + 2) = v19 | 4;
                  }
                  v22 = __PAIR64__(v21, v75[0]) >> 20;
                  v23 = (__PAIR64__(v21, v75[0]) >> 20) & 3;
                  v75[0] = v22;
                  if ( v23 )
                  {
                    v24 = v23 - 1;
                    if ( v24 )
                    {
                      if ( v24 != 1 )
                      {
LABEL_71:
                        v26 = (v22 & 4) == 0;
                        goto LABEL_72;
                      }
                      v25 = *((_DWORD *)a4 + 4) & 0xFFFFFFFC | 2;
                    }
                    else
                    {
                      v25 = *((_DWORD *)a4 + 4) & 0xFFFFFFFC | 1;
                    }
                    *((_DWORD *)a4 + 4) = v25;
                  }
                  else
                  {
                    *((_DWORD *)a4 + 4) &= 0xFFFFFFFC;
                  }
                  *((_DWORD *)a4 + 5) = *((_DWORD *)a4 + 5);
                  LOBYTE(v22) = v75[0];
                  goto LABEL_71;
                }
                *((_DWORD *)a4 + 2) = 1;
                v19 = 1;
              }
              else
              {
                *((_DWORD *)a4 + 2) = 0;
              }
              *((_DWORD *)a4 + 3) = 0;
              goto LABEL_60;
            case 2:
              if ( a5 != 8 )
                return -1073741811;
              v9 >>= 4;
              goto LABEL_96;
            case 3:
              if ( a5 != 8 )
                return -1073741811;
              v10 = __PAIR64__(v9, v10) >> 24;
              goto LABEL_78;
            case 4:
              if ( a5 != 8 )
                return -1073741811;
              v10 = __PAIR64__(v9, v10) >> 28;
              goto LABEL_78;
            case 6:
              if ( a5 != 8 )
                return -1073741811;
              v11 = 0;
              *(_DWORD *)a4 = 0;
              *((_DWORD *)a4 + 1) = 0;
              switch ( v9 & 3 )
              {
                case 0u:
                  goto LABEL_93;
                case 1u:
                  v11 = 1;
LABEL_91:
                  *(_DWORD *)a4 = v11;
                  break;
                case 2u:
LABEL_89:
                  *(_DWORD *)a4 = 2;
                  v11 = 2;
                  break;
                default:
                  goto LABEL_93;
              }
              *((_DWORD *)a4 + 1) = 0;
LABEL_93:
              v13 = (v9 & 4) == 0;
              goto LABEL_37;
            case 7:
              if ( a5 != 16 )
                return -1073741811;
              v33 = v9 >> 8;
              *(_DWORD *)a4 = 0;
              *((_DWORD *)a4 + 1) = 0;
              *((_DWORD *)a4 + 2) = 0;
              *((_DWORD *)a4 + 3) = 0;
              v34 = 0;
              switch ( v33 & 3 )
              {
                case 0u:
                  break;
                case 1u:
                  goto LABEL_132;
                case 2u:
                  v34 = 2;
                  *(_DWORD *)a4 = 2;
                  *((_DWORD *)a4 + 1) = 0;
                  break;
                case 3u:
                  v34 = 8;
LABEL_132:
                  v34 |= 1u;
                  *((_DWORD *)a4 + 1) = 0;
                  *(_DWORD *)a4 = v34;
                  break;
              }
              if ( (v33 & 4) != 0 )
              {
                *((_DWORD *)a4 + 1) = 0;
                *(_DWORD *)a4 = v34 | 4;
              }
              v31 = __PAIR64__(v72[0], v69) >> 8;
              goto LABEL_112;
            case 8:
              if ( a5 != 16 )
                return -1073741811;
              v29 = v9 >> 12;
              *(_DWORD *)a4 = 0;
              *((_DWORD *)a4 + 1) = 0;
              *((_DWORD *)a4 + 2) = 0;
              *((_DWORD *)a4 + 3) = 0;
              v30 = 0;
              switch ( v29 & 3 )
              {
                case 0u:
                  break;
                case 1u:
                  goto LABEL_116;
                case 2u:
                  v30 = 2;
                  *(_DWORD *)a4 = 2;
                  *((_DWORD *)a4 + 1) = 0;
                  break;
                case 3u:
                  v30 = 8;
LABEL_116:
                  v30 |= 1u;
                  *((_DWORD *)a4 + 1) = 0;
                  *(_DWORD *)a4 = v30;
                  break;
              }
              if ( (v29 & 4) != 0 )
              {
                *((_DWORD *)a4 + 1) = 0;
                *(_DWORD *)a4 = v30 | 4;
              }
              v31 = __PAIR64__(v72[0], v69) >> 4;
LABEL_112:
              v32 = 0;
              if ( (v31 & 3) != 0 )
              {
                if ( (v31 & 3) == 1 )
                {
                  *((_DWORD *)a4 + 2) = 1;
                  v32 = 1;
                }
                else
                {
                  if ( (v31 & 3) != 2 )
                    goto LABEL_120;
                  v5 = *((_DWORD *)a4 + 3);
                  v32 = *((_DWORD *)a4 + 2) & 0xFFFFFFFC | 2;
                  *((_DWORD *)a4 + 2) = v32;
                }
              }
              else
              {
                *((_DWORD *)a4 + 2) = 0;
              }
              *((_DWORD *)a4 + 3) = v5;
LABEL_120:
              if ( (v31 & 4) != 0 )
              {
                *((_DWORD *)a4 + 3) = v5;
                *((_DWORD *)a4 + 2) = v32 | 4;
              }
              return ValueKey;
            case 9:
              if ( a5 != 8 )
                return -1073741811;
              v9 >>= 16;
LABEL_96:
              v28 = 0;
              *(_DWORD *)a4 = 0;
              *((_DWORD *)a4 + 1) = 0;
              v11 = 0;
              switch ( v9 & 3 )
              {
                case 0u:
                  goto LABEL_93;
                case 1u:
                  goto LABEL_101;
                case 2u:
                  goto LABEL_89;
              }
              if ( (v9 & 3) != 3 )
                goto LABEL_93;
              v28 = 8;
LABEL_101:
              v11 = v28 | 1;
              goto LABEL_91;
            case 10:
              if ( a5 != 24 )
                return -1073741811;
              memset(a4, 0, 0x18u);
              v35 = v73;
              v36 = 0;
              v37 = (v73 >> 20) & 3;
              Handle[0] = (HANDLE)(v73 >> 20);
              if ( !v37 )
                goto LABEL_142;
              v38 = v37 - 1;
              if ( v38 )
              {
                if ( v38 != 1 )
                  goto LABEL_142;
                *(_DWORD *)a4 = 2;
                v36 = 2;
              }
              else
              {
                *(_DWORD *)a4 = 1;
                v36 = 1;
              }
              *((_DWORD *)a4 + 1) = 0;
LABEL_142:
              if ( ((int)Handle[0] & 4) != 0 )
              {
                *((_DWORD *)a4 + 1) = 0;
                *(_DWORD *)a4 = v36 | 4;
              }
              v74 = 0;
              Handle[0] = (HANDLE)HIBYTE(v35);
              v39 = 0;
              if ( (v35 & 0x3000000) != 0 )
              {
                if ( (HIBYTE(v35) & 3) != 1 )
                {
                  if ( (HIBYTE(v35) & 3) == 2 )
                  {
                    v40 = *((_DWORD *)a4 + 3);
                    v39 = *((_DWORD *)a4 + 2) & 0xFFFFFFFC | 2;
                    *((_DWORD *)a4 + 3) = v40;
                    *((_DWORD *)a4 + 2) = v39;
                    goto LABEL_152;
                  }
LABEL_151:
                  v40 = 0;
LABEL_152:
                  if ( ((int)Handle[0] & 4) != 0 )
                  {
                    *((_DWORD *)a4 + 3) = v40;
                    *((_DWORD *)a4 + 2) = v39 | 4;
                  }
                  v41 = v35 >> 28;
                  v73 = v41;
                  Handle[1] = 0;
                  if ( (v41 & 3) != 0 )
                  {
                    if ( (v41 & 3) == 1 )
                    {
                      v41 = *((_DWORD *)a4 + 4) & 0xFFFFFFFC | 1;
                    }
                    else
                    {
                      if ( (v41 & 3) != 2 )
                      {
LABEL_162:
                        v26 = (v41 & 4) == 0;
                        goto LABEL_72;
                      }
                      v41 = *((_DWORD *)a4 + 4) & 0xFFFFFFFC | 2;
                    }
                    *((_DWORD *)a4 + 4) = v41;
                    LOBYTE(v41) = v73;
                  }
                  else
                  {
                    *((_DWORD *)a4 + 4) &= 0xFFFFFFFC;
                  }
                  *((_DWORD *)a4 + 5) = *((_DWORD *)a4 + 5);
                  goto LABEL_162;
                }
                *((_DWORD *)a4 + 2) = 1;
                v39 = 1;
              }
              else
              {
                *((_DWORD *)a4 + 2) = 0;
              }
              *((_DWORD *)a4 + 3) = 0;
              goto LABEL_151;
            case 11:
              if ( a5 != 1072 )
                return -1073741811;
              memset(a4, 0, 0x430u);
              v42 = v72[0];
              v43 = 0;
              Handle[0] = (HANDLE)(__PAIR64__(v72[0], v69) >> 16);
              switch ( BYTE2(v69) & 3 )
              {
                case 0:
                  goto LABEL_170;
                case 1:
                  *((_DWORD *)a4 + 6) = 1;
                  v43 = 1;
                  break;
                case 2:
                  *((_DWORD *)a4 + 6) = 2;
                  v43 = 2;
                  break;
                default:
                  goto LABEL_170;
              }
              *((_DWORD *)a4 + 7) = 0;
LABEL_170:
              if ( ((int)Handle[0] & 4) != 0 )
              {
                *((_DWORD *)a4 + 7) = 0;
                *((_DWORD *)a4 + 6) = v43 | 4;
              }
              v44 = __PAIR64__(v42, v69) >> 20;
              v45 = 0;
              if ( (v44 & 3) != 0 )
              {
                if ( (v44 & 3) != 1 )
                {
                  if ( (v44 & 3) == 2 )
                  {
                    v46 = *((_DWORD *)a4 + 9);
                    v45 = *((_DWORD *)a4 + 8) & 0xFFFFFFFC | 2;
                    *((_DWORD *)a4 + 9) = v46;
                    *((_DWORD *)a4 + 8) = v45;
                    goto LABEL_180;
                  }
LABEL_179:
                  v46 = 0;
LABEL_180:
                  v13 = (v44 & 4) == 0;
                  v47 = v72[0];
                  if ( !v13 )
                  {
                    *((_DWORD *)a4 + 9) = v46;
                    *((_DWORD *)a4 + 8) = v45 | 4;
                  }
                  Handle[0] = (HANDLE)(__PAIR64__(v47, v69) >> 24);
                  if ( (v69 & 0x3000000) != 0 )
                  {
                    if ( (HIBYTE(v69) & 3) == 1 )
                    {
                      v48 = *((_DWORD *)a4 + 10) & 0xFFFFFFFC | 1;
                    }
                    else
                    {
                      if ( (HIBYTE(v69) & 3) != 2 )
                        goto LABEL_190;
                      v48 = *((_DWORD *)a4 + 10) & 0xFFFFFFFC | 2;
                    }
                    *((_DWORD *)a4 + 10) = v48;
                    v47 = v72[0];
                  }
                  else
                  {
                    *((_DWORD *)a4 + 10) &= 0xFFFFFFFC;
                  }
                  *((_DWORD *)a4 + 11) = *((_DWORD *)a4 + 11);
LABEL_190:
                  if ( ((int)Handle[0] & 4) != 0 )
                  {
                    v49 = *((_DWORD *)a4 + 11);
                    *((_DWORD *)a4 + 10) |= 4u;
                    *((_DWORD *)a4 + 11) = v49;
                  }
                  v50 = __PAIR64__(v47, v69) >> 28;
                  if ( (v50 & 3) != 0 )
                  {
                    if ( (v50 & 3) == 1 )
                    {
                      v51 = *(_DWORD *)a4 & 0xFFFFFFFC | 1;
                    }
                    else
                    {
                      if ( (v50 & 3) != 2 )
                        goto LABEL_200;
                      v51 = *(_DWORD *)a4 & 0xFFFFFFFC | 2;
                    }
                    *(_DWORD *)a4 = v51;
                    v47 = v72[0];
                  }
                  else
                  {
                    *(_DWORD *)a4 &= 0xFFFFFFFC;
                  }
                  *((_DWORD *)a4 + 1) = *((_DWORD *)a4 + 1);
LABEL_200:
                  if ( (v50 & 4) != 0 )
                  {
                    v52 = *((_DWORD *)a4 + 1);
                    *(_DWORD *)a4 |= 4u;
                    *((_DWORD *)a4 + 1) = v52;
                  }
                  if ( (v47 & 3) != 0 )
                  {
                    if ( (v47 & 3) == 1 )
                    {
                      v53 = *((_DWORD *)a4 + 2) & 0xFFFFFFFC | 1;
                    }
                    else
                    {
                      if ( (v47 & 3) != 2 )
                        goto LABEL_210;
                      v53 = *((_DWORD *)a4 + 2) & 0xFFFFFFFC | 2;
                    }
                    *((_DWORD *)a4 + 2) = v53;
                    v47 = v72[0];
                  }
                  else
                  {
                    *((_DWORD *)a4 + 2) &= 0xFFFFFFFC;
                  }
                  *((_DWORD *)a4 + 3) = *((_DWORD *)a4 + 3);
LABEL_210:
                  if ( (v47 & 4) != 0 )
                  {
                    v54 = *((_DWORD *)a4 + 3);
                    *((_DWORD *)a4 + 2) |= 4u;
                    *((_DWORD *)a4 + 3) = v54;
                  }
                  v55 = v47 >> 8;
                  v72[0] = v55;
                  if ( (v55 & 3) != 0 )
                  {
                    if ( (v55 & 3) == 1 )
                    {
                      v55 = *((_DWORD *)a4 + 4) & 0xFFFFFFFC | 1;
                    }
                    else
                    {
                      if ( (v55 & 3) != 2 )
                      {
LABEL_220:
                        if ( (v55 & 4) != 0 )
                        {
                          v56 = *((_DWORD *)a4 + 5);
                          *((_DWORD *)a4 + 4) |= 4u;
                          *((_DWORD *)a4 + 5) = v56;
                        }
                        qmemcpy(a4 + 48, v80, 0x400u);
                        return ValueKey;
                      }
                      v55 = *((_DWORD *)a4 + 4) & 0xFFFFFFFC | 2;
                    }
                    *((_DWORD *)a4 + 4) = v55;
                    LOBYTE(v55) = v72[0];
                  }
                  else
                  {
                    *((_DWORD *)a4 + 4) &= 0xFFFFFFFC;
                  }
                  *((_DWORD *)a4 + 5) = *((_DWORD *)a4 + 5);
                  goto LABEL_220;
                }
                *((_DWORD *)a4 + 8) = 1;
                v45 = 1;
              }
              else
              {
                *((_DWORD *)a4 + 8) = 0;
              }
              *((_DWORD *)a4 + 9) = 0;
              goto LABEL_179;
            case 12:
              if ( a5 != 8 )
                return -1073741811;
              v57 = v8 >> 4;
              v58 = 0;
              v59 = 0;
              *(_DWORD *)a4 = 0;
              *((_DWORD *)a4 + 1) = 0;
              switch ( v57 & 3 )
              {
                case 0u:
                  goto LABEL_235;
                case 1u:
                  goto LABEL_233;
                case 2u:
                  *(_DWORD *)a4 = 2;
                  v59 = 2;
                  break;
                case 3u:
                  v58 = 8;
LABEL_233:
                  v59 = v58 | 1;
                  *(_DWORD *)a4 = v58 | 1;
                  break;
                default:
                  goto LABEL_235;
              }
              *((_DWORD *)a4 + 1) = 0;
LABEL_235:
              result = ValueKey;
              if ( (v57 & 4) == 0 )
                return result;
              *(_DWORD *)a4 = v59 | 4;
              goto LABEL_39;
            case 13:
              if ( a5 != 8 )
                return -1073741811;
              v10 = __PAIR64__(v9, v10) >> 4;
LABEL_28:
              v11 = 0;
              *(_DWORD *)a4 = 0;
              *((_DWORD *)a4 + 1) = 0;
              v12 = 0;
              switch ( v10 & 3 )
              {
                case 0u:
                  goto LABEL_36;
                case 1u:
                  goto LABEL_33;
                case 2u:
                  goto LABEL_81;
              }
              if ( (v10 & 3) != 3 )
                goto LABEL_36;
              v12 = 8;
LABEL_33:
              v11 = v12 | 1;
              goto LABEL_34;
            case 14:
              if ( a5 != 8 )
                return -1073741811;
              v10 = __PAIR64__(v9, v10) >> 12;
LABEL_78:
              v11 = 0;
              *(_DWORD *)a4 = 0;
              *((_DWORD *)a4 + 1) = 0;
              switch ( v10 & 3 )
              {
                case 0u:
                  break;
                case 1u:
                  v11 = 1;
LABEL_34:
                  *(_DWORD *)a4 = v11;
                  goto LABEL_35;
                case 2u:
LABEL_81:
                  *(_DWORD *)a4 = 2;
                  v11 = 2;
LABEL_35:
                  *((_DWORD *)a4 + 1) = 0;
                  break;
              }
LABEL_36:
              v13 = (v10 & 4) == 0;
LABEL_37:
              result = ValueKey;
              if ( !v13 )
              {
                *(_DWORD *)a4 = v11 | 4;
LABEL_39:
                *((_DWORD *)a4 + 1) = 0;
              }
              return result;
            case 15:
              if ( a5 != 24 )
                return -1073741811;
              v60 = v8 >> 28;
              v72[0] = v60;
              memset(a4, 0, 0x18u);
              v74 = 0;
              v61 = 0;
              switch ( v60 & 3 )
              {
                case 0u:
                  goto LABEL_247;
                case 1u:
                  v62 = 0;
                  break;
                case 2u:
                  *(_DWORD *)a4 = 2;
                  v61 = 2;
                  *((_DWORD *)a4 + 1) = 0;
                  goto LABEL_247;
                case 3u:
                  v62 = 8;
                  break;
                default:
                  goto LABEL_247;
              }
              *((_DWORD *)a4 + 1) = 0;
              v61 = v62 | 1;
              *(_DWORD *)a4 = v62 | 1;
LABEL_247:
              if ( (v72[0] & 4) != 0 )
              {
                *((_DWORD *)a4 + 1) = 0;
                *(_DWORD *)a4 = v61 | 4;
              }
              v63 = 0;
              v64 = 0;
              if ( ((int)Handle[0] & 3) != 0 )
              {
                if ( ((int)Handle[0] & 3) != 1 )
                {
                  if ( ((int)Handle[0] & 3) == 2 )
                  {
                    v64 = *((_DWORD *)a4 + 3);
                    v63 = *((_DWORD *)a4 + 2) & 0xFFFFFFFC | 2;
                    *((_DWORD *)a4 + 3) = v64;
                    *((_DWORD *)a4 + 2) = v63;
                  }
LABEL_256:
                  v65 = Handle[0];
                  if ( ((int)Handle[0] & 4) != 0 )
                  {
                    *((_DWORD *)a4 + 3) = v64;
                    *((_DWORD *)a4 + 2) = v63 | 4;
                  }
                  Handle[0] = (HANDLE)(__PAIR64__(v76[5], (unsigned int)v65) >> 4);
                  if ( ((int)Handle[0] & 3) == 0 )
                  {
                    *((_DWORD *)a4 + 4) &= 0xFFFFFFFC;
                    goto LABEL_267;
                  }
                  if ( ((int)Handle[0] & 3) != 1 )
                  {
                    if ( ((int)Handle[0] & 3) == 2 )
                    {
                      v67 = *((_DWORD *)a4 + 4) & 0xFFFFFFFC | 2;
                      goto LABEL_265;
                    }
                    if ( ((int)Handle[0] & 3) != 3 )
                    {
LABEL_268:
                      v26 = ((int)Handle[0] & 4) == 0;
LABEL_72:
                      if ( !v26 )
                      {
                        v27 = *((_DWORD *)a4 + 5);
                        *((_DWORD *)a4 + 4) |= 4u;
                        *((_DWORD *)a4 + 5) = v27;
                      }
                      return ValueKey;
                    }
                    v66 = *((_DWORD *)a4 + 5);
                    *((_DWORD *)a4 + 4) |= 8u;
                    *((_DWORD *)a4 + 5) = v66;
                  }
                  v67 = *((_DWORD *)a4 + 4) & 0xFFFFFFFC | 1;
LABEL_265:
                  *((_DWORD *)a4 + 4) = v67;
LABEL_267:
                  *((_DWORD *)a4 + 5) = *((_DWORD *)a4 + 5);
                  goto LABEL_268;
                }
                *((_DWORD *)a4 + 2) = 1;
                v63 = 1;
              }
              else
              {
                *((_DWORD *)a4 + 2) = 0;
              }
              *((_DWORD *)a4 + 3) = 0;
              goto LABEL_256;
            default:
              return -1073741811;
          }
        }
        ValueKey = ZwQueryValueKey((int)Handle[0], (int)v72, 2, (int)v77, 40, (int)&v73);
        if ( ValueKey >= 0 && a2 == 11 )
          ValueKey = RtlpQueryEafPlusModuleList((int)Handle[0], v80);
        NtClose(Handle[0]);
        result = ValueKey;
        if ( ValueKey >= 0 )
        {
          if ( Size > 0x18 )
            return -1073741788;
          memcpy(v76, Src, Size);
          v8 = v76[3];
          v9 = v76[1];
          Handle[0] = (HANDLE)v76[4];
          v69 = v76[2];
          v10 = v76[0];
          goto LABEL_26;
        }
      }
    }
  }
  return result;
}
