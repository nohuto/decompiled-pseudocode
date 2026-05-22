/*
 * XREFs of ?_Tidy@?$deque@V?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@V?$allocator@V?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@2@@std@@AEAAXXZ @ 0x1800D3DCC
 * Callers:
 *     ??1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800CE144 (--1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036AD4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 */

void __fastcall std::deque<std::function<void (Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *)>>::_Tidy(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdi
  void *v6; // rcx
  void *v7; // rcx

  while ( 1 )
  {
    v3 = a1[4];
    if ( !v3 )
      break;
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(
      *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + v3))),
      a2);
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v5 = a1[2];
  while ( v5 )
  {
    --v5;
    v6 = *(void **)(a1[1] + 8 * v5);
    if ( v6 )
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x40);
  }
  v7 = (void *)a1[1];
  if ( v7 )
    std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)(8LL * a1[2]));
  a1[2] = 0LL;
  a1[1] = 0LL;
}
