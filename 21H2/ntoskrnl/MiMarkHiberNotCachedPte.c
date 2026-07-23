/*
 * XREFs of MiMarkHiberNotCachedPte @ 0x1409B1230
 * Callers:
 *     <none>
 * Callees:
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 */

__int64 __fastcall MiMarkHiberNotCachedPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned __int64 PteShadow; // rdi
  void *v8; // rdi
  ULONG_PTR v9; // r9
  __int64 v10; // rcx
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a2);
  v12 = v4;
  v5 = v4;
  if ( (v4 & 1) != 0 && ((v6 = v4 & 0x10) == 0 && (v5 & 8) != 0 || v6) )
  {
    PteShadow = v5;
    if ( MiPteInShadowRange((unsigned __int64)&v12) )
      PteShadow = MiReadPteShadow((unsigned __int64)&v12, v5);
    v8 = (void *)((PteShadow >> 12) & 0xFFFFFFFFFLL);
    if ( (unsigned int)MiIsPfn((unsigned __int64)v8) )
    {
      if ( (v5 & 0x80u) == 0LL )
      {
        if ( a3 )
          return 0LL;
        v9 = 1LL;
      }
      else
      {
        v9 = 512LL;
        if ( a3 <= 1 )
        {
LABEL_16:
          PoSetHiberRange(0LL, 0x14000u, v8, v9, 0x636E6D4Du);
          return 0LL;
        }
        v10 = (unsigned int)(a3 - 1);
        do
        {
          v9 <<= 9;
          --v10;
        }
        while ( v10 );
      }
      if ( v9 )
        goto LABEL_16;
    }
  }
  return 0LL;
}
