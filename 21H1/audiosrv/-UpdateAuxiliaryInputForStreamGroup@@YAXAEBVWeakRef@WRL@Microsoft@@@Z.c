/*
 * XREFs of ?UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800EE854
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_26d6b4fcc784cd5ce99dbb722cb42eb2__void_::_Do_call @ 0x1800E7840 (std--_Func_impl_no_alloc__lambda_26d6b4fcc784cd5ce99dbb722cb42eb2__void_--_Do_call.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateAuxiliaryInputForStreamGroup(const struct Microsoft::WRL::WeakRef *a1)
{
  CAudioResourceManager *v2; // rcx

  v2 = 0LL;
  if ( g_AudioResourceManager )
    v2 = (struct IAudioResourceManager *)((char *)g_AudioResourceManager - 8);
  CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup(v2, a1);
}
