/*
 * XREFs of std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_7cc81168d6c0e2361bee2f6882a4617c___ @ 0x18034631C
 * Callers:
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180348E1C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 * Callees:
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x18034BED8 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

KBViewInfo ***__fastcall std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_7cc81168d6c0e2361bee2f6882a4617c___(
        KBViewInfo ***a1,
        KBViewInfo **a2,
        KBViewInfo **a3,
        int a4)
{
  KBViewInfo **i; // rsi
  KBViewInfo ***result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    if ( KBViewInfo::IsValid(*i) && *((_DWORD *)*i + 26) == a4 )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
