/*
 * XREFs of ?GetMany@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@PEAI@Z @ 0x18017CE30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008DF14 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18014F074 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // ebp
  unsigned int v7; // r12d
  _DWORD *v8; // r14
  size_t v9; // rdi
  unsigned __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  RTL_SRWLOCK *v17; // rcx
  unsigned int i; // ecx
  void *v20; // [rsp+20h] [rbp-48h]
  RTL_SRWLOCK *v21; // [rsp+28h] [rbp-40h] BYREF
  int v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h]

  v5 = 0;
  v23 = 0;
  v7 = 0;
  v22 = 0;
  v8 = a4;
  v9 = a3;
  if ( a3 )
    memset_0(a4, 0, 4LL * a3);
  v20 = 0LL;
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(&v21, (RTL_SRWLOCK *)(a1 + 120), &v22);
  if ( !*(_DWORD *)(a1 + 96) || (v20 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v13 = v22;
  }
  else
  {
    v13 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v13 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 88);
    if ( a2 > v7 )
    {
      v13 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v13 >= 0 && a3 )
    {
      v12 = a2;
      if ( *(_DWORD *)(a1 + 96) )
      {
        do
        {
          if ( (unsigned int)v12 >= v7 )
            break;
          v13 = 0;
          v14 = (unsigned int)v12;
          v12 = (unsigned int)(v12 + 1);
          v15 = v23 + 1;
          *v8++ = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 4 * v14);
          v23 = v15;
        }
        while ( v15 < a3 );
      }
      else
      {
        do
        {
          if ( (unsigned int)v12 >= v7 )
            break;
          v13 = 0;
          v16 = (unsigned int)v12;
          ++v5;
          v12 = (unsigned int)(v12 + 1);
          *v8++ = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 4 * v16);
        }
        while ( v5 < a3 );
      }
    }
  }
  if ( v21 )
  {
    v17 = v21 + 1;
    if ( LODWORD(v21->Ptr) == 1 )
      --LODWORD(v17->Ptr);
    else
      ReleaseSRWLockShared(v17);
  }
  if ( v13 >= 0 )
  {
    if ( v23 )
    {
      for ( i = 0; i < a3; ++i )
      {
        if ( i + a2 >= v7 )
          break;
        v13 = 0;
        ++v5;
      }
    }
    *a5 = v5;
  }
  operator delete(v20, (const struct std::nothrow_t *)v12);
  return (unsigned int)v13;
}
