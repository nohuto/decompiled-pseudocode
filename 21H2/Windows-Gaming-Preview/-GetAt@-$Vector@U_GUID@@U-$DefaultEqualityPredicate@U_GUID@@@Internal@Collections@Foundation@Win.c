/*
 * XREFs of ?GetAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@@Z @ 0x18002DDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // r14
  RTL_SRWLOCK *v5; // rsi
  unsigned int v6; // edi
  int v9; // ebp
  __int64 v10; // rax

  v3 = (_DWORD *)(a1 + 104);
  v4 = a2;
  v5 = (RTL_SRWLOCK *)(a1 + 112);
  v6 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v5->Ptr) >= 0 )
      ++LODWORD(v5->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 72) )
  {
    v10 = *(_QWORD *)(a1 + 88);
    v9 = 0;
    *a3 = *(_OWORD *)(v10 + 16 * v4);
  }
  else
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( v3 )
  {
    if ( *v3 == 1 )
      --LODWORD(v5->Ptr);
    else
      ReleaseSRWLockShared(v5);
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v6;
}
