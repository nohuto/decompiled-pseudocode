/*
 * XREFs of ?SetObject@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AEAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180306BDC
 * Callers:
 *     ??0?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802FA734 (--0-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@P.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EC420 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?Release@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x180305D64 (-Release@-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::SetObject(
        __int64 a1,
        _QWORD **a2)
{
  unsigned int (__fastcall *v4)(_QWORD **, GUID *, __int64 *); // rbx
  Platform::Details *v5; // rcx
  struct IUnknown *ObjectContext; // rax
  HRESULT ContextToken; // eax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Release(a1);
  if ( a2 )
  {
    v9 = 0LL;
    v4 = (unsigned int (__fastcall *)(_QWORD **, GUID *, __int64 *))**a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    if ( v4(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v9) )
    {
      *(_DWORD *)(a1 + 24) = 0;
      ObjectContext = Platform::Details::GetObjectContext(v5);
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 8), (__int64)ObjectContext);
      ContextToken = CoGetContextToken((ULONG_PTR *)(a1 + 16));
      if ( ContextToken < 0 )
      {
        __abi_WinRTraiseException(ContextToken);
        __debugbreak();
      }
    }
    else
    {
      *(_DWORD *)(a1 + 24) = 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  return __abi_winrt_ptr_assign((__int64 *)a1, (__int64)a2);
}
