/*
 * XREFs of ?IsSeparateGlomForSameApp@CImmersiveApp@@UEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18017F230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::IsSeparateGlomForSameApp(
        CImmersiveApp *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))
{
  bool v4; // si
  __int64 (__fastcall *v5)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  int v6; // eax
  char v7; // bl
  bool v8; // al
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v4 = ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *)))(*a2)[20])(a2) != *((_DWORD *)this + 122);
  v5 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v6 = v5((struct IImmersiveApplicationInternal *)a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v11);
  v7 = 1;
  v8 = v6 >= 0
    && (*(int (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v11 + 32LL))(v11, *((_QWORD *)this + 99), &v10) >= 0
    && v10;
  if ( !v4 || !v8 )
    v7 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v7;
}
