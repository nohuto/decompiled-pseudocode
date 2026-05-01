/*
 * XREFs of ?Swap@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAAXAEAV12@@Z @ 0x180307998
 * Callers:
 *     ??0?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@$$QEAV01@@Z @ 0x1802F9E10 (--0-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     ??4?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAAEAV01@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1802FCAD4 (--4-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     ??4?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAAEAV01@V01@@Z @ 0x1802FCB0C (--4-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShel_ea_1802FCB0C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802EB25C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$swap@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@X@std@@YAXAEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x1802F9820 (--$swap@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@X@std@@YAXAEAV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Swap(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 result; // rax

  v4 = __abi_winrt_ptr_ctor(*(_QWORD *)a1);
  __abi_winrt_ptr_assign((__int64 *)a1, *(_QWORD *)a2);
  __abi_winrt_ptr_assign((__int64 *)a2, v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  std::swap<Microsoft::WRL::ComPtr<IUnknown>,void>((__int64 *)(a1 + 8), (__int64 *)(a2 + 8));
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 24);
  result = *(unsigned int *)(a2 + 24);
  *(_DWORD *)(a1 + 24) = result;
  *(_DWORD *)(a2 + 24) = v5;
  return result;
}
