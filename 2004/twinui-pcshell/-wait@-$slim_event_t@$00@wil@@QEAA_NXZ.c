/*
 * XREFs of ?wait@?$slim_event_t@$00@wil@@QEAA_NXZ @ 0x180246E48
 * Callers:
 *     ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18023F098 (--1-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x18023F520 (--1operation_guard@wil@@QEAA@XZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139748 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall wil::slim_event_t<1>::wait(_DWORD *Address)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    if ( *Address )
      return 1;
    CompareAddress = 0;
  }
  while ( WaitOnAddress(Address, &CompareAddress, 4uLL, 0xFFFFFFFF) );
  if ( GetLastError() != 1460 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      2832LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
    __debugbreak();
  }
  return 0;
}
