/*
 * XREFs of _anonymous_namespace_::StartsWith @ 0x18002BCD8
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x180038B10 (_anonymous_namespace_--PlacementHealth--HandleEvent_10_unsigned_int_unsigned___int64_.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x18003A5B0 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x18003A7A8 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_std--shared_ptr_ContentDeliveryManager--Ba.c)
 * Callees:
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x1800320DC (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800362C8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

bool __fastcall anonymous_namespace_::StartsWith(_WORD *Src)
{
  __int64 v1; // r8
  __int64 v2; // rbx
  void *v4[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-20h]

  v5 = 7LL;
  v4[2] = 0LL;
  LOWORD(v4[0]) = 0;
  if ( *Src )
  {
    v1 = -1LL;
    do
      ++v1;
    while ( Src[v1] );
  }
  std::wstring::assign(v4, Src);
  v2 = std::wstring::find(v4, L"SubscribedContent");
  if ( v5 >= 8 )
    operator delete(v4[0]);
  return v2 == 0;
}
