/*
 * XREFs of ?UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z @ 0x18008FB9C
 * Callers:
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008F7E0 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18008FEB8 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::UpdateCacheForDevice(__int64 a1, int a2)
{
  __int64 v2; // r11
  __int64 v3; // rdx
  _QWORD *v4; // r10
  int v6; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    a1 + 2760,
    &v7,
    &v8);
  v3 = v7;
  if ( v7 == *v4 )
    return 2147500037LL;
  v6 = *(_DWORD *)(v2 + 8);
  *(_QWORD *)(v7 + 32) = *(_QWORD *)v2;
  *(_DWORD *)(v3 + 40) = v6;
  return 0LL;
}
