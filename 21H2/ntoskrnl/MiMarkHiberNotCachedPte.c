/*
 * XREFs of MiMarkHiberNotCachedPte @ 0x140A4F800
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x1402B2E00 (MiIsPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

__int64 __fastcall MiMarkHiberNotCachedPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  char v5; // bl
  void *v7; // rsi
  ULONG_PTR v8; // r9
  __int64 v9; // rcx
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a2);
  v10 = v4;
  v5 = v4;
  if ( (v4 & 1) != 0 && ((v4 & 0x10) != 0 || (v4 & 8) != 0) )
  {
    v7 = (void *)(((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFFLL);
    if ( (unsigned int)MiIsPfn((unsigned __int64)v7) )
    {
      if ( v5 < 0 )
      {
        v8 = 512LL;
        if ( a3 <= 1 )
          goto LABEL_10;
        v9 = (unsigned int)(a3 - 1);
        do
        {
          v8 <<= 9;
          --v9;
        }
        while ( v9 );
        if ( v8 )
          goto LABEL_10;
      }
      else if ( !a3 )
      {
        v8 = 1LL;
LABEL_10:
        PoSetHiberRange(0LL, 0x14000u, v7, v8, 0x636E6D4Du);
      }
    }
  }
  return 0LL;
}
