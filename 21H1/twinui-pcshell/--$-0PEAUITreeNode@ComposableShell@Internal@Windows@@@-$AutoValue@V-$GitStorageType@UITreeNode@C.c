/*
 * XREFs of ??$?0PEAUITreeNode@ComposableShell@Internal@Windows@@@?$AutoValue@V?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUITreeNode@ComposableShell@Internal@Windows@@PEAJ@Z @ 0x180226234
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITreeNode@ComposableShell@25@_N@Z @ 0x18022D3E0 (-InsertAtInternal@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPre.c)
 *     ?SetAt@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITreeNode@ComposableShell@25@@Z @ 0x180230080 (-SetAt@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@PEAU.c)
 * Callees:
 *     ?Initialize@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x18022D2A4 (-Initialize@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJP.c)
 */

__int64 __fastcall XWinRT::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>>::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>>(
        __int64 a1,
        _QWORD *a2,
        int *a3)
{
  int v5; // eax

  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::Initialize(a1, *a2);
  *a3 = v5;
  if ( v5 < 0 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}
