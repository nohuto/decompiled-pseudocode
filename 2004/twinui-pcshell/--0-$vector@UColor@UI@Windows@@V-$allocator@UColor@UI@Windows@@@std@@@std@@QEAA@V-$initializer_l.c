/*
 * XREFs of ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x18008C47C
 * Callers:
 *     _dynamic_initializer_for__BlockError__ @ 0x180002A80 (_dynamic_initializer_for__BlockError__.c)
 *     _dynamic_initializer_for__BlockIdle__ @ 0x180002AC0 (_dynamic_initializer_for__BlockIdle__.c)
 *     _dynamic_initializer_for__BlockListening__ @ 0x180002B00 (_dynamic_initializer_for__BlockListening__.c)
 *     _dynamic_initializer_for__BlockResponding__ @ 0x180002C30 (_dynamic_initializer_for__BlockResponding__.c)
 *     _dynamic_initializer_for__BlockThinking__ @ 0x180002D40 (_dynamic_initializer_for__BlockThinking__.c)
 *     _dynamic_initializer_for__error__ @ 0x180002F40 (_dynamic_initializer_for__error__.c)
 *     _dynamic_initializer_for__idle__ @ 0x180003C90 (_dynamic_initializer_for__idle__.c)
 *     _dynamic_initializer_for__listening__ @ 0x180003DB0 (_dynamic_initializer_for__listening__.c)
 *     _dynamic_initializer_for__responding__ @ 0x180005140 (_dynamic_initializer_for__responding__.c)
 *     _dynamic_initializer_for__thinking__ @ 0x1800062B0 (_dynamic_initializer_for__thinking__.c)
 * Callees:
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 *     ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180450E74 (-_Buy_nonzero@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 *__fastcall std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(__int64 *a1, __int64 a2)
{
  const void *v2; // rbp
  signed __int64 v4; // rsi
  __int64 v5; // rbx

  v2 = *(const void **)a2;
  v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v4 >> 2 )
  {
    std::vector<Windows::UI::Color>::_Buy_nonzero();
    v5 = *a1;
    memmove_0((void *)*a1, v2, v4);
    a1[1] = v4 + v5;
  }
  return a1;
}
