/*
 * XREFs of ?OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802AE590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003F84C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18022D618 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEventArgs@@$$QEA_N@Z @ 0x1802AA790 (--$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEv.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ViewWrapperBase::OperationRequestComplete(__int64 a1, int a2, __int32 a3)
{
  RTL_SRWLOCK *v5; // rsi
  __int64 v6; // rdi
  RTL_SRWLOCK *v7; // rsi
  __int64 v8; // rdi
  __int64 *v9; // rax
  struct IInspectable *v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+28h] [rbp-18h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h] BYREF
  bool v14; // [rsp+68h] [rbp+28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v5 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 280LL);
      AcquireSRWLockExclusive(v5);
      v6 = *(_QWORD *)(a1 + 472);
      *(_QWORD *)(a1 + 472) = 0LL;
      v13 = v6;
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
      if ( v6 )
      {
        _InterlockedExchange((volatile __int32 *)(v6 + 168), a3);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 16) + 128LL))(v6 + 16);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
  }
  else
  {
    v11 = 0LL;
    v7 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 280LL);
    AcquireSRWLockExclusive(v7);
    v8 = 0LL;
    if ( *(_BYTE *)(a1 + 460) )
    {
      *(_BYTE *)(a1 + 460) = 0;
      v9 = (__int64 *)(a1 + 464);
      if ( &v12 != (__int64 *)(a1 + 464) )
      {
        v8 = *v9;
        *v9 = 0LL;
      }
      v12 = 0LL;
      v11 = v8;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    }
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v10 = 0LL;
    if ( v8 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      if ( (int)Microsoft::WRL::WeakRef::InternalResolve(
                  (Microsoft::WRL::WeakRef *)&v11,
                  &GUID_4874a3f0_c856_52e6_ab24_d29fbf386438,
                  &v10) >= 0 )
      {
        v15 = 0LL;
        v14 = a3 == 1;
        Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v15);
        if ( (int)Microsoft::WRL::Details::MakeAndInitialize<ViewHandledEventArgs,ViewHandledEventArgs,bool>(&v15, &v14) >= 0 )
          ((void (__fastcall *)(struct IInspectable *, __int64, __int64))v10->lpVtbl->GetIids)(
            v10,
            a1 & -(__int64)(a1 != 8),
            v15);
        Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v15);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
}
