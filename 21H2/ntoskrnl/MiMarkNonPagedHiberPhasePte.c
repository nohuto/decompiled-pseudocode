/*
 * XREFs of MiMarkNonPagedHiberPhasePte @ 0x140A4F8B0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x1402B2E00 (MiIsPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     MiIsPfnTradable @ 0x14038DE3C (MiIsPfnTradable.c)
 */

__int64 __fastcall MiMarkNonPagedHiberPhasePte(__int64 a1, unsigned __int64 a2, int a3)
{
  char v4; // bl
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  ULONG_PTR v7; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = MI_READ_PTE_LOCK_FREE(a2);
  v4 = v11;
  if ( (v11 & 1) != 0 )
  {
    v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFFLL;
    if ( (unsigned int)MiIsPfn(v5) )
    {
      if ( v4 < 0 )
      {
        v7 = 512LL;
        if ( a3 <= 1 )
          goto LABEL_8;
        v10 = (unsigned int)(a3 - 1);
        do
        {
          v7 <<= 9;
          --v10;
        }
        while ( v10 );
        if ( v7 )
          goto LABEL_8;
      }
      else if ( !a3 )
      {
        v6 = 48 * v5 - 0x220000000000LL;
        if ( *(_WORD *)(v6 + 32) > 1u || !(unsigned int)MiIsPfnTradable((_BYTE *)v6) || (*(_BYTE *)(v9 + 35) & 8) != 0 )
        {
          v7 = 1LL;
LABEL_8:
          PoSetHiberRange(0LL, 0x14000u, (PVOID)v5, v7, 0x6C64704Eu);
        }
      }
    }
  }
  return 0LL;
}
