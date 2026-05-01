/*
 * XREFs of ?IsApplicationWindowStronglyNamedSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18014DC50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::IsApplicationWindowStronglyNamedSafe(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *),
        int *a3)
{
  int v5; // esi
  __int64 (__fastcall *v6)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  int v7; // ebx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  *a3 = 0;
  v9 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v7 = v6((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v9);
  if ( v7 >= 0 )
  {
    LOBYTE(v5) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 424LL))(v9) != 0;
    *a3 = v5;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return (unsigned int)v7;
}
