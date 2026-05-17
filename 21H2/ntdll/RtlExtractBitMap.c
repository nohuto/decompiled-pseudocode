/*
 * XREFs of RtlExtractBitMap @ 0x1800EBCF0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

char __fastcall RtlExtractBitMap(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  __int64 v7; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  __int64 v14; // r9
  unsigned int *v15; // r11
  __int64 v16; // r8
  _DWORD *v17; // rsi
  int v18; // r9d
  unsigned __int64 v19; // rdi
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx

  v5 = *a2;
  v6 = *(_DWORD *)a1 - a3;
  LOBYTE(v7) = a4;
  if ( a4 <= (unsigned int)v6 )
    v6 = a4;
  if ( v6 <= v5 )
    v5 = (unsigned int)v6;
  if ( v5 )
  {
    v9 = (unsigned __int64)a3 >> 3;
    v10 = a3;
    if ( (a3 & 7) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v15 = (unsigned int *)*((_QWORD *)a2 + 1);
      v16 = a3 & 0x1F;
      v17 = (_DWORD *)(v7 + 4 * (v10 >> 5));
      v18 = 1 << (v10 & 0x1F);
      if ( v5 >= 0x20 )
      {
        v19 = v5 >> 5;
        v5 += -32LL * (v5 >> 5);
        do
        {
          v20 = *v17++ & ~(v18 - 1);
          v21 = v20 >> v16;
          *v15 = v21;
          LODWORD(v7) = v21 | ((*v17 & (v18 - 1)) << (32 - v16));
          *v15++ = v7;
          --v19;
        }
        while ( v19 );
      }
      if ( v5 )
      {
        if ( v5 > 32 - v16 )
          v22 = ((*v17 & (unsigned int)-v18) >> v16) | ((v17[1] & ((1 << (v5 + v16 - 32)) - 1)) << (32 - v16));
        else
          v22 = (*v17 & (unsigned int)(((1 << v5) - 1) << v16)) >> v16;
        LODWORD(v7) = v22 | ~((1 << v5) - 1) & *v15;
        *v15 = v7;
      }
    }
    else
    {
      v11 = (unsigned int)v5;
      v12 = v5 & 7;
      v13 = v11 >> 3;
      if ( v13 )
        LOBYTE(v7) = (unsigned __int8)memmove(*((void **)a2 + 1), (const void *)(v9 + *(_QWORD *)(a1 + 8)), v13);
      if ( v12 )
      {
        v14 = *((_QWORD *)a2 + 1);
        LOBYTE(v7) = *(_BYTE *)(v13 + *(_QWORD *)(a1 + 8) + v9) & ((1 << v12) - 1) | *(_BYTE *)(v13 + v14) & ~((1 << v12) - 1);
        *(_BYTE *)(v13 + v14) = v7;
      }
    }
  }
  return v7;
}
