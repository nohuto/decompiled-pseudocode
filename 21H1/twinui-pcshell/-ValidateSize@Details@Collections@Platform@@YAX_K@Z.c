/*
 * XREFs of ?ValidateSize@Details@Collections@Platform@@YAX_K@Z @ 0x1802E6EE0
 * Callers:
 *     ?Append@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x1802DD9A0 (-Append@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows_ea_1802DD9A0.c)
 *     ?InsertAt@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXIPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x1802E1E10 (-InsertAt@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windo_ea_1802E1E10.c)
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x1802E47C0 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Win_ea_1802E47C0.c)
 *     ?Append@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1802F7108 (-Append@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Compo_ea_1802F7108.c)
 *     ?InsertAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXIPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1802F9760 (-InsertAt@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Com_ea_1802F9760.c)
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x1802FA2A0 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C_ea_1802FA2A0.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18008D664 (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Platform::Collections::Details::ValidateSize(Platform::Collections::Details *this)
{
  __int64 pExceptionObject; // [rsp+30h] [rbp+8h] BYREF
  void *Exception; // [rsp+38h] [rbp+10h]

  if ( (unsigned __int64)this > 0x7FFFFFFF )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::OutOfMemoryException **)&pExceptionObject;
  }
}
