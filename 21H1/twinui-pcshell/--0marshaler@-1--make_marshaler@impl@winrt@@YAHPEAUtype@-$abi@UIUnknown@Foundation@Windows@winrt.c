/*
 * XREFs of ??0marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@PEAPEAX@Z@QEAA@0@Z @ 0x180066754
 * Callers:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180066700 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?get_marshaler@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@CA?AU?$com_ptr@UIMarshal@impl@winrt@@@4@XZ @ 0x1800667E4 (-get_marshaler@marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@W.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::marshaler(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 *marshaler; // rax
  __int64 v6; // r8
  bool v7; // zf
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 8);
  *(_QWORD *)a1 = `winrt::impl::make_marshaler'::`2'::marshaler::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  marshaler = (__int64 *)`winrt::impl::make_marshaler'::`2'::marshaler::get_marshaler(&v9);
  v6 = *marshaler;
  *marshaler = 0LL;
  v7 = v9 == 0;
  *(_QWORD *)(a1 + 16) = v6;
  if ( !v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v9);
  *(_DWORD *)(a1 + 24) = 1;
  if ( *v2 != a2 )
  {
    if ( *v2 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v2);
    *v2 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return a1;
}
