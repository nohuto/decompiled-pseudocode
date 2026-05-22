/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180090278
 * Callers:
 *     ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x18008F540 (-AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x18008F730 (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008F890 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x18008FA20 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 *     ?UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z @ 0x18008FF5C (-UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
        __int64 **a1,
        __int64 **a2,
        unsigned int *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // rax
  unsigned int v6; // r8d

  v3 = *a1;
  v4 = v3;
  v5 = (__int64 *)v3[1];
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_9;
  v6 = *a3;
  do
  {
    if ( *((_DWORD *)v5 + 7) >= v6 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == v3 || v6 < *((_DWORD *)v4 + 7) )
LABEL_9:
    v4 = v3;
  *a2 = v4;
  return a2;
}
