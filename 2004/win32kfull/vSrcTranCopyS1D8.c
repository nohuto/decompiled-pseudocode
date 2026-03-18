/*
 * XREFs of vSrcTranCopyS1D8 @ 0x1C012D2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D8(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int8 a9)
{
  int v9; // r15d
  int v10; // ebp
  unsigned __int8 v11; // si
  int v12; // r13d
  int v13; // ebx
  __int64 v14; // rdi
  unsigned __int64 *v15; // r11
  int v17; // r12d
  unsigned int v18; // r8d
  int v19; // r9d
  unsigned __int64 *v20; // r14
  unsigned __int8 *v21; // rax
  __int64 v22; // rbp
  unsigned __int64 *v23; // rbx
  unsigned __int64 *v24; // r11
  unsigned __int8 *v25; // rax
  __int64 v26; // r9
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rcx
  int v29; // edx
  int v30; // ebp
  __int64 v31; // rcx
  unsigned __int8 *v32; // r9
  __int64 v33; // rbx
  char *v34; // rcx
  char v35; // dl
  unsigned __int8 *v36; // r8
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  int v39; // ebp
  _BYTE *v40; // rdi
  unsigned __int8 *v41; // r8
  unsigned __int8 *v42; // r10
  unsigned __int8 *v43; // rcx
  int v45; // [rsp+0h] [rbp-68h]
  __int64 v46; // [rsp+8h] [rbp-60h]
  _BYTE *v47; // [rsp+10h] [rbp-58h]

  v9 = a5;
  v10 = a7;
  v11 = a9;
  v12 = a6;
  v13 = a2;
  v14 = 0x101010101010101LL * a9;
  v15 = (unsigned __int64 *)(a4 + (a5 & 0xFFFFFFF8));
  v45 = a5 & 7;
  v17 = 255 >> (a5 & 7);
  v18 = (a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8);
  v19 = a3 - (v18 >> 3);
  v46 = a8 * a7;
  v20 = (unsigned __int64 *)((char *)v15 + v46);
  v21 = (unsigned __int8 *)(a1 + ((__int64)a2 >> 3));
  v47 = v21;
  if ( (a6 & 0xFFFFFFF8) != (a5 & 0xFFFFFFF8) )
  {
    v22 = v19;
    do
    {
      v23 = (unsigned __int64 *)((char *)v15 + v18);
      if ( ((unsigned __int8)v17 & *v21) != 0 )
      {
        v38 = dword_1C02EF100[(unsigned __int64)(unsigned __int8)(v17 & *v21) >> 4] | ((unsigned __int64)dword_1C02EF100[(unsigned __int8)v17 & *v21 & 0xF] << 32);
        *v15 = v14 & v38 | *v15 & ~v38;
      }
      v24 = v15 + 1;
      v25 = v21 + 1;
      v26 = 0LL;
      v27 = (unsigned __int64)((char *)v23 - (char *)v24 + 7) >> 3;
      if ( v24 > v23 )
        v27 = 0LL;
      if ( v27 )
      {
        do
        {
          v28 = *v25;
          if ( (_BYTE)v28 )
          {
            v37 = dword_1C02EF100[v28 >> 4] | ((unsigned __int64)dword_1C02EF100[v28 & 0xF] << 32);
            *v24 = v14 & v37 | *v24 & ~v37;
          }
          ++v25;
          ++v24;
          ++v26;
        }
        while ( v26 != v27 );
      }
      v15 = (unsigned __int64 *)((char *)v24 + (int)(a7 - v18));
      v21 = &v25[v22];
    }
    while ( v15 != v20 );
    v12 = a6;
    v13 = a2;
    v11 = a9;
    v10 = a7;
    v9 = a5;
  }
  v29 = v12 & 7;
  if ( (v12 & 7) != 0 )
  {
    if ( ((v12 ^ v9) & 0xFFFFFFF8) != 0 )
    {
      v30 = v10 - v29;
      v31 = (__int64)(v12 + v13 - v9) >> 3;
      v21 = (unsigned __int8 *)(a4 + (v12 & 0xFFFFFFFFFFFFFFF8uLL));
      v32 = &v21[v46];
      v33 = v12 & 7;
      v34 = (char *)(a1 + v31);
      do
      {
        v35 = *v34;
        v36 = &v21[v33];
        if ( *v34 )
        {
          do
          {
            if ( v35 < 0 )
              *v21 = v11;
            v35 *= 2;
            ++v21;
          }
          while ( v21 != v36 );
        }
        else
        {
          v21 += v33;
        }
        v21 += v30;
        v34 += a3;
      }
      while ( v21 != v32 );
    }
    else
    {
      LODWORD(v21) = v29 - v45;
      if ( v29 - v45 > 0 )
      {
        v39 = v10 - (_DWORD)v21;
        v40 = v47;
        v41 = (unsigned __int8 *)(a4 + v9);
        v42 = &v41[v46];
        do
        {
          LOBYTE(v21) = *v40 << v45;
          v43 = &v41[(v12 & 7) - (unsigned __int64)(a5 & 7)];
          do
          {
            if ( (char)v21 < 0 )
              *v41 = v11;
            LOBYTE(v21) = 2 * (_BYTE)v21;
            ++v41;
          }
          while ( v41 != v43 );
          v41 += v39;
          v40 += a3;
        }
        while ( v41 != v42 );
      }
    }
  }
  return (char)v21;
}
