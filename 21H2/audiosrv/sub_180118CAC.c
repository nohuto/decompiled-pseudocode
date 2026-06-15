/*
 * XREFs of sub_180118CAC @ 0x180118CAC
 * Callers:
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_7 @ 0x180076810 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_7.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180118CAC(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    ReleaseSRWLockShared((PSRWLOCK)(*(_QWORD *)a1 + 16LL));
  }
}
