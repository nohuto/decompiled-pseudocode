/*
 * XREFs of MiSetPfnNodeBlinkHigh @ 0x1403454AC
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x1403477E0 (MiReplaceNumaStandbyPage.c)
 *     MiUnlinkNumaStandbyPage @ 0x140399524 (MiUnlinkNumaStandbyPage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403ED43C (MiUpdateLargePageSectionPfns.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403EF05C (MiConvertLockedSmallPageToLarge.c)
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x14054D058 (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
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
