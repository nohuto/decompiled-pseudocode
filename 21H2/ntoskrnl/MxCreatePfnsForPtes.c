/*
 * XREFs of MxCreatePfnsForPtes @ 0x140AF3B50
 * Callers:
 *     MxCreatePfns @ 0x140AF3514 (MxCreatePfns.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     MiIsRegularMemory @ 0x140AF3DB0 (MiIsRegularMemory.c)
 *     MxCreatePfn @ 0x140AF3E9C (MxCreatePfn.c)
 */

__int64 __fastcall MxCreatePfnsForPtes(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int16 v11; // di
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int16 v17; // di
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // r9
  unsigned __int64 v25; // rbp
  __int64 v26; // [rsp+78h] [rbp+20h] BYREF

  v4 = a3;
  v26 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = v26;
  if ( (v26 & 1) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 168);
    v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFFLL;
    v26 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFFLL;
    *(_QWORD *)(48 * v9 - 0x220000000000LL + 24) ^= (*(_QWORD *)(48 * v9 - 0x220000000000LL + 24) ^ (*(_QWORD *)(48 * v9 - 0x220000000000LL + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (_DWORD)v4 )
    {
      if ( (v6 & 0x80u) == 0LL )
      {
        MxCreatePfn(v8, a2, v6, v9, 0, 0);
      }
      else
      {
        v16 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
        v17 = v16 | 0x800;
        if ( (v16 & 0x42) == 0 )
          v17 = v16;
        v18 = v16 | 0x800;
        v19 = ((unsigned __int16)((unsigned __int8)word_140C51864 << 8) ^ v17) & 0x100;
        if ( (v16 & 0x42) == 0 )
          v18 = v16;
        v20 = v18 ^ v19;
        MiWriteValidPteNewProtection(a2, v20);
        v21 = 1LL;
        if ( (int)v4 > 0 )
        {
          v22 = v4;
          do
          {
            v21 <<= 9;
            --v22;
          }
          while ( v22 );
        }
        v23 = ((MiGetLeafVa(a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v25 = v23 + 8 * v24;
        while ( v23 < v25 )
        {
          if ( MiIsRegularMemory(v7, v8) )
            MxCreatePfn(v8, v23, v20, v9, 1, 1);
          ++v8;
          v23 += 8LL;
        }
      }
    }
    else
    {
      v10 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
      v11 = v10 | 0x800;
      if ( (v10 & 0x42) == 0 )
        v11 = v10;
      v12 = v10 | 0x800;
      v13 = ((unsigned __int16)((unsigned __int8)word_140C51864 << 8) ^ v11) & 0x100;
      if ( (v10 & 0x42) == 0 )
        v12 = v10;
      v14 = v12 ^ v13;
      MiWriteValidPteNewProtection(a2, v14);
      if ( MiIsRegularMemory(v7, v8) )
        MxCreatePfn(v8, a2, v14, v9, 0, 1);
    }
  }
  return 0LL;
}
