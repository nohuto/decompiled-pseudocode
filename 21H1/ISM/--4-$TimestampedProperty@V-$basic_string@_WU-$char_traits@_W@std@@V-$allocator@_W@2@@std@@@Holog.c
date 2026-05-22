/*
 * XREFs of ??4?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@QEAAAEAU0123@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800C5D00
 * Callers:
 *     _lambda_a798864974d435f27a9d9ab1e454a550_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK___void_(__cdecl_)(_RTL_SRWLOCK__)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_1___RTL_SRWLOCK____RTL_SRWLOCK___0_std::nullptr_t_______ @ 0x18014E440 (_lambda_a798864974d435f27a9d9ab1e454a550_--operator()_wil--unique_any_t_wil--details--unique_sto.c)
 *     ??R_lambda_0ec230e0adbac92e2fff9cb336d4370d_@@QEBAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18015851C (--R_lambda_0ec230e0adbac92e2fff9cb336d4370d_@@QEBAXAEBV-$basic_string@_WU-$char_traits@_W@std@@V.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x1800C72DC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

LARGE_INTEGER *__fastcall Windows::Internal::Holographic::TimestampedProperty<std::wstring>::operator=(
        LARGE_INTEGER *a1,
        LARGE_INTEGER *a2)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 != a2 )
    std::wstring::assign(a1);
  QueryPerformanceCounter(&PerformanceCount);
  a1[4] = PerformanceCount;
  return a1;
}
