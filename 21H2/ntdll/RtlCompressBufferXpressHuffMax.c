/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x18010CE74
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x18005B020 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x18005B890 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x18005BB80 (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     RtlpMakeXpressCallback @ 0x18010DBC4 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6)
{
  unsigned int v7; // esi
  unsigned __int8 *v10; // r12
  unsigned __int8 *v11; // rbx
  char *v12; // r15
  unsigned __int64 v13; // r8
  __int64 v14; // r11
  unsigned __int8 *v15; // rbp
  unsigned __int8 *v16; // rdi
  int v17; // esi
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r10
  unsigned __int8 v20; // al
  unsigned __int8 *v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 XpressCallback; // rax
  int v26; // r15d
  unsigned __int8 *v27; // rdx
  int v28; // eax
  unsigned __int8 *v29; // rcx
  unsigned __int8 *v30; // rbp
  unsigned __int8 *v31; // r9
  __int64 v32; // r10
  unsigned __int64 v33; // r11
  int v34; // eax
  int v35; // eax
  _DWORD *v36; // rdx
  unsigned __int8 *v37; // rax
  unsigned __int8 *v38; // rbx
  int v39; // eax
  int v40; // ecx
  unsigned __int64 v41; // rbx
  unsigned __int8 *v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  _BYTE *v45; // r8
  unsigned __int64 v46; // rdx
  char v47; // cl
  unsigned __int8 v48; // cl
  unsigned __int64 v49; // rax
  _WORD *v50; // rdi
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int8 v53; // al
  int v54; // esi
  bool v55; // zf
  unsigned __int64 v56; // [rsp+30h] [rbp-88h]
  __int64 v57; // [rsp+38h] [rbp-80h]
  __int64 v58; // [rsp+40h] [rbp-78h]
  char *v59; // [rsp+48h] [rbp-70h]
  unsigned __int8 *v60; // [rsp+50h] [rbp-68h]
  char *v61; // [rsp+58h] [rbp-60h]
  _QWORD v62[2]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v63; // [rsp+70h] [rbp-48h]
  unsigned __int8 *v64; // [rsp+C0h] [rbp+8h]
  int v65; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v67; // [rsp+F0h] [rbp+38h]
  __int64 v69; // [rsp+F8h] [rbp+40h]

  v65 = (int)a3;
  v7 = a2;
  v67 = a1 + a2;
  v61 = &a3[a4];
  if ( a4 >= 0x12C )
  {
    if ( a1 <= 0x10001 )
      return 3221225659LL;
    memset(a6, 0, 0x40000uLL);
    v59 = a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v10 = a6 + 1342240;
    v62[0] = 0LL;
    v11 = (unsigned __int8 *)a1;
    v62[1] = 0LL;
    v12 = a3;
    v64 = 0LL;
    v63 = v7;
    while ( 1 )
    {
      v57 = 0LL;
      v58 = 0LL;
      memset(a6 + 1339936, 0, 0x800uLL);
      v13 = v67;
      v14 = v7;
      v15 = (unsigned __int8 *)v67;
      v16 = v10 + 4;
      if ( (unsigned __int64)(v11 + 0x10000) <= v67 )
        v15 = v11 + 0x10000;
      v17 = 1;
      v18 = (unsigned __int64)&v11[v14];
      v60 = v15;
      v19 = (unsigned __int64)(v15 - 5);
      v69 = (__int64)(v15 - 5);
      if ( (unsigned __int64)(v15 - 5) < v18 )
        v18 = (unsigned __int64)(v15 - 5);
      v56 = v18;
      if ( v11 == (unsigned __int8 *)a1 )
      {
        v17 = 2;
        ++*(_DWORD *)&a6[4 * *v11 + 1339936];
        v20 = *v11++;
        *v16 = v20;
        v16 = v10 + 5;
      }
      if ( (unsigned __int64)v11 >= v19 )
        goto LABEL_87;
      v21 = v11;
      v22 = (__int64)&v11[-a1] % 0x20000;
      do
      {
        v23 = (unsigned __int16)XpressHashFunction[*v21] ^ (unsigned __int16)word_18013F820[v21[2]] ^ (unsigned __int64)(unsigned __int16)word_18013F620[v21[1]];
        v24 = *(_QWORD *)&a6[8 * v23];
        *(_QWORD *)&a6[8 * v23] = v21++;
        *(_QWORD *)&a6[8 * v22 + 0x40000] = v24;
        v22 = ((_DWORD)v22 + 1) & 0x1FFFF;
      }
      while ( (unsigned __int64)v21 < v19 );
LABEL_14:
      v13 = v67;
      while ( (unsigned __int64)v11 < v18 )
      {
LABEL_18:
        v26 = *(_DWORD *)v11;
        v27 = *(unsigned __int8 **)&a6[8 * ((__int64)&v11[-a1] % 0x20000) + 0x40000];
        if ( v27 + 0x10000 > v11 )
        {
          v28 = v26 ^ *(_DWORD *)v27;
          if ( !v28 )
            goto LABEL_20;
          if ( (v28 & 0xFFFFFF) == 0 )
            goto LABEL_28;
          v27 = *(unsigned __int8 **)&a6[8 * ((__int64)&v27[-a1] % 0x20000) + 0x40000];
          if ( v27 + 0x10000 > v11 )
          {
            v34 = v26 ^ *(_DWORD *)v27;
            if ( !v34 )
              goto LABEL_20;
            if ( (v34 & 0xFFFFFF) == 0 )
              goto LABEL_28;
            v27 = *(unsigned __int8 **)&a6[8 * ((__int64)&v27[-a1] % 0x20000) + 0x40000];
            if ( v27 + 0x10000 > v11 )
            {
              v35 = v26 ^ *(_DWORD *)v27;
              if ( !v35 )
              {
LABEL_20:
                v29 = v64;
                v30 = v11 - 0x10000;
                v31 = v11;
                v32 = 0LL;
                v33 = 3LL;
                goto LABEL_32;
              }
              if ( (v35 & 0xFFFFFF) == 0 )
              {
LABEL_28:
                v64 = v27;
                v31 = v11;
                v30 = v11 - 0x10000;
                v29 = v27;
                v32 = 0LL;
                v33 = 3LL;
                while ( 1 )
                {
                  v27 = *(unsigned __int8 **)&a6[8 * ((__int64)&v27[-a1] % 0x20000) + 0x40000];
                  if ( v27 <= v30 )
                  {
LABEL_66:
                    v11 = &v31[v33];
                    v43 = v31 - v29;
                    if ( v33 == 3 && v43 > 0x1000 )
                    {
                      v19 = v69;
                      v11 = v31;
                      v18 = v56;
                      goto LABEL_69;
                    }
                    if ( v43 < 0x100 )
                      v44 = XpressHighBitIndexTable[v43];
                    else
                      v44 = XpressHighBitIndexTable[v43 >> 8] + 8LL;
                    v57 += v44;
                    v45 = v16 + 1;
                    v46 = v43 - (1LL << v44);
                    v47 = 16 * v44;
                    if ( v33 - 3 < 0xF )
                    {
                      v48 = v33 - 3 + v47;
                      *v16 = v48;
                      v50 = v16 + 1;
                    }
                    else
                    {
                      v48 = v47 + 15;
                      v49 = v33 - 18;
                      *v16 = v48;
                      v50 = v16 + 2;
                      if ( v33 - 18 >= 0xFF )
                      {
                        v52 = v49 + 15;
                        *v45 = -1;
                        if ( v52 >= 0x10000 )
                        {
                          *(_DWORD *)(v45 + 3) = v52;
                          *v50 = 0;
                          v51 = 7LL;
                          v50 = v45 + 7;
                        }
                        else
                        {
                          *v50 = v52;
                          v50 = v45 + 3;
                          v51 = 3LL;
                        }
                      }
                      else
                      {
                        *v45 = v49;
                        v51 = 1LL;
                      }
                      v58 += v51;
                    }
                    v19 = v69;
                    v18 = v56;
                    ++*(_DWORD *)&a6[4 * v48 + 1340960];
                    *v50 = v46;
                    v16 = (unsigned __int8 *)(v50 + 1);
                    if ( v17 <= 0 )
                    {
                      *(_DWORD *)v10 = 2 * v17 + 1;
                      v17 = 1;
                      v10 = v16;
                      v16 += 4;
                    }
                    else
                    {
                      v17 = 2 * v17 + 1;
                    }
                    goto LABEL_14;
                  }
                  if ( v26 == *(_DWORD *)v27 )
                    break;
LABEL_65:
                  if ( (unsigned __int64)++v32 >= 0xC )
                    goto LABEL_66;
                }
                v11 = v31;
LABEL_32:
                v36 = v27 + 4;
                v37 = v11 + 36;
                v38 = v11 + 4;
                if ( (unsigned __int64)v37 >= v13 )
                {
LABEL_43:
                  while ( (unsigned __int64)v38 < v13 )
                  {
                    if ( *v38 != *(_BYTE *)v36 )
                      break;
                    ++v38;
                    v36 = (_DWORD *)((char *)v36 + 1);
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    v39 = *(_DWORD *)v38;
                    v40 = *v36;
                    if ( *(_DWORD *)v38 != *v36 )
                      goto LABEL_54;
                    v39 = *((_DWORD *)v38 + 1);
                    v40 = v36[1];
                    if ( v39 != v40 )
                      break;
                    v39 = *((_DWORD *)v38 + 2);
                    v40 = v36[2];
                    if ( v39 != v40 )
                    {
                      v38 += 8;
                      v36 += 2;
                      goto LABEL_54;
                    }
                    v39 = *((_DWORD *)v38 + 3);
                    v40 = v36[3];
                    if ( v39 != v40 )
                    {
                      v38 += 12;
                      v36 += 3;
                      goto LABEL_54;
                    }
                    v39 = *((_DWORD *)v38 + 4);
                    v40 = v36[4];
                    if ( v39 != v40 )
                    {
                      v38 += 16;
                      v36 += 4;
                      goto LABEL_54;
                    }
                    v39 = *((_DWORD *)v38 + 5);
                    v40 = v36[5];
                    if ( v39 != v40 )
                    {
                      v38 += 20;
                      v36 += 5;
                      goto LABEL_54;
                    }
                    v39 = *((_DWORD *)v38 + 6);
                    v40 = v36[6];
                    if ( v39 != v40 )
                    {
                      v38 += 24;
                      v36 += 6;
                      goto LABEL_54;
                    }
                    v39 = *((_DWORD *)v38 + 7);
                    v40 = v36[7];
                    if ( v39 != v40 )
                    {
                      v38 += 28;
                      v36 += 7;
                      goto LABEL_54;
                    }
                    v38 += 32;
                    v36 += 8;
                    if ( (unsigned __int64)(v38 + 32) >= v13 )
                    {
                      v29 = v64;
                      goto LABEL_43;
                    }
                  }
                  v38 += 4;
                  ++v36;
LABEL_54:
                  if ( (_BYTE)v39 == (_BYTE)v40 )
                  {
                    v13 = v67;
                    if ( v38[1] != *((_BYTE *)v36 + 1) )
                    {
                      ++v38;
                      v36 = (_DWORD *)((char *)v36 + 1);
                      goto LABEL_57;
                    }
                    v29 = v64;
                    if ( v38[2] == *((_BYTE *)v36 + 2) )
                    {
                      v38 += 3;
                      v36 = (_DWORD *)((char *)v36 + 3);
                    }
                    else
                    {
                      v38 += 2;
                      v36 = (_DWORD *)((char *)v36 + 2);
                    }
                  }
                  else
                  {
LABEL_57:
                    v29 = v64;
                  }
                }
                v41 = v38 - v31;
                v42 = (unsigned __int8 *)v36;
                v27 = (unsigned __int8 *)v36 - v41;
                if ( v41 <= v33 )
                {
                  v32 += v41;
                  goto LABEL_65;
                }
                v64 = v27;
                v33 = v41;
                v29 = v27;
                if ( v42 > v31 )
                  goto LABEL_66;
                goto LABEL_65;
              }
            }
          }
        }
LABEL_69:
        ++v11;
        ++*(_DWORD *)&a6[4 * (unsigned __int8)v26 + 1339936];
        *v16++ = v26;
        if ( v17 <= 0 )
        {
          *(_DWORD *)v10 = 2 * v17;
          v17 = 1;
          v10 = v16;
          v16 += 4;
        }
        else
        {
          v17 *= 2;
        }
      }
      if ( (unsigned __int64)v11 < v19 )
        break;
      v12 = v59;
      v15 = v60;
LABEL_87:
      while ( v11 < v15 )
      {
        ++*(_DWORD *)&a6[4 * *v11 + 1339936];
        v53 = *v11++;
        *v16++ = v53;
        if ( v17 <= 0 )
        {
          *(_DWORD *)v10 = 2 * v17;
          v17 = 1;
          v10 = v16;
          v16 += 4;
        }
        else
        {
          v17 *= 2;
        }
      }
      for ( ; v17 > 0; v17 = 2 * v17 + 1 )
        ;
      *(_DWORD *)v10 = 2 * v17 + 1;
      if ( (unsigned __int64)v11 < v13 )
      {
        v54 = 0;
      }
      else
      {
        ++*((_DWORD *)a6 + 335240);
        v54 = 1;
      }
      if ( &v12[4 * ((unsigned __int64)(XpressBuildHuffmanEncodings((_QWORD *)a6 + 163840) + v57 + 31) >> 5) + 258 + v58] >= v61 )
        return 3221225507LL;
      v10 = a6 + 1342240;
      v12 = XpressDoHuffmanPass((__int64)(a6 + 1310720), a6 + 1342240, (unsigned __int64)v16, v12, v54);
      v59 = v12;
      v55 = v54 == 0;
      v7 = a2;
      if ( !v55 )
      {
        *a5 = (_DWORD)v12 - v65;
        return 0LL;
      }
    }
    XpressCallback = RtlpMakeXpressCallback(v62, v19, v11);
    v19 = v69;
    v18 = XpressCallback;
    v13 = v67;
    v56 = XpressCallback;
    goto LABEL_18;
  }
  return 3221225507LL;
}
