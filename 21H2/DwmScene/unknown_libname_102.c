/*
 * XREFs of unknown_libname_102 @ 0x180011624
 * Callers:
 *     sub_1800126C4 @ 0x1800126C4 (sub_1800126C4.c)
 *     sub_180012838 @ 0x180012838 (sub_180012838.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180070500 @ 0x180070500 (sub_180070500.c)
 *     sub_180070D20 @ 0x180070D20 (sub_180070D20.c)
 *     sub_1800714AC @ 0x1800714AC (sub_1800714AC.c)
 *     sub_18007C1E0 @ 0x18007C1E0 (sub_18007C1E0.c)
 *     sub_180081170 @ 0x180081170 (sub_180081170.c)
 *     sub_180081AC8 @ 0x180081AC8 (sub_180081AC8.c)
 *     sub_18008241C @ 0x18008241C (sub_18008241C.c)
 *     sub_18008252C @ 0x18008252C (sub_18008252C.c)
 *     sub_180082934 @ 0x180082934 (sub_180082934.c)
 *     sub_180082A74 @ 0x180082A74 (sub_180082A74.c)
 *     sub_1800837FC @ 0x1800837FC (sub_1800837FC.c)
 *     sub_1800AB274 @ 0x1800AB274 (sub_1800AB274.c)
 *     sub_18010ACD4 @ 0x18010ACD4 (sub_18010ACD4.c)
 *     sub_18010AF04 @ 0x18010AF04 (sub_18010AF04.c)
 *     sub_18010AFA8 @ 0x18010AFA8 (sub_18010AFA8.c)
 *     sub_18010B0B4 @ 0x18010B0B4 (sub_18010B0B4.c)
 *     sub_18010B400 @ 0x18010B400 (sub_18010B400.c)
 *     sub_18010B5D4 @ 0x18010B5D4 (sub_18010B5D4.c)
 *     sub_18011141C @ 0x18011141C (sub_18011141C.c)
 *     sub_180113810 @ 0x180113810 (sub_180113810.c)
 *     sub_18011C40C @ 0x18011C40C (sub_18011C40C.c)
 *     sub_18011C880 @ 0x18011C880 (sub_18011C880.c)
 *     sub_18011CC10 @ 0x18011CC10 (sub_18011CC10.c)
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_102(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = *(volatile signed __int32 **)(a1 + 8);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
