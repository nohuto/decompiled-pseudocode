/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800661C8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CAXPEAX@Z @ 0x18003D9D0 (-_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CAXPEAX@Z.c)
 * Callees:
 *     ??9details_abi@wil@@YA_NAEBV?$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManager@details@wil@@@01@0@Z @ 0x18003D9DC (--9details_abi@wil@@YA_NAEBV-$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManage.c)
 *     ?InvalidateFeatureStateCache@EnabledStateManager@details@wil@@AEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@@Z @ 0x18003DC04 (-InvalidateFeatureStateCache@EnabledStateManager@details@wil@@AEAAXPEATwil_details_FeatureStateC.c)
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  PVOID Ptr; // r9
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r9
  int v7; // eax
  PVOID v8; // [rsp+30h] [rbp+8h] BYREF
  PVOID v9; // [rsp+38h] [rbp+10h] BYREF

  if ( LOBYTE(this->Ptr) )
  {
    v2 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    Ptr = this[10].Ptr;
    v9 = this[11].Ptr;
    while ( 1 )
    {
      v8 = Ptr;
      if ( !wil::details_abi::operator!=(&v8, &v9) )
        break;
      wil::details::EnabledStateManager::InvalidateFeatureStateCache(
        v5,
        *(volatile signed __int32 **)(v6 + 8),
        *(_DWORD *)v6);
      Ptr = (PVOID)(v4 + 16);
    }
    this[11].Ptr = this[10].Ptr;
    v7 = 1;
    if ( HIDWORD(this[3].Ptr) != -1 )
      v7 = HIDWORD(this[3].Ptr) + 1;
    HIDWORD(this[3].Ptr) = v7;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
