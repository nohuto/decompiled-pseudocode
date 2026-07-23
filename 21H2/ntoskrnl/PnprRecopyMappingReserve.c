/*
 * XREFs of PnprRecopyMappingReserve @ 0x14050FA58
 * Callers:
 *     PnprRecopyMirrorPages @ 0x14050FB2C (PnprRecopyMirrorPages.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     PnprRecopyAddress @ 0x14050FA00 (PnprRecopyAddress.c)
 *     PnprMarkOrMirrorPages @ 0x1409AEDF8 (PnprMarkOrMirrorPages.c)
 */

__int64 __fastcall PnprRecopyMappingReserve(__int64 *a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  __int64 ContainingPageTable; // rax
  __int64 v5; // r8
  int v6; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax

  v1 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    ContainingPageTable = MiGetContainingPageTable(
                            (((a1[1] + (unsigned __int64)(unsigned int)(v3 << 12)) >> 9) & 0x7FFFFFFFF8LL)
                          - 0x98000000000LL);
    if ( ContainingPageTable != v1 )
    {
      v1 = ContainingPageTable;
      LOBYTE(v5) = 1;
      v6 = PnprMarkOrMirrorPages(ContainingPageTable << 12, 4096LL, v5);
      if ( v6 < 0 )
        break;
    }
    if ( (unsigned int)++v3 >= 0x10 )
    {
      PnprRecopyAddress(*a1, 0x30u);
      return 0LL;
    }
  }
  v8 = PnprContext;
  v9 = *(_DWORD *)(PnprContext + 20984);
  if ( !v9 )
    v9 = 5721;
  *(_DWORD *)(PnprContext + 20984) = v9;
  v10 = *(_DWORD *)(v8 + 20988);
  if ( !v10 )
    v10 = 1;
  *(_DWORD *)(v8 + 20988) = v10;
  return (unsigned int)v6;
}
