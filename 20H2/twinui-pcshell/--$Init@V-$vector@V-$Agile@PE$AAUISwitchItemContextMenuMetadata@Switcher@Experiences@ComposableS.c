/*
 * XREFs of ??$Init@V?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@AEAV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@4@@Z @ 0x180315BF0
 * Callers:
 *     ??0?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@QE$AAA@XZ @ 0x180317388 (--0-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInt.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18021611C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@IH@std@@YA?AV?$shared_ptr@I@0@$$QEAH@Z @ 0x1802F97C4 (--$make_shared@IH@std@@YA-AV-$shared_ptr@I@0@$$QEAH@Z.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall Platform::Collections::Details::Init<std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v4; // rax
  _DWORD *v5; // rax
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-10h]
  void *Exception; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(Exception) = 0;
  try
  {
    v4 = std::make_shared<unsigned int,int>(&v9, &Exception);
    std::shared_ptr<KBViewInfo>::operator=(a1, v4);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    v5 = operator new(0x28uLL);
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj<std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>>::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *a2 = v5 + 4;
    v6 = (std::_Ref_count_base *)a2[1];
    a2[1] = v5;
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v7 = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::OutOfMemoryException **)&v7;
  }
  catch ( std::exception )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::FailureException::FailureException(Exception);
    v8 = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::FailureException **)&v8;
  }
}
