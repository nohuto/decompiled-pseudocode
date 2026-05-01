/*
 * XREFs of ??0?$MakeSafelyCopyableResult@V?$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@PEAVStateChangedEventArgsImpl@@@details@wil@@QEAA@AEBU012@@Z @ 0x180452FE0
 * Callers:
 *     ??$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAAXAEB$$TAEBQEAVStateChangedEventArgsImpl@@@Z @ 0x180451F1C (--$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@-$AsyncEventSourceT@U-$ITypedEventHandler@P.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801409F0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

_QWORD *__fastcall wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<StateChangedEventArgsImpl>,StateChangedEventArgsImpl *>::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<StateChangedEventArgsImpl>,StateChangedEventArgsImpl *>(
        _QWORD *a1,
        volatile int *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // r10
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  v2 = *(_QWORD *)a2;
  v3 = a1;
  *a1 = *(_QWORD *)a2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 56);
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 != 0x7FFFFFFF )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 56), v4 + 1, v4);
        if ( v5 != v4 )
          continue;
      }
      return v3;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v4 + 16), a2);
  }
  return v3;
}
