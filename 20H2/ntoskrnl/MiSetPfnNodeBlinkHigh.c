/*
 * XREFs of MiSetPfnNodeBlinkHigh @ 0x140353DF4
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x14035149C (MiReplaceNumaStandbyPage.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039C174 (MiUnlinkNumaStandbyPage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F2964 (MiUpdateLargePageSectionPfns.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403F48D0 (MiConvertLockedSmallPageToLarge.c)
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x140551078 (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnNodeBlinkHigh(__int64 a1, int a2, int a3)
{
  unsigned __int64 v4; // r9
  signed __int64 v5; // rdx
  unsigned __int64 result; // rax
  bool i; // zf
  unsigned __int64 v8; // rcx

  v4 = (unsigned __int64)(a2 & 0xFFFFF) << 36;
  if ( a3 == 1 )
  {
    result = v4 | *(_QWORD *)(a1 + 24) & 0xFF00000FFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v4 | v5 & 0xFF00000FFFFFFFFFuLL, v5);
    for ( i = v5 == result; !i; i = v8 == result )
    {
      v8 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 v4 | result & 0xFF00000FFFFFFFFFuLL,
                 result);
    }
  }
  return result;
}
