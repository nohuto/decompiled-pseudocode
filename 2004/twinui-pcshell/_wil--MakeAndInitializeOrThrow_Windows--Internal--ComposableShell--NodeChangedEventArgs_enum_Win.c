/*
 * XREFs of _wil::MakeAndInitializeOrThrow_Windows::Internal::ComposableShell::NodeChangedEventArgs_enum_Windows::Internal::ComposableShell::TreeNodeEventType_Windows::Internal::ComposableShell::ITreeNode____::_1_::dtor$0 @ 0x18024A8B5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136EC0 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::MakeAndInitializeOrThrow_Windows::Internal::ComposableShell::NodeChangedEventArgs_enum_Windows::Internal::ComposableShell::TreeNodeEventType_Windows::Internal::ComposableShell::ITreeNode____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(*(__int64 **)(a2 + 64));
  }
}
