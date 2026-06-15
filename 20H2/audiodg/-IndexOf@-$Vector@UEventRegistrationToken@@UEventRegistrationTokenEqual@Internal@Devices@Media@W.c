/*
 * XREFs of ?IndexOf@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUEventRegistrationToken@@PEAIPEAE@Z @ 0x140024030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001EA20 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IndexOfInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJPEAUEventRegistrationToken@@IU6@PEAIPEAE@Z @ 0x1400241E8 (-IndexOfInternal@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1400596B4 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  _QWORD *v8; // r14
  int v9; // ebp
  RTL_SRWLOCK *v10; // rcx
  int v11; // edi
  unsigned __int64 v12; // r8
  size_t v13; // rax
  __int64 i; // r8
  int v16; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read(&v17, a1 + 72, &v16);
  v11 = v16;
  if ( v16 >= 0 )
  {
    v12 = *(unsigned int *)(a1 + 40);
    if ( *(_DWORD *)(a1 + 48) )
    {
      v13 = 8 * v12;
      if ( !is_mul_ok(v12, 8uLL) )
        v13 = -1LL;
      v8 = operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
        {
          if ( v11 < 0 )
            break;
          v11 = 0;
          ++v9;
          v10 = *(RTL_SRWLOCK **)(*(_QWORD *)(a1 + 56) + 8 * i);
          v8[i] = v10;
        }
      }
      else
      {
        v11 = -2147024882;
      }
    }
    else
    {
      v11 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::IndexOfInternal(
              (_DWORD)v10,
              *(_QWORD *)(a1 + 56),
              v12,
              a2,
              (__int64)a3,
              (__int64)a4);
    }
  }
  if ( v17 )
  {
    v10 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      --LODWORD(v10->Ptr);
    else
      ReleaseSRWLockShared(v10);
  }
  if ( v11 >= 0 && v9 )
    v11 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::IndexOfInternal(
            (_DWORD)v10,
            (_DWORD)v8,
            v9,
            a2,
            (__int64)a3,
            (__int64)a4);
  operator delete(v8);
  return (unsigned int)v11;
}
