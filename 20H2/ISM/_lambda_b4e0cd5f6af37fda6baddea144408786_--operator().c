/*
 * XREFs of _lambda_b4e0cd5f6af37fda6baddea144408786_::operator() @ 0x180169EE0
 * Callers:
 *     _lambda_a167d6d0d59f4c80839d02338f04cac9_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK___void_(__cdecl_)(_RTL_SRWLOCK__)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_1___RTL_SRWLOCK____RTL_SRWLOCK___0_std::nullptr_t_______ @ 0x180167EFC (_lambda_a167d6d0d59f4c80839d02338f04cac9_--operator()_wil--unique_any_t_wil--details--unique_sto.c)
 * Callees:
 *     ??4?$TimestampedProperty@W4ButtonFlags@SpatialInteractionDevices@@@Holographic@Internal@Windows@@QEAAAEAU0123@$$QEAW4ButtonFlags@SpatialInteractionDevices@@@Z @ 0x1800C5804 (--4-$TimestampedProperty@W4ButtonFlags@SpatialInteractionDevices@@@Holographic@Internal@Windows@.c)
 */

LARGE_INTEGER *__fastcall lambda_b4e0cd5f6af37fda6baddea144408786_::operator()(__int64 *a1, __int64 a2)
{
  LARGE_INTEGER *result; // rax
  __int64 v4; // rbx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+10h] BYREF

  result = (LARGE_INTEGER *)a1[1];
  v4 = *a1;
  if ( result->LowPart )
  {
    PerformanceCount.LowPart = *(_DWORD *)(v4 + 968);
    result = Windows::Internal::Holographic::TimestampedProperty<enum SpatialInteractionDevices::ButtonFlags>::operator=(
               (LARGE_INTEGER *)(a2 + 144),
               (DWORD *)&PerformanceCount);
  }
  if ( !*(_QWORD *)(a2 + 136) )
  {
    PerformanceCount.LowPart = *(_DWORD *)(v4 + 964);
    result = Windows::Internal::Holographic::TimestampedProperty<enum SpatialInteractionDevices::ButtonFlags>::operator=(
               (LARGE_INTEGER *)(a2 + 128),
               (DWORD *)&PerformanceCount);
  }
  if ( *(_BYTE *)(v4 + 1144) )
  {
    *(_OWORD *)(a2 + 40) = *(_OWORD *)(v4 + 1128);
    QueryPerformanceCounter(&PerformanceCount);
    result = (LARGE_INTEGER *)PerformanceCount.QuadPart;
    *(LARGE_INTEGER *)(a2 + 56) = PerformanceCount;
  }
  if ( *(_BYTE *)(v4 + 1010) )
  {
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(v4 + 984);
    QueryPerformanceCounter(&PerformanceCount);
    result = (LARGE_INTEGER *)PerformanceCount.QuadPart;
    *(LARGE_INTEGER *)(a2 + 72) = PerformanceCount;
  }
  if ( *(_BYTE *)(v4 + 1012) )
  {
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(v4 + 992);
    QueryPerformanceCounter(&PerformanceCount);
    result = (LARGE_INTEGER *)PerformanceCount.QuadPart;
    *(LARGE_INTEGER *)(a2 + 88) = PerformanceCount;
  }
  if ( *(_BYTE *)(v4 + 1011) )
  {
    *(_DWORD *)(a2 + 96) = *(_DWORD *)(v4 + 1000);
    QueryPerformanceCounter(&PerformanceCount);
    result = (LARGE_INTEGER *)PerformanceCount.QuadPart;
    *(LARGE_INTEGER *)(a2 + 104) = PerformanceCount;
  }
  if ( *(_BYTE *)(v4 + 1020) )
  {
    *(_DWORD *)(a2 + 112) = *(_DWORD *)(v4 + 1016);
    QueryPerformanceCounter(&PerformanceCount);
    result = (LARGE_INTEGER *)PerformanceCount.QuadPart;
    *(LARGE_INTEGER *)(a2 + 120) = PerformanceCount;
  }
  return result;
}
