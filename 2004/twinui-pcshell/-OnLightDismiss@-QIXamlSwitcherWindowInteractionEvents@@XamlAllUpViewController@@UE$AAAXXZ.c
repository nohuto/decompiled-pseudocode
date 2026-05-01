/*
 * XREFs of ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXXZ @ 0x18031BA6C
 * Callers:
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXXZ @ 0x1800FA6F0 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b62b7423e3f7d115cab3cf876a54b413___ @ 0x180316D64 (CreationThreadDispatcher--RunAsync__lambda_b62b7423e3f7d115cab3cf876a54b413___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _OnLightDismiss__QIXamlSwitcherWindowInteractionEvents__XamlAllUpViewController__UE_AAAXXZ(__int64 a1)
{
  __int64 WeakReference; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h]

  WeakReference = Platform::Details::GetWeakReference(a1);
  v3 = WeakReference;
  v8 = WeakReference;
  v4 = *(_QWORD *)(a1 + 88);
  v7 = WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  v5 = CreationThreadDispatcher::RunAsync__lambda_b62b7423e3f7d115cab3cf876a54b413___(v4, (volatile int *)&v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      408LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v5);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
