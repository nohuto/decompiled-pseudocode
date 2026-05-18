/*
 * XREFs of sub_180130740 @ 0x180130740
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18012524C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180130740(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx

  sub_18011BCAC(&qword_180214B30, 3, "ComputeTangentsAndNormals threw exception");
  *(_OWORD *)(a2 + 200) = 0LL;
  *(_OWORD *)(a2 + 184) = 0LL;
  *(_QWORD *)(a2 + 280) = *(_QWORD *)(a2 + 288);
  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 56LL);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v3 + 16LL))(v3, a2 + 184, a2 + 200, a2 + 280);
  v4 = *(volatile signed __int32 **)(a2 + 192);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = *(volatile signed __int32 **)(a2 + 208);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return 0LL;
}
