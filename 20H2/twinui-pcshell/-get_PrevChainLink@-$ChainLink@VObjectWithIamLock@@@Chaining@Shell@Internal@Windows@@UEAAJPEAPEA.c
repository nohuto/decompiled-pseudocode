/*
 * XREFs of ?get_PrevChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x180183B50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::get_PrevChainLink(
        __int64 a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rbx

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = 0LL;
  AcquireSRWLockShared(v2);
  if ( *(_QWORD *)(a1 + 64) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 64));
    *a2 = *(_QWORD *)(a1 + 64);
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
