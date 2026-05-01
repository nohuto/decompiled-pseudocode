/*
 * XREFs of ?SetGhostVisualStyleSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4__MIDL___MIDL_itf_shpriv_core_0000_0322_0001@@@Z @ 0x180093660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetGhostVisualStyleSafe(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // ebx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v6 = v5(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v8);
  if ( v6 >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 368LL))(v8, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return (unsigned int)v6;
}
