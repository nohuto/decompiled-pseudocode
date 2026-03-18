/*
 * XREFs of ?vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02D1500
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

void __fastcall vFillGRectDIB24Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r13d
  struct _GRADIENTRECTDATA *v3; // rbp
  __int64 v4; // r11
  int v5; // r14d
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rax
  char *v12; // r12
  char *v13; // rdx
  char *v14; // r15
  char *v15; // r14
  __int64 v16; // rbp
  __int64 v17; // r15
  int v18; // eax
  char *v19; // r15
  int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r13
  __int64 v24; // r12
  int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+30h] [rbp-68h]
  char *v28; // [rsp+48h] [rbp-50h]
  int v29; // [rsp+A0h] [rbp+8h]
  __int64 v30; // [rsp+A0h] [rbp+8h]
  __int64 v32; // [rsp+A8h] [rbp+10h]
  __int64 v33; // [rsp+B0h] [rbp+18h]
  void *Src; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = a2;
  v4 = *((_QWORD *)a2 + 21);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v26 = v4;
  v29 = v5;
  if ( *((_DWORD *)a2 + 38) )
  {
    v21 = *((int *)a2 + 45);
    v30 = *((_QWORD *)a2 + 11);
    v33 = *((_QWORD *)a2 + 12);
    if ( (int)v21 > 0 )
    {
      v6 += *((_QWORD *)a2 + 10) * v21;
      v7 += *((_QWORD *)a2 + 11) * v21;
      v8 += *((_QWORD *)a2 + 12) * v21;
    }
    v22 = *((_QWORD *)a1 + 10) + 3 * *((_DWORD *)a2 + 8) + (__int64)(v2 * *((_DWORD *)a2 + 9));
    if ( v5 )
    {
      Src = (void *)*((int *)a1 + 22);
      v23 = *((_QWORD *)a2 + 10);
      do
      {
        --v5;
        v24 = v22;
        v32 = v22 + 3 * *((_DWORD *)v3 + 10);
        v25 = XEPALOBJ::ulDispatchGFPEFunction(
                v4,
                *(unsigned int *)(*(_QWORD *)v4 + 100LL),
                BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
        if ( v22 != v32 )
        {
          do
          {
            *(_WORD *)v24 = v25;
            *(_BYTE *)(v24 + 2) = BYTE2(v25);
            v24 += 3LL;
          }
          while ( v24 != v32 );
        }
        v7 += v30;
        v6 += v23;
        v8 += v33;
        v22 += (__int64)Src;
        v4 = v26;
      }
      while ( v5 );
    }
  }
  else
  {
    v9 = *((_QWORD *)a2 + 16);
    v10 = *((_QWORD *)a1 + 10) + v2 * *((_DWORD *)a2 + 9);
    v11 = *((int *)a2 + 44);
    if ( (int)v11 > 0 )
    {
      v6 += *((_QWORD *)a2 + 14) * v11;
      v7 += *((_QWORD *)a2 + 15) * v11;
      v8 += v9 * *((int *)a2 + 44);
    }
    v12 = (char *)(v10 + 3 * *((_DWORD *)a2 + 8));
    v13 = v12;
    v28 = (char *)(v10 + 3 * *((_DWORD *)v3 + 8));
    v14 = v28;
    if ( v12 != &v12[3 * *((_DWORD *)v3 + 10)] )
    {
      v27 = *((_QWORD *)v3 + 14);
      v15 = &v12[3 * *((_DWORD *)v3 + 10)];
      v16 = *((_QWORD *)v3 + 15);
      v17 = v9;
      do
      {
        v18 = XEPALOBJ::ulDispatchGFPEFunction(
                v4,
                *(unsigned int *)(*(_QWORD *)v4 + 100LL),
                BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
        v4 = v26;
        v6 += v27;
        *v12 = v18;
        v7 += v16;
        v8 += v17;
        v12[1] = BYTE1(v18);
        v12[2] = BYTE2(v18);
        v12 += 3;
      }
      while ( v12 != v15 );
      v14 = v28;
      v3 = a2;
      v13 = v28;
      v5 = v29;
    }
    v19 = &v14[v2];
    v20 = v5 - 1;
    while ( v20 > 0 )
    {
      --v20;
      memmove(v19, v13, 3 * *((_DWORD *)v3 + 10));
      v13 = v28;
      v19 += v2;
    }
  }
}
