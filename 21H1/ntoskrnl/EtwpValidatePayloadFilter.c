/*
 * XREFs of EtwpValidatePayloadFilter @ 0x14094513C
 * Callers:
 *     EtwpAllocatePayloadFilterData @ 0x14093BC5C (EtwpAllocatePayloadFilterData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidatePayloadFilter(_QWORD *a1, __int16 *a2, unsigned int a3)
{
  __int16 v5; // dx
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r10
  int v9; // eax
  int v10; // r15d
  unsigned __int64 v11; // rdi
  __int64 v12; // r11
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // r12d
  int v18; // esi
  int v19; // eax
  int v20; // r13d
  int v21; // eax
  unsigned int v22; // r14d
  int v23; // r8d
  int v24; // ecx
  __int64 v25; // r10
  unsigned int v26; // kr00_4
  unsigned int v27; // r12d
  unsigned __int16 *v28; // rdi
  __int64 v29; // r13
  int v30; // eax
  _WORD *v31; // r11
  __int64 v32; // rbx
  unsigned int v33; // ebp
  __int64 v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // esi
  unsigned int v37; // ebx
  unsigned int v38; // r8d
  unsigned int v39; // r11d
  __int64 v40; // rcx
  int v41; // ecx
  _WORD *v42; // rcx
  int v43; // edx
  unsigned __int64 v44; // rax
  _WORD *v45; // rcx
  __int64 v46; // rax
  _BYTE *v47; // rcx
  int v48; // edx
  unsigned __int64 v49; // rax
  _BYTE *v50; // rcx
  int v51; // eax
  int v53; // [rsp+0h] [rbp-98h]
  int v54; // [rsp+4h] [rbp-94h]
  int v55; // [rsp+Ch] [rbp-8Ch]
  int v56; // [rsp+14h] [rbp-84h]
  _WORD *v57; // [rsp+18h] [rbp-80h]
  _BYTE *v58; // [rsp+20h] [rbp-78h]
  int v59; // [rsp+2Ch] [rbp-6Ch]
  __int64 v60; // [rsp+38h] [rbp-60h]
  _WORD *v61; // [rsp+40h] [rbp-58h]
  __int64 v62; // [rsp+58h] [rbp-40h]
  int v63; // [rsp+B0h] [rbp+18h]
  int v64; // [rsp+B8h] [rbp+20h]

  if ( a3 >= 0x50 && (unsigned __int16)a2[1] == a3 && a3 <= 0x1000 )
  {
    v5 = *a2;
    if ( (v5 & 0xFFF) == 0xA66 && (v5 & 0xF000) == 0x1000 )
    {
      v6 = (unsigned __int16)a2[2];
      if ( (unsigned __int16)v6 <= 0xAAu && !a2[3] )
      {
        v7 = *a1 - *((_QWORD *)a2 + 2);
        if ( *a1 == *((_QWORD *)a2 + 2) )
          v7 = a1[1] - *((_QWORD *)a2 + 3);
        if ( !v7 )
        {
          v8 = (unsigned __int16)a2[16];
          v9 = 24 * v6 + 56;
          v10 = (unsigned __int16)a2[2];
          if ( (_DWORD)v8 == v9 )
          {
            v11 = (unsigned __int16)a2[17];
            v12 = (unsigned __int16)a2[18];
            v13 = v11 + v9;
            if ( (_DWORD)v12 == v13 )
            {
              v14 = (unsigned __int16)a2[19];
              v15 = (unsigned __int16)a2[20];
              v16 = v14 + v13;
              if ( (_DWORD)v15 == v16 )
              {
                v17 = (unsigned __int16)a2[21];
                v18 = (unsigned __int16)a2[22];
                v19 = v17 + v16;
                if ( v18 == v19 )
                {
                  v20 = (unsigned __int16)a2[23];
                  v21 = v20 + v19;
                  if ( (unsigned __int16)a2[24] == v21 )
                  {
                    v56 = (unsigned __int16)a2[25];
                    if ( a3 == v56 + v21
                      && v11 == 12 * (v11 / 0xC)
                      && (v14 & 3) == 0
                      && (v17 & 3) == 0
                      && (v20 & 1) == 0
                      && (v8 & 3) == 0
                      && (v12 & 3) == 0
                      && (v15 & 3) == 0
                      && (v18 & 3) == 0 )
                    {
                      v22 = v14 >> 2;
                      v53 = 0;
                      v23 = 0;
                      v54 = 0;
                      v24 = 0;
                      v64 = 0;
                      v25 = (__int64)a2 + v8;
                      v63 = 0;
                      v26 = (unsigned __int16)a2[17];
                      v27 = v17 >> 2;
                      v28 = (unsigned __int16 *)(a2 + 28);
                      v57 = (__int16 *)((char *)a2 + (unsigned __int16)a2[22]);
                      v29 = (__int64)a2 + v12;
                      v30 = (unsigned __int16)a2[23] >> 1;
                      v31 = (__int16 *)((char *)a2 + v15);
                      v32 = 0LL;
                      v61 = v31;
                      v58 = (char *)a2 + (unsigned __int16)a2[24];
                      v55 = 0;
                      if ( v26 / 0xC )
                      {
                        while ( 1 )
                        {
                          v62 = v32 | (1LL << (*(_WORD *)v25 % 0x3Fu));
                          if ( *(unsigned __int16 *)(v25 + 4) != v54 )
                            break;
                          v33 = *(unsigned __int16 *)(v25 + 6);
                          v34 = v29;
                          v60 = v29;
                          v54 += v33;
                          v35 = 0;
                          if ( *(_WORD *)(v25 + 6) )
                          {
                            while ( *(_WORD *)(v29 + 2) < 0x40u
                                 && *(_BYTE *)(v29 + 1) < 0x40u
                                 && *(_BYTE *)v29 < 0x40u
                                 && (*(_BYTE *)v29 & 0xFu) < 9 )
                            {
                              ++v35;
                              v29 += 4LL;
                              if ( v35 >= v33 )
                                goto LABEL_33;
                            }
                            return 3221225485LL;
                          }
LABEL_33:
                          if ( *(unsigned __int16 *)(v25 + 8) != v23 )
                            return 3221225485LL;
                          v36 = *(unsigned __int16 *)(v25 + 10);
                          v23 += v36;
                          v37 = 0;
                          v59 = v23;
                          if ( *(_WORD *)(v25 + 10) )
                          {
                            while ( (*v31 & 0xFCu) <= 0x20 && (unsigned __int16)v31[1] == v53 )
                            {
                              v38 = (unsigned __int8)*v31 >> 2;
                              v39 = 0;
                              v53 += v38;
                              if ( v38 )
                              {
                                while ( 1 )
                                {
                                  v40 = *v28;
                                  if ( (unsigned int)v40 >= v22
                                    || (unsigned __int16)v40 >= (unsigned __int16)v33
                                    || (unsigned __int16)v40 > *(unsigned __int8 *)(v25 + 3) )
                                  {
                                    return 3221225485LL;
                                  }
                                  v41 = (*(_BYTE *)(v34 + 4 * v40) & 0xF) - 3;
                                  if ( !v41 )
                                    break;
                                  if ( v41 == 1 )
                                  {
                                    if ( *((_QWORD *)v28 + 1) != v64 || *((_QWORD *)v28 + 2) )
                                      return 3221225485LL;
                                    v42 = v57;
                                    v43 = v64;
                                    v44 = (unsigned __int64)a2
                                        + (unsigned __int16)a2[22]
                                        + (unsigned __int64)(unsigned __int16)a2[23];
                                    v10 = (unsigned __int16)a2[2];
                                    if ( *v57 )
                                    {
                                      do
                                      {
                                        if ( (unsigned __int64)v42 >= v44 - 2 )
                                          break;
                                        ++v42;
                                      }
                                      while ( *v42 );
                                      v10 = (unsigned __int16)a2[2];
                                      v43 = v64;
                                    }
                                    v45 = v42 + 1;
                                    if ( (unsigned __int64)v45 > v44 )
                                      return 3221225485LL;
                                    v46 = v45 - v57;
                                    v57 = v45;
                                    v64 = v46 + v43;
LABEL_59:
                                    v34 = v60;
                                  }
                                  ++v39;
                                  v28 += 12;
                                  if ( v39 >= v38 )
                                    goto LABEL_61;
                                }
                                if ( *((_QWORD *)v28 + 1) != v63 || *((_QWORD *)v28 + 2) )
                                  return 3221225485LL;
                                v47 = v58;
                                v48 = v63;
                                v49 = (unsigned __int64)a2
                                    + (unsigned __int16)a2[24]
                                    + (unsigned __int64)(unsigned __int16)v56;
                                if ( *v58 )
                                {
                                  do
                                  {
                                    if ( (unsigned __int64)v47 >= v49 - 1 )
                                      break;
                                    ++v47;
                                  }
                                  while ( *v47 );
                                  v48 = v63;
                                }
                                v50 = v47 + 1;
                                if ( (unsigned __int64)v50 > v49 )
                                  return 3221225485LL;
                                v51 = (_DWORD)v50 - (_DWORD)v58;
                                v58 = v50;
                                v63 = v51 + v48;
                                goto LABEL_59;
                              }
LABEL_61:
                              ++v37;
                              v31 = v61 + 2;
                              v61 += 2;
                              if ( v37 >= v36 )
                              {
                                v23 = v59;
                                goto LABEL_63;
                              }
                            }
                            return 3221225485LL;
                          }
LABEL_63:
                          v25 += 12LL;
                          v32 = v62;
                          if ( ++v55 >= v26 / 0xC )
                          {
                            v24 = v63;
                            v30 = (unsigned __int16)a2[23] >> 1;
                            goto LABEL_65;
                          }
                        }
                      }
                      else
                      {
LABEL_65:
                        if ( v32 == *((_QWORD *)a2 + 1)
                          && v53 == v10
                          && v54 == v22
                          && v23 == v27
                          && v64 == v30
                          && v24 == v56 )
                        {
                          return 0LL;
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
  }
  return 3221225485LL;
}
