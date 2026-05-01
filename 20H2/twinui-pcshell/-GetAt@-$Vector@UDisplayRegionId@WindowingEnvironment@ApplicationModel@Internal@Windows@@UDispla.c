/*
 * XREFs of ?GetAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1800725A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  _DWORD *v5; // rbx
  RTL_SRWLOCK *v6; // rsi
  __int64 v9; // rax
  int v10; // ebp

  v3 = 0;
  v4 = a2;
  v5 = (_DWORD *)(a1 + 120);
  *a3 = 0;
  v6 = (RTL_SRWLOCK *)(a1 + 128);
  if ( *(_DWORD *)(a1 + 120) == 1 )
  {
    if ( SLODWORD(v6->Ptr) >= 0 )
      ++LODWORD(v6->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 128));
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 88) )
  {
    v10 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 104);
    v10 = 0;
    *a3 = *(_DWORD *)(v9 + 4 * v4);
  }
  if ( v5 )
  {
    if ( *v5 == 1 )
      --LODWORD(v6->Ptr);
    else
      ReleaseSRWLockShared(v6);
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  return v3;
}
