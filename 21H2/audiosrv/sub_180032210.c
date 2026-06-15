/*
 * XREFs of sub_180032210 @ 0x180032210
 * Callers:
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_180118BF8 @ 0x180118BF8 (sub_180118BF8.c)
 *     sub_180119030 @ 0x180119030 (sub_180119030.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069110 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180032210(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // esi
  __int64 v4; // rbp
  volatile signed __int32 *v5; // r14
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0;
    if ( *((int *)a1 + 2) > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *(volatile signed __int32 **)(*a1 + v4 + 8);
        if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
          std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v5);
        }
        ++v3;
        v4 += 16LL;
      }
      while ( v3 < *((_DWORD *)a1 + 2) );
      v2 = *a1;
    }
    result = _o_free(v2);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  return result;
}
