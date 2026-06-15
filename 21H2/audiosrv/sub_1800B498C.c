/*
 * XREFs of sub_1800B498C @ 0x1800B498C
 * Callers:
 *     sub_180033E20 @ 0x180033E20 (sub_180033E20.c)
 *     sub_180034268 @ 0x180034268 (sub_180034268.c)
 *     sub_18007B79D @ 0x18007B79D (sub_18007B79D.c)
 *     sub_1800B78D0 @ 0x1800B78D0 (sub_1800B78D0.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_18 @ 0x1800B79FD (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_18.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B498C(__int64 a1)
{
  if ( !*(_BYTE *)a1 )
    SetLastError(*(_DWORD *)(a1 + 4));
}
