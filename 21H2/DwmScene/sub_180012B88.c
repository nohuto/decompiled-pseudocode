/*
 * XREFs of sub_180012B88 @ 0x180012B88
 * Callers:
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_18006BF54 @ 0x18006BF54 (sub_18006BF54.c)
 *     sub_180094AE8 @ 0x180094AE8 (sub_180094AE8.c)
 *     sub_18010FD30 @ 0x18010FD30 (sub_18010FD30.c)
 * Callees:
 *     sub_180012DD0 @ 0x180012DD0 (sub_180012DD0.c)
 *     sub_180013670 @ 0x180013670 (sub_180013670.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180012B88(_QWORD *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax

  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  v4 = *(_QWORD *)(a2 + 16) + *(_QWORD *)(a3 + 16);
  if ( v4 != 15 )
  {
    if ( Src[3] >= v4 )
    {
      if ( v4 < 0x10 && Src[3] >= 0x10uLL )
        sub_180013670(Src);
    }
    else
    {
      sub_180012DD0(Src);
      Src[2] = 0LL;
    }
  }
  std::string::append(Src);
  std::string::append(Src);
  return Src;
}
