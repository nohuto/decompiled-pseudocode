/*
 * XREFs of PfVerifyScenarioBuffer @ 0x1406A6220
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x1406A5F08 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     StringCchPrintfW @ 0x1402490A8 (StringCchPrintfW.c)
 *     StringCbLengthW @ 0x140290AA4 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PfMetadataRecordIsEqual @ 0x1406761E4 (PfMetadataRecordIsEqual.c)
 *     PfVerifyScenarioId @ 0x1406A71E4 (PfVerifyScenarioId.c)
 */

__int64 __fastcall PfVerifyScenarioBuffer(unsigned __int64 a1, unsigned int a2, int *a3)
{
  int v3; // ebx
  unsigned __int8 v4; // r15
  unsigned int *v6; // rdi
  unsigned int v7; // r14d
  __int64 v8; // rsi
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // rdx
  char *v15; // rbp
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // r10d
  unsigned int v25; // esi
  int *v26; // r9
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // r14
  unsigned int v32; // r8d
  int v33; // r11d
  unsigned int v34; // r10d
  int v35; // r13d
  int v36; // edi
  int v37; // ecx
  __int64 v38; // r11
  __int64 v39; // rbp
  int *v40; // r9
  int v41; // esi
  int v42; // eax
  int v44; // edx
  unsigned __int64 v45; // r9
  int v46; // r13d
  unsigned int v47; // r10d
  unsigned int v48; // ebp
  unsigned int v49; // r14d
  unsigned __int64 v50; // r11
  unsigned int *v51; // rsi
  unsigned int v52; // r9d
  int v53; // r8d
  unsigned __int64 v54; // rdi
  unsigned __int16 *v55; // rcx
  char *v56; // rdx
  int v57; // eax
  int v58; // ecx
  _DWORD *v59; // rcx
  unsigned __int64 v60; // r11
  __int64 v61; // r10
  char *v62; // rdx
  unsigned int v63; // edx
  unsigned int v64; // r8d
  int v65; // r9d
  _DWORD *v66; // rcx
  __int64 v67; // r11
  int v68; // eax
  int v69; // eax
  unsigned int v70; // r9d
  int v71; // eax
  _DWORD *v72; // rcx
  __int64 v73; // rdx
  unsigned __int16 *v74; // rcx
  unsigned int v75; // edx
  __int64 v76; // rax
  unsigned __int16 *v77; // rcx
  __int64 v78; // rax
  int v79; // r9d
  unsigned int v80; // r10d
  __int64 v81; // [rsp+20h] [rbp-138h]
  __int64 v82; // [rsp+28h] [rbp-130h]
  int v83; // [rsp+30h] [rbp-128h]
  unsigned __int64 v84; // [rsp+38h] [rbp-120h]
  unsigned int v85; // [rsp+40h] [rbp-118h]
  int v86; // [rsp+44h] [rbp-114h]
  unsigned __int64 v88; // [rsp+50h] [rbp-108h]
  unsigned int v89; // [rsp+58h] [rbp-100h]
  unsigned int v90; // [rsp+5Ch] [rbp-FCh]
  int v91; // [rsp+64h] [rbp-F4h]
  unsigned int v92; // [rsp+68h] [rbp-F0h]
  int v93; // [rsp+6Ch] [rbp-ECh]
  unsigned int v94; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v95; // [rsp+78h] [rbp-E0h] BYREF
  unsigned __int64 v96; // [rsp+80h] [rbp-D8h]
  int *v97; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v98; // [rsp+90h] [rbp-C8h]
  wchar_t pszDest[40]; // [rsp+C0h] [rbp-98h] BYREF

  v3 = 0;
  v4 = 0;
  v6 = (unsigned int *)a1;
  if ( a2 < 0x128 )
  {
    v3 = 10;
  }
  else if ( (a1 & 7) != 0 )
  {
    v3 = 15;
  }
  else if ( *(_DWORD *)a1 == 30 && *(_DWORD *)(a1 + 4) == 1094927187 )
  {
    if ( a2 > 0x10000000 )
    {
      v3 = 25;
    }
    else if ( a2 == *(_DWORD *)(a1 + 12) )
    {
      if ( *(_DWORD *)(a1 + 80) > 1u )
      {
        v3 = 27;
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 88);
        v92 = v7;
        if ( v7 > 0x4000
          || (v8 = *(unsigned int *)(a1 + 112), v94 = v8, (unsigned int)v8 > 0x4000)
          || (v9 = *(_DWORD *)(a1 + 96), v89 = v9, v9 > 0x100000)
          || (v10 = *(_DWORD *)(a1 + 104), v10 > 0x400000) )
        {
          v3 = 30;
        }
        else if ( v7 && v9 && v10 )
        {
          if ( (unsigned int)(*(_DWORD *)(a1 + 204) - 1) > 7 )
          {
            v3 = 35;
          }
          else if ( (unsigned __int8)PfVerifyScenarioId(a1 + 16) )
          {
            v14 = (unsigned __int64)v6 + v6[21];
            v95 = v14;
            if ( (v14 & 3) != 0 )
            {
              v3 = 38;
            }
            else if ( v14 < (unsigned __int64)v6
                   || (v15 = (char *)v6 + v11, v88 = (unsigned __int64)v6 + v11, v14 >= (unsigned __int64)v6 + v11) )
            {
              v3 = 40;
            }
            else
            {
              v16 = 32LL * v7 + v14 - 1;
              if ( v16 < (unsigned __int64)v6 || v16 >= (unsigned __int64)v15 )
              {
                v3 = 45;
              }
              else
              {
                v17 = (unsigned __int64)v6 + v6[23];
                v96 = v17;
                if ( (v17 & 3) != 0 )
                {
                  v3 = 47;
                }
                else if ( v17 < (unsigned __int64)v6 || v17 >= (unsigned __int64)v15 )
                {
                  v3 = 50;
                }
                else
                {
                  v18 = v17 + 8 * v13 - 1;
                  if ( v18 < (unsigned __int64)v6 || v18 >= (unsigned __int64)v15 )
                  {
                    v3 = 55;
                  }
                  else
                  {
                    v19 = (unsigned __int64)v6 + v6[25];
                    v98 = v19;
                    if ( (v19 & 1) != 0 )
                    {
                      v3 = 57;
                    }
                    else if ( v19 < (unsigned __int64)v6 || v19 >= (unsigned __int64)v15 )
                    {
                      v3 = 60;
                    }
                    else
                    {
                      v20 = v19 + v12 - 1;
                      if ( v20 < (unsigned __int64)v6 || v20 >= (unsigned __int64)v15 )
                      {
                        v3 = 70;
                      }
                      else
                      {
                        v21 = (unsigned __int64)v6 + v6[27];
                        v84 = v21;
                        if ( (v21 & 7) != 0 )
                        {
                          v3 = 72;
                        }
                        else if ( v21 < (unsigned __int64)v6 || v21 >= (unsigned __int64)v15 )
                        {
                          v3 = 73;
                        }
                        else
                        {
                          v22 = v21 + v6[29] - 1LL;
                          if ( v22 < (unsigned __int64)v6 || v22 >= (unsigned __int64)v15 )
                          {
                            v3 = 74;
                          }
                          else
                          {
                            v23 = 96 * v8 + v21 - 1;
                            if ( v23 < (unsigned __int64)v6 || v23 >= (unsigned __int64)v15 )
                            {
                              v3 = 75;
                            }
                            else
                            {
                              v90 = v6[31];
                              if ( v90 > 7 )
                              {
                                v3 = 76;
                              }
                              else
                              {
                                v85 = 0;
                                v24 = 0;
                                v25 = 0;
                                while ( 1 )
                                {
                                  v26 = (int *)(v14 + 32LL * v25);
                                  v97 = v26;
                                  v27 = v19 + (unsigned int)v26[3];
                                  if ( (v27 & 1) != 0 )
                                  {
                                    v3 = 77;
                                    goto LABEL_67;
                                  }
                                  if ( v27 < (unsigned __int64)v6 || v27 >= (unsigned __int64)v15 )
                                  {
                                    v3 = 80;
                                    goto LABEL_67;
                                  }
                                  v28 = (unsigned int)v26[4];
                                  if ( !(_DWORD)v28 )
                                  {
                                    v3 = 90;
                                    goto LABEL_67;
                                  }
                                  if ( (unsigned int)v28 > 0x400 )
                                  {
                                    v3 = 100;
                                    goto LABEL_67;
                                  }
                                  v29 = (unsigned int)(2 * v28 + 2) + v27 - 1;
                                  if ( v29 < (unsigned __int64)v6 || v29 >= (unsigned __int64)v15 )
                                  {
                                    v3 = 110;
                                    goto LABEL_67;
                                  }
                                  if ( *(_WORD *)(v27 + 2 * v28) )
                                  {
                                    v3 = 120;
                                    goto LABEL_67;
                                  }
                                  v30 = v26[1];
                                  if ( v30 > 0x8000 )
                                  {
                                    v3 = 140;
                                    goto LABEL_67;
                                  }
                                  if ( v30 > (unsigned int)v13 )
                                  {
                                    v3 = 150;
                                    goto LABEL_67;
                                  }
                                  v31 = *v26;
                                  v86 = v13 - v30;
                                  if ( (_DWORD)v31 == -1 && v30 )
                                  {
                                    v3 = 152;
                                    goto LABEL_67;
                                  }
                                  if ( (_DWORD)v31 != v24 && (_DWORD)v31 != -1 )
                                  {
                                    v3 = 153;
                                    goto LABEL_67;
                                  }
                                  v32 = v26[5];
                                  v93 = v30 + v24;
                                  if ( (v32 & 0x7F00) == 0 && (v32 & 1) == 0 && (v32 & 0xFE) == 0 )
                                  {
                                    v3 = 155;
                                    goto LABEL_67;
                                  }
                                  v33 = v26[5] & 1;
                                  v91 = v33;
                                  if ( (v32 & 1) == 0 && !v26[2] )
                                  {
                                    v3 = 157;
                                    goto LABEL_67;
                                  }
                                  v83 = 0;
                                  v34 = *v26;
                                  v35 = 0;
                                  v36 = 0;
                                  v37 = 0;
                                  if ( (int)v31 < (int)(v31 + v30) )
                                    break;
LABEL_75:
                                  if ( v35 != v26[2] )
                                  {
                                    v3 = 185;
                                    goto LABEL_67;
                                  }
                                  if ( !v33 && (v37 != (unsigned __int8)v32 >> 1 || v36 != ((v32 >> 8) & 0x7F)) )
                                  {
                                    v3 = 187;
                                    goto LABEL_67;
                                  }
                                  v6 = (unsigned int *)a1;
                                  ++v25;
                                  LODWORD(v13) = v86;
                                  v85 = v25;
                                  if ( v25 >= v92 )
                                  {
                                    v45 = v84;
                                    v46 = 1;
                                    if ( v86 )
                                    {
                                      v3 = 190;
                                    }
                                    else
                                    {
                                      v47 = v94;
                                      v48 = 0;
                                      v49 = 0;
                                      if ( v94 )
                                      {
                                        while ( 1 )
                                        {
                                          v50 = v84;
                                          v51 = (unsigned int *)(v45 + 96LL * v49++);
                                          v52 = v49;
                                          v53 = v51[4];
                                          v95 = *((_QWORD *)v51 + 1);
                                          if ( v49 < v47 )
                                            break;
LABEL_86:
                                          v54 = v50 + *v51;
                                          if ( (v54 & 1) != 0 )
                                          {
                                            v3 = 195;
                                            goto LABEL_67;
                                          }
                                          if ( v54 < a1 || v54 >= v88 )
                                          {
                                            v3 = 200;
                                            goto LABEL_67;
                                          }
                                          v55 = (unsigned __int16 *)(v54 + 2LL * v51[1]);
                                          if ( (unsigned __int64)v55 + 1 < a1 || (unsigned __int64)v55 + 1 >= v88 )
                                          {
                                            v3 = 210;
                                            goto LABEL_67;
                                          }
                                          if ( *v55 )
                                          {
                                            v3 = 220;
                                            goto LABEL_67;
                                          }
                                          LODWORD(v82) = v53;
                                          LODWORD(v81) = v51[2];
                                          StringCchPrintfW(
                                            pszDest,
                                            0x23uLL,
                                            L"\\VOLUME{%08lx%08lx-%08lx}",
                                            v51[3],
                                            v81,
                                            v82);
                                          v56 = (char *)pszDest - v54;
                                          do
                                          {
                                            v57 = *(unsigned __int16 *)&v56[v54];
                                            v58 = *(unsigned __int16 *)v54 - v57;
                                            if ( v58 )
                                              break;
                                            v54 += 2LL;
                                          }
                                          while ( v57 );
                                          if ( v58 )
                                          {
                                            v3 = 222;
                                            goto LABEL_67;
                                          }
                                          v59 = (_DWORD *)(v84 + v51[5]);
                                          if ( ((unsigned __int8)v59 & 7) != 0 )
                                          {
                                            v3 = 225;
                                            goto LABEL_67;
                                          }
                                          v6 = (unsigned int *)a1;
                                          if ( (unsigned __int64)v59 < a1 || (v60 = v88, (unsigned __int64)v59 >= v88) )
                                          {
                                            v3 = 230;
                                            goto LABEL_67;
                                          }
                                          v61 = v51[6];
                                          if ( (unsigned int)v61 < 0x18 )
                                          {
                                            v3 = 240;
                                            goto LABEL_67;
                                          }
                                          v62 = (char *)v59 + v61 - 1;
                                          if ( (unsigned __int64)v62 < a1 || (unsigned __int64)v62 >= v88 )
                                          {
                                            v3 = 245;
                                            goto LABEL_67;
                                          }
                                          if ( *v59 != 3 )
                                          {
                                            v3 = 250;
                                            goto LABEL_67;
                                          }
                                          v63 = v59[1];
                                          if ( v63 > 0x84000 )
                                          {
                                            v3 = 260;
                                            goto LABEL_67;
                                          }
                                          v64 = *(_DWORD *)(a1 + 124);
                                          v65 = 0;
                                          if ( v64 )
                                          {
                                            v66 = v51 + 9;
                                            v67 = v64;
                                            do
                                            {
                                              v68 = *v66 + v66[7];
                                              ++v66;
                                              v65 += v68;
                                              --v67;
                                            }
                                            while ( v67 );
                                            v60 = v88;
                                          }
                                          if ( v65 != v63 )
                                          {
                                            v3 = 265;
                                            goto LABEL_67;
                                          }
                                          v69 = 24;
                                          if ( v63 )
                                            v69 = 8 * v63 + 16;
                                          if ( v69 != (_DWORD)v61 )
                                          {
                                            v3 = 270;
                                            goto LABEL_67;
                                          }
                                          v70 = v51[8];
                                          if ( v70 > 0x80000 )
                                          {
                                            v3 = 280;
                                            goto LABEL_67;
                                          }
                                          v71 = 0;
                                          if ( v64 )
                                          {
                                            v72 = v51 + 16;
                                            v73 = *(unsigned int *)(a1 + 124);
                                            do
                                            {
                                              v71 += *v72++;
                                              --v73;
                                            }
                                            while ( v73 );
                                          }
                                          if ( v71 != v70 )
                                          {
                                            v3 = 281;
                                            goto LABEL_67;
                                          }
                                          v48 += v71;
                                          v74 = (unsigned __int16 *)(v84 + v51[7]);
                                          if ( ((unsigned __int8)v74 & 1) != 0 )
                                          {
                                            v3 = 283;
                                            goto LABEL_67;
                                          }
                                          v75 = 0;
                                          if ( v70 )
                                          {
                                            while ( (unsigned __int64)v74 >= a1 && (unsigned __int64)v74 < v60 )
                                            {
                                              if ( (unsigned __int64)v74 + 3 < a1 || (unsigned __int64)v74 + 3 >= v60 )
                                              {
                                                v3 = 290;
                                                goto LABEL_67;
                                              }
                                              v76 = *v74;
                                              if ( (unsigned __int16)v76 >= 0x400u )
                                              {
                                                v3 = 300;
                                                goto LABEL_67;
                                              }
                                              v77 = &v74[v76];
                                              if ( (unsigned __int64)v77 + 3 < a1 || (unsigned __int64)v77 + 3 >= v60 )
                                              {
                                                v3 = 310;
                                                goto LABEL_67;
                                              }
                                              if ( v77[1] )
                                              {
                                                v3 = 320;
                                                goto LABEL_67;
                                              }
                                              ++v75;
                                              v74 = v77 + 2;
                                              if ( v75 >= v70 )
                                                goto LABEL_128;
                                            }
                                            v3 = 285;
                                            goto LABEL_67;
                                          }
LABEL_128:
                                          v47 = *(_DWORD *)(a1 + 112);
                                          if ( v49 >= v47 )
                                            goto LABEL_129;
                                          v45 = v84;
                                        }
                                        while ( !PfMetadataRecordIsEqual(v50 + 96LL * v52, &v95, v53) )
                                        {
                                          v52 = v79 + 1;
                                          if ( v52 >= v80 )
                                            goto LABEL_86;
                                        }
                                        v3 = 192;
                                      }
                                      else
                                      {
LABEL_129:
                                        if ( v48 == v6[30] )
                                        {
                                          if ( v48 > 0x80000 )
                                          {
                                            v3 = 340;
                                          }
                                          else
                                          {
                                            v78 = v6[53];
                                            if ( v6[54] )
                                              v46 = 0;
                                            if ( ((_DWORD)v78 == 0) == v46 )
                                            {
                                              if ( (_DWORD)v78
                                                && StringCbLengthW((STRSAFE_PCNZWCH)((char *)v6 + v78), v6[54], 0LL) < 0 )
                                              {
                                                v3 = 360;
                                              }
                                              else
                                              {
                                                v4 = 1;
                                              }
                                            }
                                            else
                                            {
                                              v3 = 350;
                                            }
                                          }
                                        }
                                        else
                                        {
                                          v3 = 330;
                                        }
                                      }
                                    }
                                    goto LABEL_67;
                                  }
                                  v24 = v93;
                                  v19 = v98;
                                  v14 = v95;
                                }
                                v38 = *v26;
                                v39 = (int)(v31 + v30);
                                v40 = (int *)(v96 + 4 + 8 * v31);
                                while ( 1 )
                                {
                                  v41 = v36;
                                  if ( v38 < 0 || v34 >= v89 )
                                    break;
                                  if ( v34 != (_DWORD)v31 && *(v40 - 1) <= (unsigned int)*(v40 - 3) )
                                  {
                                    v3 = 165;
                                    goto LABEL_67;
                                  }
                                  v42 = *v40;
                                  if ( (*v40 & 1) == 0 && (((unsigned int)*v40 >> 4) & 7) > v90 )
                                  {
                                    v3 = 167;
                                    goto LABEL_67;
                                  }
                                  if ( (v42 & 0xE) == 0 )
                                  {
                                    v3 = 173;
                                    goto LABEL_67;
                                  }
                                  if ( (*v40 & 1) != 0 )
                                  {
                                    if ( (v42 & 8) != 0 )
                                    {
                                      v3 = 175;
                                      goto LABEL_67;
                                    }
                                  }
                                  else
                                  {
                                    ++v35;
                                    v44 = 1 << (((unsigned int)*v40 >> 4) & 7);
                                    if ( (v42 & 4) != 0 )
                                      v83 |= v44;
                                    v36 |= v44;
                                    if ( (v42 & 2) == 0 )
                                      v36 = v41;
                                  }
                                  ++v34;
                                  ++v38;
                                  v40 += 2;
                                  if ( v38 >= v39 )
                                  {
                                    v26 = v97;
                                    v37 = v83;
                                    v33 = v91;
                                    v25 = v85;
                                    v15 = (char *)v88;
                                    goto LABEL_75;
                                  }
                                }
                                v3 = 160;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v3 = 37;
          }
        }
        else
        {
          v3 = 33;
        }
      }
    }
    else
    {
      v3 = 26;
    }
  }
  else
  {
    v3 = 20;
  }
LABEL_67:
  *a3 = v3;
  return v4;
}
