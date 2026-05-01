/*
 * XREFs of ?First@?$SimpleVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@V?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@345@@Z @ 0x18029B1E0
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Tabs::ShellTab___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Tabs::ShellTab____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Tabs::ShellTab____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::Tabs::ShellTab___0_1_0____XWinRT::IntVersionTag_::Do__lambda_84697e2701743979e5f53cc48475d4ed___lambda_447c323ccc1a9d5557ace21403b1c74e___ @ 0x180299CBC (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_180299CBC.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Tabs::ShellTab *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Tabs::ShellTab *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>,XWinRT::IntVersionTag,1>::First(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v4 = &v5;
  v3[0] = a1 - 16;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Tabs::ShellTab___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Tabs::ShellTab____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Tabs::ShellTab____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::Tabs::ShellTab___0_1_0____XWinRT::IntVersionTag_::Do__lambda_84697e2701743979e5f53cc48475d4ed___lambda_447c323ccc1a9d5557ace21403b1c74e___(
           (unsigned int *)(a1 + 64),
           *(_QWORD *)(a1 + 56),
           (__int64)v3,
           &v4);
}
