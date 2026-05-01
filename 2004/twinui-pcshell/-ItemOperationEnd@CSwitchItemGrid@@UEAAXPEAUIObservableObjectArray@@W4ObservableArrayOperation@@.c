/*
 * XREFs of ?ItemOperationEnd@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation@@PEAUIObservableItem@@@Z @ 0x1803A7550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetRootElement@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1803AD4E8 (-GetRootElement@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMu.c)
 */

void __fastcall CSwitchItemGrid::ItemOperationEnd(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6[2]; // [rsp+28h] [rbp-10h] BYREF

  if ( a3 == 1 )
  {
    ElementHelpers::GetRootElement(&v5, a1 - 224);
    v3 = v5;
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 384LL))(v5, v6);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 72LL))(*v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v6);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 392LL))(v3, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
}
