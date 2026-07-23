/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x1800868D0
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x180086860 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x18010DBC4 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6)
{
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r9
  unsigned __int8 *v9; // r15
  unsigned __int64 v10; // r12
  int v11; // r14d
  _BYTE *v12; // rsi
  unsigned __int8 *v13; // rbx
  _DWORD *v14; // rbp
  _DWORD *v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rdi
  unsigned __int8 *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // r12
  int v26; // ecx
  int v27; // eax
  _DWORD *v28; // rdi
  unsigned __int64 v29; // rcx
  __int16 v30; // ax
  unsigned __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rdi
  unsigned __int8 *v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int8 *v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int8 *v41; // rcx
  __int64 v42; // rax
  char v43; // al
  unsigned int v44; // esi
  __int64 XpressCallback; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  char *v49; // [rsp+20h] [rbp-78h]
  _DWORD *v50; // [rsp+28h] [rbp-70h]
  unsigned __int64 v51; // [rsp+30h] [rbp-68h]
  unsigned __int8 *v52; // [rsp+38h] [rbp-60h]
  unsigned __int64 v53; // [rsp+40h] [rbp-58h]
  _QWORD v54[2]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v55; // [rsp+58h] [rbp-40h]
  __int64 v56; // [rsp+A0h] [rbp+8h]
  int v57; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v59; // [rsp+D0h] [rbp+38h]
  unsigned __int64 v61; // [rsp+D8h] [rbp+40h]

  v57 = a3;
  v6 = (unsigned __int64)&a1[a2];
  v7 = a3 + a4;
  v51 = v6;
  v53 = v7;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v8 = v6 - 38;
  v54[0] = 0LL;
  v9 = &a1[a2];
  v54[1] = 0LL;
  if ( v6 >= 0x26 )
    v9 = (unsigned __int8 *)(v6 - 38);
  v55 = a2;
  v10 = v7 - 41;
  v56 = (__int64)v9;
  v11 = 2;
  v61 = v6 - 38;
  v12 = (_BYTE *)(a3 + 5);
  v59 = v7 - 41;
  v13 = a1 + 1;
  v49 = 0LL;
  v14 = (_DWORD *)a3;
  *(_BYTE *)(a3 + 4) = *a1;
  if ( a2 >= 0x40 )
  {
    v50 = (_DWORD *)a3;
    memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
    v15 = (_DWORD *)a3;
    memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = a6 + 8LL * *v13;
        v17 = v13[2] + 4LL * v13[1];
        v18 = *(unsigned __int8 **)(v16 + 16 * v17);
        *(_QWORD *)(v16 + 16 * v17) = v13;
        v19 = *v13;
        if ( *(_WORD *)v18 == *(_WORD *)v13 && v18[2] == v13[2] && v13 - v18 < 0x2000 )
          break;
        *v12++ = v19;
        ++v13;
        v28 = v12;
        if ( v11 <= 0 )
        {
          v12 += 4;
          *v15 = 2 * v11;
          v11 = 1;
          if ( v13 >= v9 )
          {
            v14 = v28;
            if ( (unsigned __int64)v13 >= v8 )
            {
LABEL_79:
              v7 = v53;
              v6 = v51;
              LODWORD(a3) = v57;
              goto LABEL_80;
            }
            XpressCallback = RtlpMakeXpressCallback(v54, v8, v13);
            v8 = v61;
            v9 = (unsigned __int8 *)XpressCallback;
            v56 = XpressCallback;
          }
          v14 = v28;
          if ( (unsigned __int64)v12 >= v10 )
            goto LABEL_79;
          v15 = v28;
          v50 = v28;
        }
        else
        {
          v11 *= 2;
        }
      }
      v20 = v13[3];
      v21 = v18[3];
      v52 = v13;
      if ( (_BYTE)v20 != (_BYTE)v21 )
      {
        v33 = v19 + 2 * v17;
        v34 = *(unsigned __int8 **)(a6 + 8 * (v33 + v20) + 22448);
        *(_QWORD *)(a6 + 8 * (v33 + v21) + 22448) = v18;
        if ( v13 - v34 >= 0x2000 || (v35 = *(unsigned int *)v13, (_DWORD)v35 != *(_DWORD *)v34) )
        {
          v8 = v61;
          v13 += 3;
          LOWORD(v18) = (_WORD)v18 + 3;
          goto LABEL_32;
        }
        v18 = v34;
        *(_QWORD *)(a6 + 8 * (v33 + (v35 >> 24)) + 22448) = v13;
      }
      v22 = v13[4];
      v23 = v18[4];
      if ( (_BYTE)v22 != (_BYTE)v23 )
      {
        v36 = 2
            * ((unsigned __int8)__ROR1__(v13[1] ^ __ROL1__(v13[3] + *v13, 3), 1)
             + 4LL * (unsigned __int8)__ROL1__(*v13 ^ __ROR1__(v13[1] + v13[2] + 97, 1), 3));
        v37 = *(unsigned __int8 **)(a6 + 8 * (v36 + v22) + 22448);
        *(_QWORD *)(a6 + 8 * (v36 + v23) + 22448) = v18;
        if ( v13 - v37 >= 0x2000
          || *(_DWORD *)v13 != *(_DWORD *)v37
          || (v38 = v13[4], (_BYTE)v38 != v37[4])
          || v13 == v37 )
        {
          v8 = v61;
          v13 += 4;
          v9 = (unsigned __int8 *)v56;
          LOWORD(v18) = (_WORD)v18 + 4;
          goto LABEL_32;
        }
        v18 = v37;
        *(_QWORD *)(a6 + 8 * (v36 + v38) + 22448) = v13;
      }
      v24 = v13[5];
      v25 = v18[5];
      if ( (_BYTE)v24 != (_BYTE)v25 )
      {
        v40 = 2
            * ((v13[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v13, v13[4]))
             + 4
             * ((unsigned __int8)__ROR1__(v13[1] ^ __ROL1__(v13[3], 3), 1)
              + (unsigned __int64)(unsigned __int8)__ROL1__(v13[4] ^ (__ROR1__(*v13, 1) + 69), 3)));
        v41 = *(unsigned __int8 **)(a6 + 8 * (v40 + v24) + 22448);
        *(_QWORD *)(a6 + 8 * (v40 + v25) + 22448) = v18;
        if ( v13 - v41 >= 0x2000
          || *(_DWORD *)v13 != *(_DWORD *)v41
          || v13[4] != v41[4]
          || (v42 = v13[5], (_BYTE)v42 != v41[5])
          || v13 == v41 )
        {
          v8 = v61;
          v13 += 5;
          v10 = v59;
          LOWORD(v18) = (_WORD)v18 + 5;
          v9 = (unsigned __int8 *)v56;
          goto LABEL_32;
        }
        v18 = v41;
        *(_QWORD *)(a6 + 8 * (v40 + v42) + 22448) = v13;
      }
      v8 = v61;
      v13 += 6;
      v18 += 6;
      if ( (unsigned __int64)v13 >= v61 )
      {
LABEL_95:
        while ( (unsigned __int64)v13 < v51 )
        {
          if ( *v13 != *v18 )
            break;
          ++v13;
          ++v18;
        }
        goto LABEL_43;
      }
      while ( 1 )
      {
        v26 = *(_DWORD *)v13;
        v27 = *(_DWORD *)v18;
        if ( *(_DWORD *)v13 != *(_DWORD *)v18 )
          break;
        v26 = *((_DWORD *)v13 + 1);
        v27 = *((_DWORD *)v18 + 1);
        if ( v26 != v27 )
        {
          v13 += 4;
          v18 += 4;
          break;
        }
        v26 = *((_DWORD *)v13 + 2);
        v27 = *((_DWORD *)v18 + 2);
        if ( v26 != v27 )
        {
          v13 += 8;
          v18 += 8;
          break;
        }
        v26 = *((_DWORD *)v13 + 3);
        v27 = *((_DWORD *)v18 + 3);
        if ( v26 != v27 )
        {
          v13 += 12;
          v18 += 12;
          break;
        }
        v26 = *((_DWORD *)v13 + 4);
        v27 = *((_DWORD *)v18 + 4);
        if ( v26 != v27 )
        {
          v13 += 16;
          v18 += 16;
          break;
        }
        v26 = *((_DWORD *)v13 + 5);
        v27 = *((_DWORD *)v18 + 5);
        if ( v26 != v27 )
        {
          v13 += 20;
          v18 += 20;
          break;
        }
        v26 = *((_DWORD *)v13 + 6);
        v27 = *((_DWORD *)v18 + 6);
        if ( v26 != v27 )
        {
          v13 += 24;
          v18 += 24;
          break;
        }
        v26 = *((_DWORD *)v13 + 7);
        v27 = *((_DWORD *)v18 + 7);
        if ( v26 != v27 )
        {
          v13 += 28;
          v18 += 28;
          break;
        }
        v13 += 32;
        v18 += 32;
        if ( (unsigned __int64)v13 >= v61 )
          goto LABEL_95;
      }
      if ( (_BYTE)v26 != (_BYTE)v27 )
        goto LABEL_43;
      if ( v13[1] != v18[1] )
      {
        ++v13;
        LOWORD(v18) = (_WORD)v18 + 1;
LABEL_43:
        v10 = v59;
        v9 = (unsigned __int8 *)v56;
        goto LABEL_32;
      }
      v9 = (unsigned __int8 *)v56;
      v10 = v59;
      if ( v13[2] == v18[2] )
      {
        v13 += 3;
        LOWORD(v18) = (_WORD)v18 + 3;
      }
      else
      {
        v13 += 2;
        LOWORD(v18) = (_WORD)v18 + 2;
      }
LABEL_32:
      v29 = v13 - v52 - 3;
      v30 = 8 * ((_WORD)v13 - (_WORD)v18) - 8;
      if ( v29 < 7 )
      {
        *(_WORD *)v12 = v29 + v30;
        v12 += 2;
      }
      else
      {
        *(_WORD *)v12 = v30 | 7;
        v31 = v13 - v52 - 10;
        v12 += 2;
        if ( v49 )
        {
          v32 = *v49;
          if ( v31 >= 0xF )
          {
            *v49 = v32 | 0xF0;
            v49 = 0LL;
LABEL_55:
            v39 = v13 - v52 - 25;
            if ( v39 >= 0xFF )
            {
              v47 = v39 + 22;
              *v12 = -1;
              if ( v47 >= 0x10000 )
              {
                *(_WORD *)(v12 + 1) = 0;
                *(_DWORD *)(v12 + 3) = v47;
                v12 += 7;
              }
              else
              {
                *(_WORD *)(v12 + 1) = v47;
                v12 += 3;
              }
            }
            else
            {
              *v12++ = v39;
            }
            goto LABEL_37;
          }
          *v49 = v32 | (16 * v31);
          v49 = 0LL;
        }
        else
        {
          v49 = v12;
          if ( v31 >= 0xF )
          {
            *v12++ = 15;
            goto LABEL_55;
          }
          *v12++ = v31;
        }
      }
LABEL_37:
      v14 = v50;
      if ( v11 <= 0 )
      {
        *v50 = 2 * v11 + 1;
        v11 = 1;
        v14 = v12;
        v50 = v12;
        v12 += 4;
      }
      else
      {
        v11 = 2 * v11 + 1;
      }
      if ( v13 >= v9 )
      {
        if ( (unsigned __int64)v13 >= v8 )
          goto LABEL_79;
        v48 = RtlpMakeXpressCallback(v54, v8, v13);
        v8 = v61;
        v9 = (unsigned __int8 *)v48;
        v56 = v48;
      }
      if ( (unsigned __int64)v12 >= v10 )
        goto LABEL_79;
      v15 = v50;
    }
  }
LABEL_80:
  if ( (unsigned __int64)v13 < v6 )
  {
    while ( (unsigned __int64)v12 < v7 )
    {
      v43 = *v13++;
      *v12++ = v43;
      if ( v11 <= 0 )
      {
        *v14 = 2 * v11;
        v11 = 1;
        v14 = v12;
        v12 += 4;
      }
      else
      {
        v11 *= 2;
      }
      if ( (unsigned __int64)v13 >= v6 )
        goto LABEL_85;
    }
    return 3221225507LL;
  }
LABEL_85:
  if ( (unsigned __int64)v12 >= v7 )
    return 3221225507LL;
  for ( ; v11 > 0; v11 = 2 * v11 + 1 )
    ;
  v44 = (_DWORD)v12 - a3;
  *v14 = 2 * v11 + 1;
  *a5 = v44;
  if ( v44 < 8 )
    *a5 = 8;
  return 0LL;
}
