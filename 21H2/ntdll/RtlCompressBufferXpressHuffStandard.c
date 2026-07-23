/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x18005B090
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x18005B020 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x18005B890 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x18005BB80 (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     RtlpMakeXpressCallback @ 0x18010DBC4 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int8 *v8; // r15
  unsigned __int8 *v9; // rdi
  void *v10; // r9
  __int64 v11; // r13
  __int64 v12; // r12
  unsigned __int64 XpressCallback; // rbp
  unsigned __int8 *v14; // rcx
  bool v15; // cc
  int v16; // esi
  unsigned __int8 *v17; // rbx
  unsigned __int8 v18; // al
  unsigned __int8 *v19; // r10
  unsigned __int8 *v20; // r11
  _DWORD *v21; // rdx
  __int64 v22; // r8
  unsigned __int8 *v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rbp
  __int64 v27; // r15
  char *v28; // r13
  __int64 v29; // rbp
  __int64 v30; // rbp
  __int64 v31; // r12
  _BYTE *v32; // r9
  int v33; // eax
  int v34; // ecx
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  char v38; // cl
  unsigned __int64 v39; // r8
  _BYTE *v40; // rax
  unsigned __int8 v41; // cl
  _WORD *v42; // rbx
  int v43; // eax
  unsigned __int64 v44; // rax
  unsigned __int8 v45; // al
  int v46; // esi
  __int64 v47; // rax
  bool v48; // zf
  __int64 v50; // r8
  unsigned __int8 *v51; // rcx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int8 *v54; // rcx
  unsigned __int64 v55; // r8
  unsigned __int8 *v56; // rdx
  __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rax
  int *v61; // rcx
  unsigned __int64 v62; // r8
  unsigned __int8 *v63; // r8
  __int64 v64; // [rsp+30h] [rbp-A8h]
  __int64 v65; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v66; // [rsp+40h] [rbp-98h]
  unsigned __int64 v67; // [rsp+58h] [rbp-80h]
  __int64 v68; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v69; // [rsp+70h] [rbp-68h]
  unsigned __int64 v70; // [rsp+78h] [rbp-60h]
  __int64 v71; // [rsp+80h] [rbp-58h]
  _QWORD v72[2]; // [rsp+88h] [rbp-50h] BYREF
  unsigned int v73; // [rsp+98h] [rbp-40h]
  int v75; // [rsp+F0h] [rbp+18h]
  unsigned __int8 *v77; // [rsp+110h] [rbp+38h]
  unsigned __int64 v79; // [rsp+118h] [rbp+40h]

  v75 = a3;
  v6 = a2;
  v71 = a2;
  v70 = a3 + a4;
  v7 = a2 + a1;
  v66 = v7;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v68 = a3;
  v72[0] = 0LL;
  v72[1] = 0LL;
  memset64(a6, a1, 0xAF6uLL);
  v73 = a2;
  v8 = (unsigned __int8 *)(a6 + 23184);
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v9 = (unsigned __int8 *)a1;
  v10 = a6 + 22608;
  while ( 2 )
  {
    v11 = 0LL;
    v64 = 0LL;
    v12 = 0LL;
    v65 = 0LL;
    memset(v10, 0, 0x800uLL);
    XpressCallback = (unsigned __int64)&v9[v6];
    v77 = v8;
    v14 = (unsigned __int8 *)v7;
    v15 = (unsigned __int64)(v9 + 0x10000) <= v7;
    v16 = 1;
    v17 = (unsigned __int8 *)(a6 + 23185);
    if ( v15 )
      v14 = v9 + 0x10000;
    v69 = v14;
    v67 = (unsigned __int64)(v14 - 40);
    if ( (unsigned __int64)(v14 - 40) < XpressCallback )
      XpressCallback = (unsigned __int64)(v14 - 40);
    v79 = XpressCallback;
    if ( v9 == (unsigned __int8 *)a1 )
    {
      v16 = 2;
      ++a6[*v9 + 22608];
      v18 = *v9++;
      *v17 = v18;
      v17 = (unsigned __int8 *)a6 + 92741;
    }
    if ( v9 >= v14 - 40 )
      goto LABEL_32;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = v9 + 1;
          v20 = v9;
          v21 = &a6[2 * *v9];
          v22 = v9[2] + 4LL * v9[1];
          v23 = *(unsigned __int8 **)&v21[4 * v22];
          *(_QWORD *)&v21[4 * v22] = v9;
          v24 = *v9;
          if ( *v23 != (_BYTE)v24 || v23[1] != *v19 || v23[2] != v9[2] || v9 - v23 >= 0x10000 )
            break;
          v25 = v9[3];
          v26 = v23[3];
          if ( (_BYTE)v25 != (_BYTE)v26 )
          {
            v50 = v24 + 2 * v22;
            v51 = *(unsigned __int8 **)&a6[2 * v50 + 5612 + 2 * v25];
            *(_QWORD *)&a6[2 * v50 + 5612 + 2 * v26] = v23;
            if ( v9 - v51 >= 0x10000 || (v52 = *(unsigned int *)v9, (_DWORD)v52 != *(_DWORD *)v51) )
            {
              v9 += 3;
              v32 = v23 + 3;
              goto LABEL_22;
            }
            v23 = v51;
            *(_QWORD *)&a6[2 * v50 + 5612 + 2 * (v52 >> 24)] = v9;
          }
          v27 = v9[4];
          v28 = (char *)(v9 + 4);
          v29 = v23[4];
          if ( (_BYTE)v27 != (_BYTE)v29 )
          {
            v53 = 2
                * ((unsigned __int8)__ROR1__(*v19 ^ __ROL1__(*v9 + v9[3], 3), 1)
                 + 4LL * (unsigned __int8)__ROL1__(*v9 ^ __ROR1__(v9[2] + *v19 + 97, 1), 3));
            v54 = *(unsigned __int8 **)&a6[2 * v53 + 5612 + 2 * v27];
            *(_QWORD *)&a6[2 * v53 + 5612 + 2 * v29] = v23;
            if ( v9 - v54 >= 0x10000
              || *(_DWORD *)v9 != *(_DWORD *)v54
              || (v57 = (unsigned __int8)*v28, (_BYTE)v57 != v54[4])
              || v9 == v54 )
            {
              v9 += 4;
              v32 = v23 + 4;
              goto LABEL_22;
            }
            v23 = v54;
            *(_QWORD *)&a6[2 * v53 + 5612 + 2 * v57] = v9;
          }
          v30 = v23[5];
          v31 = v9[5];
          if ( (_BYTE)v31 != (_BYTE)v30 )
          {
            v55 = 2
                * ((v9[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v9, *v28))
                 + 4
                 * ((unsigned __int8)__ROR1__(*v19 ^ __ROL1__(v9[3], 3), 1)
                  + (unsigned __int64)(unsigned __int8)__ROL1__(*v28 ^ (__ROR1__(*v9, 1) + 69), 3)));
            v56 = *(unsigned __int8 **)&a6[2 * v55 + 5612 + 2 * v31];
            *(_QWORD *)&a6[2 * v55 + 5612 + 2 * v30] = v23;
            if ( v9 - v56 >= 0x10000
              || *(_DWORD *)v9 != *(_DWORD *)v56
              || *v28 != v56[4]
              || (v60 = v9[5], v9 == v56)
              || (_BYTE)v60 != v56[5] )
            {
              v9 += 5;
              v32 = v23 + 5;
              goto LABEL_22;
            }
            v23 = v56;
            *(_QWORD *)&a6[2 * v55 + 5612 + 2 * v60] = v9;
          }
          v9 += 6;
          v32 = v23 + 6;
          if ( (unsigned __int64)v9 >= v66 - 40 )
          {
LABEL_69:
            while ( (unsigned __int64)v9 < v66 )
            {
              if ( *v9 != *v32 )
                break;
              ++v9;
              ++v32;
            }
          }
          else
          {
            while ( 1 )
            {
              v33 = *(_DWORD *)v32;
              v34 = *(_DWORD *)v9;
              if ( *(_DWORD *)v9 != *(_DWORD *)v32 )
                break;
              v33 = *((_DWORD *)v32 + 1);
              v34 = *((_DWORD *)v9 + 1);
              if ( v34 != v33 )
              {
                v9 += 4;
                v32 += 4;
                break;
              }
              v33 = *((_DWORD *)v32 + 2);
              v34 = *((_DWORD *)v9 + 2);
              if ( v34 != v33 )
              {
                v9 += 8;
                v32 += 8;
                break;
              }
              v33 = *((_DWORD *)v32 + 3);
              v34 = *((_DWORD *)v9 + 3);
              if ( v34 != v33 )
              {
                v9 += 12;
                v32 += 12;
                break;
              }
              v33 = *((_DWORD *)v32 + 4);
              v34 = *((_DWORD *)v9 + 4);
              if ( v34 != v33 )
              {
                v9 += 16;
                v32 += 16;
                break;
              }
              v33 = *((_DWORD *)v32 + 5);
              v34 = *((_DWORD *)v9 + 5);
              if ( v34 != v33 )
              {
                v9 += 20;
                v32 += 20;
                break;
              }
              v33 = *((_DWORD *)v32 + 6);
              v34 = *((_DWORD *)v9 + 6);
              if ( v34 != v33 )
              {
                v9 += 24;
                v32 += 24;
                break;
              }
              v33 = *((_DWORD *)v32 + 7);
              v34 = *((_DWORD *)v9 + 7);
              if ( v34 != v33 )
              {
                v9 += 28;
                v32 += 28;
                break;
              }
              v9 += 32;
              v32 += 32;
              if ( (unsigned __int64)v9 >= v66 - 40 )
                goto LABEL_69;
            }
            if ( (_BYTE)v34 == (_BYTE)v33 )
            {
              if ( v9[1] == v32[1] )
              {
                if ( v9[2] == v32[2] )
                {
                  v9 += 3;
                  v32 += 3;
                }
                else
                {
                  v9 += 2;
                  v32 += 2;
                }
              }
              else
              {
                ++v9;
                ++v32;
              }
            }
          }
LABEL_22:
          v35 = v9 - v32;
          if ( v9 - v20 == 3 && v35 > 0x1000 )
          {
            XpressCallback = v79;
            v8 = v77;
            break;
          }
          if ( v35 >= 0x100 )
            v36 = XpressHighBitIndexTable[v35 >> 8] + 8LL;
          else
            v36 = XpressHighBitIndexTable[v35];
          v11 = v36 + v64;
          v37 = v35 - (1LL << v36);
          v38 = 16 * v36;
          v39 = v9 - v20 - 3;
          v64 = v11;
          v40 = v17 + 1;
          if ( v39 >= 0xF )
          {
            v41 = v38 + 15;
            v58 = v9 - v20 - 18;
            *v17 = v41;
            v42 = v17 + 2;
            if ( v58 >= 0xFF )
            {
              v62 = v58 + 15;
              *v40 = -1;
              if ( v62 < 0x10000 )
              {
                *v42 = v62;
                v42 = v40 + 3;
                v65 += 3LL;
                goto LABEL_27;
              }
              *(_DWORD *)(v40 + 3) = v62;
              *v42 = 0;
              v42 = v40 + 7;
              v59 = 7LL;
            }
            else
            {
              *v40 = v58;
              v59 = 1LL;
            }
            v65 += v59;
          }
          else
          {
            v41 = v39 + v38;
            *v17 = v41;
            v42 = v17 + 1;
          }
LABEL_27:
          ++a6[v41 + 22864];
          v43 = 2 * v16 + 1;
          *v42 = v37;
          v17 = (unsigned __int8 *)(v42 + 1);
          if ( v16 <= 0 )
          {
            v61 = (int *)v77;
            v16 = 1;
            v77 = v17;
            v17 += 4;
            *v61 = v43;
          }
          else
          {
            v16 = 2 * v16 + 1;
          }
          XpressCallback = v79;
          v8 = v77;
          if ( (unsigned __int64)v9 >= v79 )
          {
            v44 = v67;
            if ( (unsigned __int64)v9 >= v67 )
              goto LABEL_31;
            v63 = v9;
LABEL_101:
            XpressCallback = RtlpMakeXpressCallback(v72, v44, v63);
            v79 = XpressCallback;
          }
        }
        v9 = v19;
        ++a6[*v20 + 22608];
        *v17++ = *v20;
        if ( v16 <= 0 )
          break;
        v16 *= 2;
      }
      *(_DWORD *)v8 = 2 * v16;
      v16 = 1;
      v8 = v17;
      v77 = v17;
      v17 += 4;
    }
    while ( (unsigned __int64)v19 < XpressCallback );
    v44 = v67;
    if ( (unsigned __int64)v19 < v67 )
    {
      v63 = v19;
      goto LABEL_101;
    }
    v11 = v64;
LABEL_31:
    v12 = v65;
    v14 = v69;
LABEL_32:
    while ( v9 < v14 )
    {
      ++a6[*v9 + 22608];
      v45 = *v9++;
      *v17++ = v45;
      if ( v16 <= 0 )
      {
        *(_DWORD *)v8 = 2 * v16;
        v16 = 1;
        v8 = v17;
        v17 += 4;
      }
      else
      {
        v16 *= 2;
      }
    }
    for ( ; v16 > 0; v16 = 2 * v16 + 1 )
      ;
    *(_DWORD *)v8 = 2 * v16 + 1;
    if ( (unsigned __int64)v9 < v66 )
    {
      v46 = 0;
    }
    else
    {
      ++a6[22864];
      v46 = 1;
    }
    if ( v12 + 4 * ((unsigned __int64)(v11 + XpressBuildHuffmanEncodings(a6 + 15304) + 31) >> 5) + v68 + 258 < v70 )
    {
      v8 = (unsigned __int8 *)(a6 + 23184);
      v47 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, (_DWORD)v17, v68, v46);
      v7 = v66;
      v10 = a6 + 22608;
      v48 = v46 == 0;
      v68 = v47;
      v6 = v71;
      if ( !v48 )
      {
        *a5 = v47 - v75;
        return 0LL;
      }
      continue;
    }
    return 3221225507LL;
  }
}
