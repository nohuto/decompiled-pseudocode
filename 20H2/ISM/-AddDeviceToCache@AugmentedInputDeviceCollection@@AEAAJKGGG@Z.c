/*
 * XREFs of ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x18008F0E0
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008F430 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??$emplace@AEAKAEAUAugmentedInputCacheState@@@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@std@@_N@1@AEAKAEAUAugmentedInputCacheState@@@Z @ 0x18008EF54 (--$emplace@AEAKAEAUAugmentedInputCacheState@@@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18008FE18 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::AddDeviceToCache(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        __int16 a3,
        __int64 a4,
        unsigned __int16 a5)
{
  int v6; // edi
  __int64 *v7; // r10
  __int16 v8; // r11
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[16]; // [rsp+28h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-18h] BYREF
  __int16 v13; // [rsp+3Ch] [rbp-14h]
  __int16 v14; // [rsp+3Eh] [rbp-12h]
  __int16 v15; // [rsp+40h] [rbp-10h]
  unsigned __int16 v16; // [rsp+42h] [rbp-Eh]
  unsigned int v17; // [rsp+68h] [rbp+18h] BYREF

  v17 = a2;
  _InterlockedExchange(
    &MPCInputInfoHelper::m_nextSpectrumId,
    (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
  v6 = MPCInputInfoHelper::m_nextSpectrumId;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (char *)this + 2760,
    &v10,
    &v17);
  if ( v10 != *v7 )
    return 2147500037LL;
  v13 = 0;
  v16 = a5;
  v12 = v6;
  v14 = a3;
  v15 = v8;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::emplace<unsigned long &,AugmentedInputCacheState &>(
    v7,
    (__int64)v11,
    &v17,
    (__int64)&v12);
  return 0LL;
}
