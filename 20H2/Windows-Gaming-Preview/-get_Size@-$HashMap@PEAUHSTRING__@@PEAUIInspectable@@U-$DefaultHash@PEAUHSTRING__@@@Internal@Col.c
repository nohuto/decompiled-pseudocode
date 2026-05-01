/*
 * XREFs of ?get_Size@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x18002D480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  unsigned int v2; // ebx
  RTL_SRWLOCK *v5; // rdi
  bool v6; // zf
  RTL_SRWLOCK *v7; // rcx
  RTL_SRWLOCK *v8; // rcx

  v2 = 0;
  *a2 = 0;
  if ( *(_BYTE *)(a1 + 184) )
  {
    v5 = (RTL_SRWLOCK *)(a1 + 160);
    v6 = *(_DWORD *)(a1 + 160) == 1;
    v7 = (RTL_SRWLOCK *)(a1 + 168);
    if ( v6 )
    {
      if ( SLODWORD(v7->Ptr) >= 0 )
        ++LODWORD(v7->Ptr);
    }
    else
    {
      AcquireSRWLockShared(v7);
    }
    *a2 = *(_DWORD *)(a1 + 88);
    if ( v5 )
    {
      v8 = v5 + 1;
      if ( LODWORD(v5->Ptr) == 1 )
        --LODWORD(v8->Ptr);
      else
        ReleaseSRWLockShared(v8);
    }
  }
  else
  {
    v2 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  return v2;
}
