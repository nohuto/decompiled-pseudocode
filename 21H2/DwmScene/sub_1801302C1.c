/*
 * XREFs of sub_1801302C1 @ 0x1801302C1
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18012524C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801302C1(__int64 a1, __int64 a2)
{
  const char *v3; // r8
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx

  v3 = (const char *)(*(_QWORD *)(a2 + 144) + 24LL);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 144) + 48LL) >= 0x10uLL )
    v3 = *(const char **)v3;
  sub_18011BCAC(&qword_180214B30, 3, v3);
  *(_OWORD *)(a2 + 112) = 0LL;
  *(_QWORD *)(a2 + 184) = *(_QWORD *)(a2 + 192);
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 56LL);
  if ( !v4 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, a2 + 112, a2 + 184);
  v5 = *(volatile signed __int32 **)(a2 + 120);
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
