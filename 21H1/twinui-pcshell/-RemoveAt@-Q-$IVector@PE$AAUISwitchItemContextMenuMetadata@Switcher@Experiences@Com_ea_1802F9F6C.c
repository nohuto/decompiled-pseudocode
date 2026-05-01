/*
 * XREFs of ?RemoveAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXI@Z @ 0x1802F9F6C
 * Callers:
 *     ?RemoveAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAXI@Z @ 0x1800D59F0 (-RemoveAt@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@.c)
 *     ?RemoveAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@WCI@E$AAAXI@Z @ 0x1800D5A00 (-RemoveAt@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Com_ea_1800D5A00.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_RemoveAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJI@Z @ 0x1802FBF64 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItemContextMenuMetadat_ea_1802FBF64.c)
 * Callees:
 *     ??0?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@$$QEAV01@@Z @ 0x1802D8B60 (--0-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     ??1?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@XZ @ 0x1802DAFAC (--1-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@X.c)
 *     ??4?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAAEAV01@V01@@Z @ 0x1802DB85C (--4-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShel_ea_1802DB85C.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x1802E0D08 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?ValidateBounds@Details@Collections@Platform@@YAX_N@Z @ 0x1802E6DC4 (-ValidateBounds@Details@Collections@Platform@@YAX_N@Z.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x1802F9BE0 (-Notify@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall _RemoveAt__Q__IVector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXI_Z(
        __int64 a1,
        unsigned int a2)
{
  unsigned __int64 v2; // r12
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rcx
  _QWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 *v9; // rax
  void *Exception; // rax
  void *v11; // rax
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v14[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+70h] [rbp+8h]
  __int64 v16; // [rsp+70h] [rbp+8h]

  v2 = a2;
  v4 = (_QWORD *)(a1 + 80);
  try
  {
    Platform::Collections::Details::IncrementCounter(v4);
    v5 = (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) - **(_QWORD **)(a1 + 96)) >> 5;
    LOBYTE(v5) = v2 < v5;
    Platform::Collections::Details::ValidateBounds((Platform::Collections::Details *)v5);
    v6 = *(_QWORD **)(a1 + 96);
    v7 = v6[1];
    v8 = *v6 + 32LL * (unsigned int)v2 + 32;
    if ( v8 != v7 )
    {
      do
      {
        v9 = (__int64 *)Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>((__int64)v14);
        Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::operator=(
          v8 - 32,
          v9);
        v8 += 32LL;
      }
      while ( v8 != v7 );
      v7 = v6[1];
    }
    Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>((__int64 *)(v7 - 32));
    v6[1] -= 32LL;
    Platform::Collections::Vector<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,1>::Notify(
      a1,
      2,
      v2);
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v15 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v12 = __abi_winrt_ptr_ctor(v15);
    throw (Platform::OutOfMemoryException **)&v12;
  }
  catch ( std::exception )
  {
    v11 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v16 = Platform::FailureException::FailureException(v11);
    v13 = __abi_winrt_ptr_ctor(v16);
    throw (Platform::FailureException **)&v13;
  }
}
