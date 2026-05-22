/*
 * XREFs of ??1?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEAA@XZ @ 0x1800C54AC
 * Callers:
 *     __lambda_0f0bae3cf8d5116e9b9b4d57b869a88f_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK___void_(__cdecl_)(_RTL_SRWLOCK__)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_1___RTL_SRWLOCK____RTL_SRWLOCK___0_std::nullptr_t________::_1_::dtor$0 @ 0x18014DF6E (__lambda_0f0bae3cf8d5116e9b9b4d57b869a88f_--operator()_wil--unique_any_t_wil--details--unique_st.c)
 *     __lambda_0ec230e0adbac92e2fff9cb336d4370d_::operator()_::_1_::dtor$0 @ 0x180158165 (__lambda_0ec230e0adbac92e2fff9cb336d4370d_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::pair<SPATIAL_NODE_ID const,std::wstring>::~pair<SPATIAL_NODE_ID const,std::wstring>(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*(void **)(a1 + 16), (const struct std::nothrow_t *)(2 * v1 + 2));
  result = 0LL;
  *(_QWORD *)(a1 + 40) = 7LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 16) = 0;
  return result;
}
