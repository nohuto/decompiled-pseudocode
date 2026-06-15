/*
 * XREFs of sub_1801344F0 @ 0x1801344F0
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_18007602C @ 0x18007602C (sub_18007602C.c)
 *     sub_18007C544 @ 0x18007C544 (sub_18007C544.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_87 @ 0x180136694 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_87.c)
 *     sub_1801367CD @ 0x1801367CD (sub_1801367CD.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 */

int __fastcall sub_1801344F0(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = sub_180033A70(v1);
  return (int)v1;
}
