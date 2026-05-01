/*
 * XREFs of ??0XamlExplorerHost@@QE$AAA@XZ @ 0x1802ECE28
 * Callers:
 *     ?RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ @ 0x1802EB51C (-RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802ED008 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ?s_LoadResources@XamlExplorerHost@@CAJXZ @ 0x1802EF230 (-s_LoadResources@XamlExplorerHost@@CAJXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlExplorerHost::XamlExplorerHost(__int64 a1)
{
  int Resources; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Platform::Object::Object(a1 + 16);
  *(_QWORD *)a1 = &XamlExplorerHost::`vftable'{for `__IXamlExplorerHostPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &XamlExplorerHost::`vftable'{for `WindowsInternal::ComposableShell::Desktop::IDesktopAppHost'};
  *(_QWORD *)(a1 + 16) = &XamlExplorerHost::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 24) = &XamlExplorerHost::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 32) = &XamlExplorerHost::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 112);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_BYTE *)(a1 + 96) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 104));
  Resources = XamlExplorerHost::s_LoadResources();
  if ( Resources < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      29LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)Resources);
  return a1;
}
