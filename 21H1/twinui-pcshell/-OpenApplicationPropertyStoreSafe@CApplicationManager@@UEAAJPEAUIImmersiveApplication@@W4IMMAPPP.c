/*
 * XREFs of ?OpenApplicationPropertyStoreSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IMMAPPPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18012A390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::OpenApplicationPropertyStoreSafe(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // ebx

  v8 = a5;
  *(_QWORD *)a5 = 0LL;
  a5 = 0LL;
  v9 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
  v10 = v9(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &a5);
  if ( v10 >= 0 )
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a5 + 360LL))(a5, a3, a4, v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
  return (unsigned int)v10;
}
