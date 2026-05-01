/*
 * XREFs of ?IncrementGhostAnimationWaitCountSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@I@Z @ 0x18014CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::IncrementGhostAnimationWaitCountSafe(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *),
        unsigned int a3)
{
  __int64 (__fastcall *v5)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  int v6; // ebx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v6 = v5((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v8);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 376LL))(v8, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return (unsigned int)v6;
}
