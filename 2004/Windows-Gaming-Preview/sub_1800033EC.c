/*
 * XREFs of sub_1800033EC @ 0x1800033EC
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA @ 0x180045F83 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA.c)
 *     sub_180045F95 @ 0x180045F95 (sub_180045F95.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800033EC(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
