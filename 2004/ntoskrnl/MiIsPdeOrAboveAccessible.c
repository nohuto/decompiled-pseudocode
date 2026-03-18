/*
 * XREFs of MiIsPdeOrAboveAccessible @ 0x14035E7A0
 * Callers:
 *     MiGetNextPageTablePte @ 0x14029ED90 (MiGetNextPageTablePte.c)
 *     MiReplacePageTablePage @ 0x14034221C (MiReplacePageTablePage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 */

_BOOL8 __fastcall MiIsPdeOrAboveAccessible(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  bool v2; // zf
  _BOOL8 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  result = 1;
  if ( (v1 & 1) == 0 && v1 && (v1 & 0x400) == 0 )
  {
    if ( (v1 & 0x800) != 0 )
    {
      v2 = ((v1 >> 5) & 0x1F) == 24;
    }
    else
    {
      v4 = MiSwizzleInvalidPte(512LL);
      v2 = v5 == v4;
    }
    if ( v2 )
      return 0;
  }
  return result;
}
