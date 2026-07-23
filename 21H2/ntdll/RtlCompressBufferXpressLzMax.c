/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x18010D57C
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x180086860 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     memset @ 0x1800A4740 (memset.c)
 *     RtlpMakeXpressCallback @ 0x18010DBC4 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        void *a6)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  unsigned int v8; // r15d
  unsigned __int8 *v10; // r12
  __int64 v11; // r13
  _QWORD *v13; // r10
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // al
  _BYTE *v16; // rbx
  int v17; // esi
  __int16 v18; // r11
  _DWORD *v19; // r8
  char *v20; // rdi
  unsigned __int8 *v21; // r14
  unsigned __int64 v22; // r9
  char *v23; // rax
  __int64 v24; // r11
  char *v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r15
  __int16 v29; // r14
  __int64 XpressCallback; // rax
  int v31; // r12d
  unsigned __int64 v32; // rdx
  int v33; // ecx
  bool v34; // zf
  __int16 v35; // cx
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // rax
  _QWORD *v39; // rax
  unsigned __int64 v40; // r10
  __int64 v41; // r9
  char *v42; // r11
  _BYTE *v43; // rax
  _BYTE *v44; // rdi
  int v45; // eax
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // r13
  _BYTE *v49; // r11
  unsigned __int64 v50; // rax
  char v51; // cl
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  char v54; // al
  unsigned int v55; // ebx
  _DWORD *v56; // [rsp+20h] [rbp-88h]
  __int64 v57; // [rsp+28h] [rbp-80h]
  unsigned __int8 *v58; // [rsp+30h] [rbp-78h]
  unsigned __int64 v59; // [rsp+38h] [rbp-70h]
  __int16 v60; // [rsp+40h] [rbp-68h]
  unsigned __int64 v61; // [rsp+48h] [rbp-60h]
  _QWORD v62[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v63; // [rsp+60h] [rbp-48h]
  __int16 v64; // [rsp+B0h] [rbp+8h]
  int v65; // [rsp+C0h] [rbp+18h]
  __int64 v67; // [rsp+E0h] [rbp+38h]
  _BYTE *v69; // [rsp+E8h] [rbp+40h]

  v65 = a3;
  v64 = a1;
  v6 = a1 + a2;
  v7 = a3 + a4;
  v8 = a2;
  v61 = v7;
  v10 = (unsigned __int8 *)a1;
  v11 = 0LL;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  memset(a6, 0, 0x40000uLL);
  v13 = a6;
  v67 = v7 - 41;
  v14 = v6 - 5;
  v15 = *v10;
  v16 = (_BYTE *)(a3 + 5);
  v69 = 0LL;
  v17 = 2;
  v62[0] = 0LL;
  v18 = 0;
  v62[1] = 0LL;
  v19 = (_DWORD *)a3;
  *(_BYTE *)(a3 + 4) = v15;
  v20 = (char *)(v10 + 1);
  v63 = v8;
  v58 = v10;
  v56 = (_DWORD *)a3;
  while ( 2 )
  {
    v21 = v58;
    v22 = v14;
    if ( (unsigned __int64)(v58 + 0x2000) <= v14 )
      v22 = (unsigned __int64)(v58 + 0x2000);
    v23 = &v20[v8];
    v59 = v22;
    if ( v22 < (unsigned __int64)v23 )
      v23 = (char *)v22;
    v24 = v18 & 0x3FFF;
    v57 = (__int64)v23;
    v60 = v24;
    if ( (unsigned __int64)v58 < v22 )
    {
      v25 = (char *)&v13[v24 + 0x8000];
      do
      {
        v25 += 8;
        LOWORD(v24) = v24 + 1;
        v26 = (unsigned __int16)XpressHashFunction[v21[2] + 512] ^ (unsigned __int16)XpressHashFunction[*v21] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v21[1] + 256];
        *((_QWORD *)v25 - 1) = v13[v26];
        v13[v26] = v21++;
      }
      while ( (unsigned __int64)v21 < v22 );
      LOWORD(v10) = v64;
      v58 = v21;
      v60 = v24;
    }
    v27 = v67;
LABEL_15:
    v28 = (unsigned __int64)(v20 - 0x2000);
    v29 = 0x2000 - (_WORD)v10;
    while ( 1 )
    {
      if ( v20 < v23 )
        goto LABEL_19;
      if ( (unsigned __int64)v20 >= v22 )
        break;
      XpressCallback = RtlpMakeXpressCallback(v62, v22, v20);
      v19 = v56;
      v22 = v59;
      v13 = a6;
      v27 = v67;
      v57 = XpressCallback;
LABEL_19:
      v31 = *(_DWORD *)v20;
      v32 = v13[((v29 + (unsigned __int16)v28) & 0x3FFF) + 0x8000];
      if ( v32 >= v28 )
      {
        v33 = v31 ^ *(_DWORD *)v32;
        if ( !v33 )
        {
          v35 = v64;
LABEL_34:
          v41 = 0LL;
          v40 = 3LL;
LABEL_35:
          v42 = v20;
          v43 = v20 + 36;
          v44 = v20 + 4;
          v32 += 4LL;
          if ( (unsigned __int64)v43 >= v6 )
          {
LABEL_46:
            while ( (unsigned __int64)v44 < v6 )
            {
              if ( *v44 != *(_BYTE *)v32 )
                break;
              ++v44;
              ++v32;
            }
          }
          else
          {
            while ( 1 )
            {
              v45 = *(_DWORD *)v44;
              v46 = *(_DWORD *)v32;
              if ( *(_DWORD *)v44 != *(_DWORD *)v32 )
                break;
              v45 = *((_DWORD *)v44 + 1);
              v46 = *(_DWORD *)(v32 + 4);
              if ( v45 != v46 )
              {
                v44 += 4;
                v32 += 4LL;
                break;
              }
              v45 = *((_DWORD *)v44 + 2);
              v46 = *(_DWORD *)(v32 + 8);
              if ( v45 != v46 )
              {
                v44 += 8;
                v32 += 8LL;
                break;
              }
              v45 = *((_DWORD *)v44 + 3);
              v46 = *(_DWORD *)(v32 + 12);
              if ( v45 != v46 )
              {
                v44 += 12;
                v32 += 12LL;
                break;
              }
              v45 = *((_DWORD *)v44 + 4);
              v46 = *(_DWORD *)(v32 + 16);
              if ( v45 != v46 )
              {
                v44 += 16;
                v32 += 16LL;
                break;
              }
              v45 = *((_DWORD *)v44 + 5);
              v46 = *(_DWORD *)(v32 + 20);
              if ( v45 != v46 )
              {
                v44 += 20;
                v32 += 20LL;
                break;
              }
              v45 = *((_DWORD *)v44 + 6);
              v46 = *(_DWORD *)(v32 + 24);
              if ( v45 != v46 )
              {
                v44 += 24;
                v32 += 24LL;
                break;
              }
              v45 = *((_DWORD *)v44 + 7);
              v46 = *(_DWORD *)(v32 + 28);
              if ( v45 != v46 )
              {
                v44 += 28;
                v32 += 28LL;
                break;
              }
              v44 += 32;
              v32 += 32LL;
              if ( (unsigned __int64)(v44 + 32) >= v6 )
              {
                v35 = v64;
                goto LABEL_46;
              }
            }
            if ( (_BYTE)v45 == (_BYTE)v46 )
            {
              if ( v44[1] != *(_BYTE *)(v32 + 1) )
              {
                ++v44;
                ++v32;
                goto LABEL_60;
              }
              v35 = v64;
              if ( v44[2] == *(_BYTE *)(v32 + 2) )
              {
                v44 += 3;
                v32 += 3LL;
              }
              else
              {
                v44 += 2;
                v32 += 2LL;
              }
            }
            else
            {
LABEL_60:
              v35 = v64;
            }
          }
          v47 = v44 - v42;
          if ( v44 - v42 <= v40 )
          {
            v41 += v47;
          }
          else
          {
            v40 = v44 - v42;
            v11 = (__int64)&v44[-v32];
            if ( v32 > (unsigned __int64)v42 )
            {
              v19 = v56;
              v20 = v42;
              v27 = v67;
              goto LABEL_64;
            }
          }
          v19 = v56;
          LOWORD(v32) = v32 - v47;
          v39 = a6;
          v20 = v42;
          v27 = v67;
          while ( (unsigned __int64)++v41 < 0x18 )
          {
LABEL_72:
            v32 = v39[(((unsigned __int16)v32 - v35) & 0x3FFF) + 0x8000];
            if ( v32 < v28 )
              break;
            if ( v31 == *(_DWORD *)v32 )
              goto LABEL_35;
          }
LABEL_64:
          v20 += v40;
          v48 = 8 * v11 - 8;
          if ( v40 - 3 < 7 )
          {
            v11 = v40 - 3 + v48;
            *(_WORD *)v16 = v11;
            v16 += 2;
            goto LABEL_88;
          }
          v49 = v69;
          v11 = v48 | 7;
          *(_WORD *)v16 = v11;
          v50 = v40 - 10;
          v16 += 2;
          if ( v69 )
          {
            v51 = *v69;
            v69 = 0LL;
            if ( v50 < 0xF )
            {
              *v49 = v51 | (16 * v50);
              goto LABEL_87;
            }
            *v49 = v51 | 0xF0;
          }
          else
          {
            v69 = v16;
            if ( v50 < 0xF )
            {
              *v16++ = v50;
LABEL_87:
              v27 = v67;
LABEL_88:
              if ( v17 <= 0 )
              {
                *v19 = 2 * v17 + 1;
                v17 = 1;
                v19 = v16;
                v56 = v16;
                v16 += 4;
              }
              else
              {
                v17 = 2 * v17 + 1;
              }
              if ( (unsigned __int64)v16 < v27 )
              {
                LOWORD(v10) = v64;
                v22 = v59;
                v13 = a6;
                v23 = (char *)v57;
                goto LABEL_15;
              }
              goto LABEL_94;
            }
            *v16++ = 15;
          }
          v52 = v40 - 25;
          if ( v40 - 25 >= 0xFF )
          {
            v53 = v52 + 22;
            *v16 = -1;
            if ( v53 >= 0x10000 )
            {
              *(_WORD *)(v16 + 1) = 0;
              *(_DWORD *)(v16 + 3) = v53;
              v16 += 7;
            }
            else
            {
              *(_WORD *)(v16 + 1) = v53;
              v16 += 3;
            }
          }
          else
          {
            *v16++ = v52;
          }
          goto LABEL_87;
        }
        v34 = (v33 & 0xFFFFFF) == 0;
        v35 = v64;
        if ( v34 )
          goto LABEL_32;
        v32 = v13[(((unsigned __int16)v32 - v64) & 0x3FFF) + 0x8000];
        if ( v32 >= v28 )
        {
          v36 = v31 ^ *(_DWORD *)v32;
          if ( !v36 )
            goto LABEL_34;
          if ( (v36 & 0xFFFFFF) == 0 )
            goto LABEL_32;
          v32 = v13[(((unsigned __int16)v32 - v64) & 0x3FFF) + 0x8000];
          if ( v32 >= v28 )
          {
            v37 = v31 ^ *(_DWORD *)v32;
            if ( !v37 )
              goto LABEL_34;
            if ( (v37 & 0xFFFFFF) == 0 )
            {
LABEL_32:
              v39 = a6;
              v28 = (unsigned __int64)(v20 - 0x2000);
              v40 = 3LL;
              v11 = (__int64)&v20[-v32];
              v41 = 0LL;
              goto LABEL_72;
            }
          }
        }
      }
      *v16++ = v31;
      ++v20;
      ++v28;
      v38 = v16;
      if ( v17 <= 0 )
      {
        v16 += 4;
        *v19 = 2 * v17;
        v17 = 1;
        v19 = v38;
        if ( (unsigned __int64)v16 >= v27 )
          goto LABEL_94;
        v56 = v38;
        v23 = (char *)v57;
      }
      else
      {
        v23 = (char *)v57;
        v17 *= 2;
      }
    }
    LOWORD(v10) = v64;
    v14 = v6 - 5;
    v8 = a2;
    v18 = v60;
    if ( (unsigned __int64)v20 < v6 - 5 )
      continue;
    break;
  }
LABEL_94:
  if ( (unsigned __int64)v20 >= v6 )
  {
LABEL_100:
    if ( (unsigned __int64)v16 >= v61 )
      return 3221225507LL;
    for ( ; v17 > 0; v17 = 2 * v17 + 1 )
      ;
    v55 = (_DWORD)v16 - v65;
    *v19 = 2 * v17 + 1;
    if ( v55 < 8 )
      v55 = 8;
    *a5 = v55;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v16 < v61 )
    {
      v54 = *v20++;
      *v16++ = v54;
      if ( v17 <= 0 )
      {
        *v19 = 2 * v17;
        v17 = 1;
        v19 = v16;
        v16 += 4;
      }
      else
      {
        v17 *= 2;
      }
      if ( (unsigned __int64)v20 >= v6 )
        goto LABEL_100;
    }
    return 3221225507LL;
  }
}
