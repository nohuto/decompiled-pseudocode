/*
 * XREFs of sub_1800F9398 @ 0x1800F9398
 * Callers:
 *     _setlocale_set_cat_0 @ 0x1800AFE94 (_setlocale_set_cat_0.c)
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 *     sub_1800DDF78 @ 0x1800DDF78 (sub_1800DDF78.c)
 *     sub_1800DE778 @ 0x1800DE778 (sub_1800DE778.c)
 *     sub_18010A840 @ 0x18010A840 (sub_18010A840.c)
 *     sub_18012CDA9 @ 0x18012CDA9 (sub_18012CDA9.c)
 *     sub_18012CDE5 @ 0x18012CDE5 (sub_18012CDE5.c)
 *     sub_18012CE21 @ 0x18012CE21 (sub_18012CE21.c)
 *     sub_18012DB25 @ 0x18012DB25 (sub_18012DB25.c)
 *     sub_18012DB31 @ 0x18012DB31 (sub_18012DB31.c)
 *     sub_18012FBB7 @ 0x18012FBB7 (sub_18012FBB7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800F9398(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  void (__fastcall ***v4)(_QWORD); // rcx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
      {
        v4 = *(void (__fastcall ****)(_QWORD))a1;
        v5 = *(volatile signed __int32 **)(a1 + 8);
        if ( *(_QWORD *)a1 )
          (**v4)(v4);
        if ( v5 )
        {
          if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
            if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
          }
        }
        break;
      }
    }
  }
  v6 = *(volatile signed __int32 **)(a1 + 8);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
}
