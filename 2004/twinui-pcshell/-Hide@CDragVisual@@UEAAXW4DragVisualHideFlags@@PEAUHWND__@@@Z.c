/*
 * XREFs of ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x180425C60
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180022D14 (McGenEventWrite_EventWriteTransfer.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x180393864 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x180424D1C (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_ @ 0x180424F10 (Windows--Internal--ComTaskPool--QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-_.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0 @ 0x180424FBC (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator() @ 0x18042541C (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--operator().c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x180428B94 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 */

void __fastcall CDragVisual::Hide(__int64 a1, char a2, __int64 a3)
{
  CDragVisual *v5; // rbx
  __int64 v6; // rcx
  HWND v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pvAttribute; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF

  v19 = a3;
  if ( *(_BYTE *)(a1 + 255) )
    return;
  v5 = (CDragVisual *)(a1 - 24);
  pvAttribute.Ptr = a1 - 24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&pvAttribute);
  lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0(
    v17,
    (__int64 *)&pvAttribute,
    &v19);
  if ( !*(_QWORD *)(a1 + 88) && (a2 & 2) != 0 )
    a2 = a2 & 0xF9 | 4;
  if ( (a2 & 1) != 0 )
  {
    v7 = *(HWND *)(a1 + 128);
    LODWORD(pvAttribute.Ptr) = 1;
    DwmSetWindowAttribute(v7, 0xDu, &pvAttribute, 4u);
    *(_DWORD *)(a1 + 124) = -1;
    *(_BYTE *)(a1 + 254) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 80));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 88));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
  }
  else
  {
    if ( (a2 & 2) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 80);
      *(_BYTE *)(a1 + 255) = 1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 168LL))(v8);
      v9 = *(_QWORD *)(a1 + 88);
      v10 = lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_(
              (__int64 *)&pvAttribute,
              v17);
      v13 = DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___(
              v9,
              v11,
              v12,
              v10);
    }
    else
    {
      if ( (a2 & 4) == 0 )
      {
        if ( IsWindowVisible(*(HWND *)(a1 + 128)) )
        {
          CDragVisual::_TrackMouseLeave(v5, 0);
          ShowWindow(*(HWND *)(a1 + 128), 0);
          v16 = *(_QWORD *)(a1 + 72);
          if ( v16 )
          {
            LOBYTE(v14) = 1;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 56LL))(v16, v14);
          }
          if ( *(_BYTE *)(a1 + 248) && (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
            McGenEventWrite_EventWriteTransfer(
              MICROSOFT_TWINUI_PUBLISHER_Context,
              &DragVisual_Hide_Info,
              v15,
              1u,
              &pvAttribute);
        }
        goto LABEL_19;
      }
      v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e____(v6, v17);
    }
    if ( v13 < 0 )
      lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator()(v17);
  }
LABEL_19:
  if ( v17[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  if ( v5 )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)v5 + 16LL))(v5);
}
