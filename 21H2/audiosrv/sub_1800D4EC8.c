/*
 * XREFs of sub_1800D4EC8 @ 0x1800D4EC8
 * Callers:
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_0 @ 0x180075564 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_0.c)
 *     sub_18007BD7D @ 0x18007BD7D (sub_18007BD7D.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1800D4EC8(__int64 a1)
{
  _DWORD *v1; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_DWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    if ( !*v1 )
      LODWORD(v1) = RpcRevertToSelf();
  }
  return (int)v1;
}
