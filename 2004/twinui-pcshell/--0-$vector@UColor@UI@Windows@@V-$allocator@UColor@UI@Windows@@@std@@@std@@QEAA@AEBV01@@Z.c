/*
 * XREFs of ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180451278
 * Callers:
 *     ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180450F00 (--$_Assign_range@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@-$.c)
 *     ??$_Range_construct_or_tidy@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180451194 (--$_Range_construct_or_tidy@PEBV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 *     ?Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@Z @ 0x18045157C (-Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV-$vector@V-$vector@UColor@UI@Windows@@V-.c)
 * Callees:
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 *     ?_Buy_raw@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180450EAC (-_Buy_raw@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 */

void **__fastcall std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(void **a1, __int64 a2)
{
  __int64 v4; // rdx
  size_t v5; // rbx
  char *v6; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    std::vector<Windows::UI::Color>::_Buy_raw(a1, (v4 - *(_QWORD *)a2) >> 2);
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v6 = (char *)*a1;
    memmove_0(*a1, *(const void **)a2, v5);
    a1[1] = &v6[v5];
  }
  return a1;
}
