/*
 * XREFs of MiMarkNonPagedHiberPhasePte @ 0x1409B1450
 * Callers:
 *     <none>
 * Callees:
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 *     MiIsPfnTradable @ 0x14054F21C (MiIsPfnTradable.c)
 */

__int64 __fastcall MiMarkNonPagedHiberPhasePte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 PteShadow; // rdi
  unsigned __int64 v7; // rdi
  ULONG_PTR v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a2);
  v13 = v4;
  v5 = v4;
  if ( (v4 & 1) != 0 )
  {
    PteShadow = v4;
    if ( MiPteInShadowRange((unsigned __int64)&v13) )
      PteShadow = MiReadPteShadow((unsigned __int64)&v13, v5);
    v7 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
    if ( (unsigned int)MiIsPfn(v7) )
    {
      if ( (v5 & 0x80u) == 0LL )
      {
        if ( a3 )
          return 0LL;
        v10 = 48 * v7 - 0x58000000000LL;
        if ( *(_WORD *)(v10 + 32) <= 1u
          && (unsigned int)MiIsPfnTradable((_BYTE *)v10)
          && (*(_BYTE *)(v11 + 35) & 8) == 0 )
        {
          return 0LL;
        }
        v8 = 1LL;
      }
      else
      {
        v8 = 512LL;
        if ( a3 <= 1 )
        {
LABEL_16:
          PoSetHiberRange(0LL, 0x14000u, (PVOID)v7, v8, 0x6C64704Eu);
          return 0LL;
        }
        v9 = (unsigned int)(a3 - 1);
        do
        {
          v8 <<= 9;
          --v9;
        }
        while ( v9 );
      }
      if ( v8 )
        goto LABEL_16;
    }
  }
  return 0LL;
}
