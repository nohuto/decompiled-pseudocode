/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VTreeNodeEventArgsBase@ComposableShell@Internal@Windows@@UINodeChangedEventArgs@567@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18024C634
 * Callers:
 *     ??_G?$RuntimeClass@VTreeNodeEventArgsBase@ComposableShell@Internal@Windows@@UINodeChangedEventArgs@234@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18024CEC0 (--_G-$RuntimeClass@VTreeNodeEventArgsBase@ComposableShell@Internal@Windows@@UINodeChangedEventAr.c)
 *     ??_ENodeChangedEventArgs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z @ 0x18024D1A0 (--_ENodeChangedEventArgs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076EB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 32));
}
