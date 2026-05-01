/*
 * XREFs of ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18001A6A4
 * Callers:
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18001A618 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0001@@W4GHOST_STATUS@@@Z @ 0x180094CAC (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&___lambda_ca324c265ed58b3d9541d2204f682216__&_ @ 0x18001A7D8 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180064F80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801409F0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSplashScreen::OnSystemVisualChanged(__int64 a1, unsigned int a2)
{
  signed __int64 v3; // rax
  int v4; // r10d
  signed __int64 v5; // rtt
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 <= 1 && (a2 != 1) != *(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = a2 != 1;
    if ( a2 != 1 )
    {
      v12[1] = a1;
      v3 = *(_QWORD *)(a1 + 64);
      v4 = 0x7FFFFFFF;
      while ( v3 >= 0 )
      {
        if ( (_DWORD)v3 != 0x7FFFFFFF )
        {
          v5 = v3;
          v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v3 + 1, v3);
          if ( v5 != v3 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v3 + 16));
LABEL_10:
      v14 = a1;
      v6 = *(_QWORD *)(a1 + 64);
      while ( v6 >= 0 )
      {
        if ( (_DWORD)v6 != v4 )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v6 + 1, v6);
          if ( v7 != v6 )
            continue;
        }
        goto LABEL_16;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v6 + 16));
LABEL_16:
      CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216 = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216____(&v13, &v14);
      v9 = *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216;
      v12[0] = *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216;
      *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216 = 0LL;
      v10 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v10);
      }
      if ( v9
        && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 120) + 232LL))(*(_QWORD *)(a1 + 120), v9) >= 0 )
      {
        *(_BYTE *)(a1 + 129) = 1;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
      if ( v14 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(
          v14,
          v11);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(
        a1,
        v11);
    }
  }
}
