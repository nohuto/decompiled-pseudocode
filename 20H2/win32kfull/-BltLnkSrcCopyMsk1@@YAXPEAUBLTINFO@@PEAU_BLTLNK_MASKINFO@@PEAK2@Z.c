/*
 * XREFs of ?BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02DB340
 * Callers:
 *     <none>
 * Callees:
 *     ?BltLnkReadPat1@@YAXPEAEKPEBEKKKK@Z @ 0x1C02DAE10 (-BltLnkReadPat1@@YAXPEAEKPEBEKKKK@Z.c)
 */

void __fastcall BltLnkSrcCopyMsk1(
        struct BLTINFO *a1,
        struct _BLTLNK_MASKINFO *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // r8
  __int64 v6; // rdx
  unsigned __int8 *v7; // r10
  int v8; // eax
  int v10; // r14d
  const unsigned __int8 *v11; // rbp
  int v12; // r13d
  int v13; // edi
  unsigned int v14; // ecx
  const unsigned __int8 *v15; // r12
  _BYTE *v16; // rbx
  char *v17; // rdx
  __int64 v18; // r12
  char v19; // cl
  int v20; // r8d
  char v21; // al
  int v22; // eax
  char *v23; // rdx
  char v24; // cl
  int v25; // r8d
  char v26; // al
  int v27; // eax
  int v28; // [rsp+40h] [rbp-68h]
  __int64 v29; // [rsp+48h] [rbp-60h]
  __int64 v30; // [rsp+50h] [rbp-58h]
  unsigned int v31; // [rsp+B0h] [rbp+8h]
  int v32; // [rsp+B8h] [rbp+10h]

  v4 = *((_QWORD *)a1 + 2);
  v6 = *((_QWORD *)a1 + 1);
  v7 = a4;
  v8 = *((_DWORD *)a1 + 8);
  v30 = v6;
  v10 = *((_DWORD *)a2 + 5);
  v11 = *(const unsigned __int8 **)a2;
  v29 = v4;
  while ( v8 )
  {
    v12 = *((_DWORD *)a1 + 14);
    v13 = *((_DWORD *)a1 + 7);
    v28 = v8 - 1;
    v14 = *((_DWORD *)a1 + 12) & 7;
    v15 = (const unsigned __int8 *)(v6 + ((__int64)*((int *)a1 + 12) >> 3));
    v31 = *((_DWORD *)a2 + 7);
    v16 = (_BYTE *)(v4 + ((__int64)v12 >> 3));
    v32 = v12 & 7;
    if ( v14 != v32 )
    {
      BltLnkReadPat1(v7, v12 & 7, v15, v13, v14, v13);
      v15 = a4;
    }
    BltLnkReadPat1(a3, v12, v11, *((_DWORD *)a2 + 6), v31, v13);
    if ( *((_BYTE *)a2 + 36) )
    {
      *a3 |= -1 << (8 - v32);
      a3[(unsigned __int64)(unsigned int)(v13 + v32) >> 3] |= 255 >> ((v13 + v12) & 7);
      if ( v13 <= 0 )
        goto LABEL_30;
      v23 = (char *)(a3 - v16);
      while ( 2 )
      {
        v24 = v16[(_QWORD)v23];
        v25 = v13;
        if ( !v24 )
        {
          v26 = *v15;
          goto LABEL_24;
        }
        if ( v24 != -1 )
        {
          v26 = *v16 & v24 | *v15 & ~v16[(_QWORD)v23];
LABEL_24:
          *v16 = v26;
        }
        ++v15;
        ++v16;
        v13 -= 8;
        if ( (v12 & 7) != 0 )
          v13 = v25 + (v12 & 7) - 8;
        v27 = 0;
        if ( (v12 & 7) == 0 )
          v27 = v12;
        v12 = v27;
        if ( v13 <= 0 )
          goto LABEL_30;
        continue;
      }
    }
    if ( v13 > 0 )
    {
      v17 = (char *)(a3 - v16);
      v18 = v15 - v16;
      while ( 1 )
      {
        v19 = v16[(_QWORD)v17];
        v20 = v13;
        if ( v19 == -1 )
          break;
        if ( v19 )
        {
          v21 = *v16 & ~v19 | v19 & v16[v18];
          goto LABEL_11;
        }
LABEL_12:
        ++v16;
        v13 -= 8;
        if ( (v12 & 7) != 0 )
          v13 = v20 + (v12 & 7) - 8;
        v22 = 0;
        if ( (v12 & 7) == 0 )
          v22 = v12;
        v12 = v22;
        if ( v13 <= 0 )
          goto LABEL_30;
      }
      v21 = v16[v18];
LABEL_11:
      *v16 = v21;
      goto LABEL_12;
    }
LABEL_30:
    v4 = *((int *)a1 + 11) + v29;
    v6 = *((int *)a1 + 10) + v30;
    v29 = v4;
    v30 = v6;
    if ( *((int *)a1 + 9) <= 0 )
    {
      if ( v10 )
      {
        --v10;
        v11 += *((int *)a2 + 8);
      }
      else
      {
        v10 = *((_DWORD *)a2 + 4) - 1;
        v11 = (const unsigned __int8 *)(*((_QWORD *)a2 + 1) + *((_DWORD *)a2 + 8) * v10);
      }
    }
    else
    {
      ++v10;
      v11 += *((int *)a2 + 8);
      if ( v10 >= *((_DWORD *)a2 + 4) )
      {
        v11 = (const unsigned __int8 *)*((_QWORD *)a2 + 1);
        v10 = 0;
      }
    }
    v8 = v28;
    v7 = a4;
  }
}
