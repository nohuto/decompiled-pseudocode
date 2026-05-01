/*
 * XREFs of ?get_Size@?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x180135760
 * Callers:
 *     ?WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18027B4C0 (-WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicat.c)
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18012AB34 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,0,1,0>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  RTL_SRWLOCK *v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v7; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0;
  v6 = 0;
  XWinRT::SerializingLockPolicy::Read(&v7, (RTL_SRWLOCK *)(a1 + 104), &v6);
  if ( v6 >= 0 )
    *a2 = *(_DWORD *)(a1 + 72);
  if ( v7 )
  {
    v4 = v7 + 1;
    if ( LODWORD(v7->Ptr) == 1 )
      --LODWORD(v4->Ptr);
    else
      ReleaseSRWLockShared(v4);
  }
  return (unsigned int)v6;
}
