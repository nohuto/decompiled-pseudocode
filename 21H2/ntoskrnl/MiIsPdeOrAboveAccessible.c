/*
 * XREFs of MiIsPdeOrAboveAccessible @ 0x14024F5C0
 * Callers:
 *     MiReplacePageTablePage @ 0x140224260 (MiReplacePageTablePage.c)
 *     MiGetNextPageTablePte @ 0x1402B16B0 (MiGetNextPageTablePte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiIsPdeOrAboveAccessible(__int64 a1)
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
