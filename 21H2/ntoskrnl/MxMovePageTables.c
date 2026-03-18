/*
 * XREFs of MxMovePageTables @ 0x140AF3770
 * Callers:
 *     MxRelocatePageTables @ 0x140AF35B8 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140AF3770 (MxMovePageTables.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     MxMovePageTables @ 0x140AF3770 (MxMovePageTables.c)
 *     MiIsRegularMemory @ 0x140AF3DB0 (MiIsRegularMemory.c)
 *     MxSwapPages @ 0x140AF3FFC (MxSwapPages.c)
 */

unsigned __int64 __fastcall MxMovePageTables(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  v17 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  result = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17);
  v10 = (result >> 12) & 0xFFFFFFFFFFLL;
  if ( v5 <= a2 )
  {
    v11 = a5;
    do
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        v17 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL;
      }
      result = MI_READ_PTE_LOCK_FREE(v5);
      v17 = result;
      if ( (result & 1) == 0 || v5 == 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_11;
      if ( a3 && (result & 0x80u) != 0LL )
      {
        v17 = MI_READ_PTE_LOCK_FREE(v5);
        v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        v16 = 512;
        do
        {
          result = MiSetPfnPteFrame(v15, v10);
          v15 = v14 + 48;
          --v16;
        }
        while ( v16 );
        goto LABEL_11;
      }
      v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17);
      v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
      if ( a3 )
      {
        MxSwapPages(v11, v5);
        MxMovePageTables((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, a3 - 1, a4, v11);
        v17 = MI_READ_PTE_LOCK_FREE(v5);
        v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL;
      }
      else
      {
        result = MiIsRegularMemory(a4, (v12 >> 12) & 0xFFFFFFFFFFLL);
        if ( !result )
          goto LABEL_11;
      }
      result = MiSetPfnPteFrame(48 * v13 - 0x220000000000LL, v10);
LABEL_11:
      v5 += 8LL;
    }
    while ( v5 <= a2 );
  }
  return result;
}
