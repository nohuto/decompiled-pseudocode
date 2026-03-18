/*
 * XREFs of MiFindActualFaultingPte @ 0x140315D2C
 * Callers:
 *     MiIsFaultPteIntact @ 0x140315C5C (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140315D2C (MiFindActualFaultingPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x140259460 (MiFillPteHierarchy.c)
 *     MiFindActualFaultingPte @ 0x140315D2C (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x140315F00 (MiCheckVirtualAddress.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiFindActualFaultingPte(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  char v13; // al
  __int64 v14; // [rsp+28h] [rbp-89h] BYREF
  __int64 v15; // [rsp+30h] [rbp-81h] BYREF
  _OWORD v16[2]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v17[18]; // [rsp+58h] [rbp-59h] BYREF

  v15 = 0LL;
  LODWORD(v14) = 0;
  memset(v16, 0, sizeof(v16));
  memset(v17, 0, 0x88uLL);
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
  {
    result = *(_QWORD *)(a1 + 72);
    if ( result != ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      return result;
    v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_4:
    v6 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v6 & 1) == 0 )
    {
      if ( (v6 & 0x400) == 0 )
        return v5;
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v6, v6, v7, v8) )
      {
        if ( qword_140C4DD40 )
        {
          if ( (v9 & 0x10) != 0 )
            v9 &= ~0x10uLL;
          else
            v9 &= ~qword_140C4DD40;
        }
        v10 = v9 >> 16;
LABEL_11:
        BYTE5(v17[8]) &= ~1u;
        v17[0] = v10;
        BYTE4(v17[8]) = 17;
        WORD1(v17[8]) = 0;
        v17[9] = ((v10 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        result = MiFindActualFaultingPte(v17, v10);
        if ( result )
          return result;
        return v5;
      }
      v10 = MiCheckVirtualAddress(a2, &v14, &v15);
      if ( v10 )
        goto LABEL_11;
    }
    return 0LL;
  }
  MiFillPteHierarchy(a2, (unsigned __int64 *)v16);
  v11 = 4LL;
  while ( 1 )
  {
    v12 = *(&v15 + v11--);
    v13 = MI_READ_PTE_LOCK_FREE(v12);
    if ( (v13 & 1) == 0 )
      return v12;
    if ( v13 < 0 )
      return 0LL;
    if ( v11 == 1 )
    {
      v5 = *(_QWORD *)&v16[0];
      goto LABEL_4;
    }
  }
}
