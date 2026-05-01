/*
 * XREFs of ?SetApplicationMonitorSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIImmersiveMonitor@@W4__MIDL___MIDL_itf_shpriv_core_0000_0322_0002@@@Z @ 0x1800935A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetApplicationMonitorSafe(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        int a4)
{
  int v4; // ebp
  void (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+58h] [rbp+10h] BYREF
  int v12; // [rsp+5Ch] [rbp+14h]

  v4 = a4 - 1;
  v10 = 0LL;
  v8 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v8(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v10);
  v11 = *(_DWORD *)(a1 + 712);
  v12 = 0;
  (*(void (__fastcall **)(__int64, __int64, int *, _QWORD))(*(_QWORD *)v10 + 456LL))(
    v10,
    a3,
    &v11,
    3 - (unsigned int)(v4 != 0));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return 0LL;
}
