/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@V?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIShellTab@Tabs@ComposableShell@25@PEAI@Z @ 0x18014BCB0
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Tabs::ShellTab___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Tabs::ShellTab____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Tabs::ShellTab____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::Tabs::ShellTab___0_1_0____XWinRT::IntVersionTag_::Do__lambda_fe5fc9d68e3ef4f08aca1f3a9819f404___lambda_e7de19a5842eb19d674c294190f017d4___ @ 0x18014365C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18014365C.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Internal::ComposableShell::Tabs::ShellTab *,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Tabs::ShellTab *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Tabs::ShellTab *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  unsigned int i; // r8d
  __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v8; // [rsp+78h] [rbp+18h] BYREF
  __int64 v9; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+20h]
  _DWORD *v11; // [rsp+88h] [rbp+28h] BYREF
  va_list va1; // [rsp+88h] [rbp+28h]
  va_list va2; // [rsp+90h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _DWORD *);
  v8 = a2;
  *v11 = 0;
  for ( i = 0; i < v8; *(_QWORD *)(v9 + 8 * v3) = 0LL )
    v3 = i++;
  v4 = *(_QWORD *)(a1 + 64);
  va_copy((va_list)v6, va1);
  v7[0] = a1;
  va_copy((va_list)&v6[1], va);
  v7[1] = (__int64)&v8;
  va_copy((va_list)&v7[2], va);
  va_copy((va_list)&v7[3], va1);
  v7[4] = (__int64)v6;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Tabs::ShellTab___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Tabs::ShellTab____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Tabs::ShellTab____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::Tabs::ShellTab___0_1_0____XWinRT::IntVersionTag_::Do__lambda_fe5fc9d68e3ef4f08aca1f3a9819f404___lambda_e7de19a5842eb19d674c294190f017d4___(
           (unsigned int *)(a1 + 80),
           v4,
           v7,
           (__int64)v6);
}
