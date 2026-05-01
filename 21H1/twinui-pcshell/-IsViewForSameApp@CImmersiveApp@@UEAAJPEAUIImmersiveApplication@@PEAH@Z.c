/*
 * XREFs of ?IsViewForSameApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18015B060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::IsViewForSameApp(
        CImmersiveApp *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *),
        int *a3)
{
  __int64 (__fastcall *v6)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  int v7; // ebx
  __int64 (__fastcall *v8)(CImmersiveApp *, __int64, int *); // rbx
  __int64 v9; // rax
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0;
  v11 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v7 = v6((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v11);
  if ( v7 >= 0 )
  {
    v8 = *(__int64 (__fastcall **)(CImmersiveApp *, __int64, int *))(*(_QWORD *)this + 88LL);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
    v7 = v8(this, v9, a3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return (unsigned int)v7;
}
