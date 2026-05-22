/*
 * XREFs of _lambda_a167d6d0d59f4c80839d02338f04cac9_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK___void_(__cdecl_)(_RTL_SRWLOCK__)_&ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_1___RTL_SRWLOCK____RTL_SRWLOCK___0_std::nullptr_t_______ @ 0x18016844C
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___ @ 0x18016939C (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_18016939C.c)
 * Callees:
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800C552C (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@$$V@-$map@V-.c)
 *     _lambda_b4e0cd5f6af37fda6baddea144408786_::operator() @ 0x18016A430 (_lambda_b4e0cd5f6af37fda6baddea144408786_--operator().c)
 */

__int64 __fastcall lambda_a167d6d0d59f4c80839d02338f04cac9_::operator()_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__RTL_SRWLOCK___void____cdecl____RTL_SRWLOCK_____ReleaseSRWLockExclusive_wistd::integral_constant_unsigned___int64_1___RTL_SRWLOCK____RTL_SRWLOCK___0_std::nullptr_t_______(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  _DWORD *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD **)a1;
  v4 = *(_QWORD *)(a2 + 104);
  v5 = v4;
  result = *(_QWORD *)(v4 + 8);
  if ( *(_BYTE *)(result + 25) )
    goto LABEL_9;
  LODWORD(v3) = *v3;
  do
  {
    if ( *(_DWORD *)(result + 32) >= (unsigned int)v3 )
    {
      v5 = result;
      result = *(_QWORD *)result;
    }
    else
    {
      result = *(_QWORD *)(result + 16);
    }
  }
  while ( !*(_BYTE *)(result + 25) );
  if ( v5 == v4 || (unsigned int)v3 < *(_DWORD *)(v5 + 32) )
LABEL_9:
    v5 = *(_QWORD *)(a2 + 104);
  if ( v5 != v4 )
  {
    std::map<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>>::_Try_emplace<std::wstring const &,>(
      (__int64 *)(a2 + 24),
      (__int64)v7,
      v5 + 40,
      (int)v3);
    return lambda_b4e0cd5f6af37fda6baddea144408786_::operator()(v2, v7[0] + 64);
  }
  return result;
}
