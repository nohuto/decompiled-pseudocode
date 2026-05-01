/*
 * XREFs of ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1801809F4
 * Callers:
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x18017DCF0 (-HandleChainLinkEvent@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180179D94 (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ??1ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x18017A398 (--1ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x18017F6F0 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x180180AE0 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainIfPreviousMatches(
        __int64 a1,
        __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // edi
  _BYTE v7[80]; // [rsp+20h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::ChainLinkNotifier((__int64)v7);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( !a2 || *(_QWORD *)(a1 + 64) == a2 )
  {
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(a1, v7);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify((__int64)v7);
    v5 = 0;
  }
  else
  {
    v5 = -2147483636;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x284,
      (__int64)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
      (const char *)0x8000000CLL);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::~ChainLinkNotifier((__int64)v7);
  return v5;
}
