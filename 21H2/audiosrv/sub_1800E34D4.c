/*
 * XREFs of sub_1800E34D4 @ 0x1800E34D4
 * Callers:
 *     sub_18007001C @ 0x18007001C (sub_18007001C.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_1 @ 0x1800701BD (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_1.c)
 *     sub_18007BCC0 @ 0x18007BCC0 (sub_18007BCC0.c)
 *     sub_1800EC0BE @ 0x1800EC0BE (sub_1800EC0BE.c)
 *     sub_1800EDD74 @ 0x1800EDD74 (sub_1800EDD74.c)
 *     unknown_libname_201 @ 0x180141104 (unknown_libname_201.c)
 * Callees:
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 */

__int64 __fastcall sub_1800E34D4(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800ED08C(v1);
  return result;
}
