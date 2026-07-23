/*
 * XREFs of MiFindActualFaultingPte @ 0x14020A4E4
 * Callers:
 *     MiIsFaultPteIntact @ 0x14020A414 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14020A4E4 (MiFindActualFaultingPte.c)
 * Callees:
 *     MiFindActualFaultingPte @ 0x14020A4E4 (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x14020A6B0 (MiCheckVirtualAddress.c)
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiFindActualFaultingPte(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdi
  char v11; // al
  __int64 v12; // [rsp+28h] [rbp-89h] BYREF
  __int64 v13; // [rsp+30h] [rbp-81h] BYREF
  _OWORD v14[2]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v15[18]; // [rsp+58h] [rbp-59h] BYREF

  v13 = 0LL;
  LODWORD(v12) = 0;
  memset(v14, 0, sizeof(v14));
  memset(v15, 0, 0x88uLL);
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
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v6, v6) )
      {
        if ( qword_140C4DF80 )
        {
          if ( (v7 & 0x10) != 0 )
            v7 &= ~0x10uLL;
          else
            v7 &= ~qword_140C4DF80;
        }
        v8 = v7 >> 16;
LABEL_11:
        BYTE5(v15[8]) &= ~1u;
        v15[0] = v8;
        BYTE4(v15[8]) = 17;
        WORD1(v15[8]) = 0;
        v15[9] = ((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        result = MiFindActualFaultingPte(v15, v8);
        if ( result )
          return result;
        return v5;
      }
      v8 = MiCheckVirtualAddress(a2, &v12, &v13);
      if ( v8 )
        goto LABEL_11;
    }
    return 0LL;
  }
  MiFillPteHierarchy(a2, v14);
  v9 = 4LL;
  while ( 1 )
  {
    v10 = *(&v13 + v9--);
    v11 = MI_READ_PTE_LOCK_FREE(v10);
    if ( (v11 & 1) == 0 )
      return v10;
    if ( v11 < 0 )
      return 0LL;
    if ( v9 == 1 )
    {
      v5 = *(_QWORD *)&v14[0];
      goto LABEL_4;
    }
  }
}
