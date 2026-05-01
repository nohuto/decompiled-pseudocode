/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180335D58
 * Callers:
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z @ 0x18032C7E4 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1803481F8 (-OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ??$_Traits_find@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x180323C4C (--$_Traits_find@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 */

__int64 __fastcall std::wstring::find(__int64 **a1, __int16 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8

  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  v3 = (unsigned __int64)a1[2];
  if ( (unsigned __int64)a1[3] >= 8 )
    a1 = (__int64 **)*a1;
  return std::_Traits_find<std::char_traits<unsigned short>>(a1, v3, v3, a2, v2);
}
