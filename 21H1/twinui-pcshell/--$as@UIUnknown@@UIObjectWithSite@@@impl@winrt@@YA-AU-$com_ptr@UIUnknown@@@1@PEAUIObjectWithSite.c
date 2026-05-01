/*
 * XREFs of ??$as@UIUnknown@@UIObjectWithSite@@@impl@winrt@@YA?AU?$com_ptr@UIUnknown@@@1@PEAUIObjectWithSite@@@Z @ 0x18043D98C
 * Callers:
 *     ?CreateInstance@?$wrl_class_factory@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18043EF80 (-CreateInstance@-$wrl_class_factory@UDragDropSimulatorComponent@implementation@DragDropSimulator.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18018E8E8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<IUnknown,IObjectWithSite>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64 *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, __int64 *, __int64 *); // rax
  signed int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *a2;
    v6 = 0LL;
    v4 = (*v3)(a2, &winrt::impl::guid_storage<IUnknown>::value, &v6);
    if ( v4 < 0 )
      winrt::throw_hresult(v4);
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
