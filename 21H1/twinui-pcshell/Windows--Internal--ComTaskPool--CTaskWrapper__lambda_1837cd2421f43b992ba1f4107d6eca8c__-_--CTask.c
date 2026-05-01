/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c__&_::CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c__&___lambda_1837cd2421f43b992ba1f4107d6eca8c__&_ @ 0x18036908C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1837cd2421f43b992ba1f4107d6eca8c__&_ @ 0x18036928C (Windows--Internal--ComTaskPool--QueueTask__lambda_1837cd2421f43b992ba1f4107d6eca8c__-_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801158FC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c____::CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c______lambda_1837cd2421f43b992ba1f4107d6eca8c____(
        __int64 a1,
        __int64 a2)
{
  volatile int *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 56) = v5;
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      v5,
      v4);
  v6 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 64) = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *(_QWORD *)a1 = off_180497420;
  return a1;
}
