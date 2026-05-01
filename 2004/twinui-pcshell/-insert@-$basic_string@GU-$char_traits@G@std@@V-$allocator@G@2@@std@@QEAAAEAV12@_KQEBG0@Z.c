/*
 * XREFs of ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x180256940
 * Callers:
 *     ?_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUIWin32ApplicationView@@@Z @ 0x180254528 (-_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA-AV-$basic_.c)
 * Callees:
 *     memcpy_0 @ 0x1800EEEC7 (memcpy_0.c)
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG2@Z @ 0x18024B4A8 (--$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@-$basic_string@GU-$c.c)
 */

void **__fastcall std::wstring::insert(void **a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v5; // r8
  bool v8; // cf
  char *v9; // rsi
  __int64 v10; // rdi

  v5 = (__int64)a1[2];
  if ( (char *)a4 > (char *)a1[3] - v5 )
    return std::wstring::_Reallocate_grow_by<_lambda_156f8c05752017390d6185e99ef4c093_,unsigned __int64,unsigned short const *,unsigned __int64>(
             a1,
             a4,
             v5,
             a4,
             a3,
             a4);
  v8 = (unsigned __int64)a1[3] < 8;
  a1[2] = (void *)(v5 + a4);
  v9 = (char *)a1;
  if ( !v8 )
    v9 = (char *)*a1;
  if ( &a3[2 * a4] <= v9 || a3 > &v9[2 * v5] )
  {
    v10 = a4;
  }
  else if ( v9 > a3 )
  {
    v10 = (v9 - a3) >> 1;
  }
  else
  {
    v10 = 0LL;
  }
  memmove_0(&v9[2 * a4], v9, 2 * v5 + 2);
  memcpy_0(v9, a3, 2 * v10);
  memcpy_0(&v9[2 * v10], &a3[2 * v10 + 2 * a4], 2 * (a4 - v10));
  return a1;
}
