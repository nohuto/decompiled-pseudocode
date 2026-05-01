/*
 * XREFs of ??1?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAA@XZ @ 0x1803CDDC0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDelayedTileActivation_CDelayedTileActivation_IImmersiveApplication___&_IUnknown___&_enum_ACTIVATEOPTIONSINTERNAL_&__::_1_::dtor$2 @ 0x1803CD8B1 (_Microsoft--WRL--Details--MakeAndInitialize_CDelayedTileActivation_CDelayedTileActi_ea_1803CD8B1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDelayedTileActivation_CDelayedTileActivation_unsigned_short_const___&_unsigned_short_const___&_unsigned_short_const___&_IUnknown___&_enum_ACTIVATEOPTIONSINTERNAL_&__::_1_::dtor$2 @ 0x1803CD99D (_Microsoft--WRL--Details--MakeAndInitialize_CDelayedTileActivation_CDelayedTileActi_ea_1803CD99D.c)
 *     _CDelayedTileActivation_CreateInstance_::_1_::dtor$0 @ 0x1803CE456 (_CDelayedTileActivation_CreateInstance_--_1_--dtor$0.c)
 *     _CDelayedTileActivation_CreateInstance_::_1_::dtor$0_0 @ 0x1803CE583 (_CDelayedTileActivation_CreateInstance_--_1_--dtor$0_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CDelayedTileActivation>::~ComPtr<CDelayedTileActivation>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(a1);
}
