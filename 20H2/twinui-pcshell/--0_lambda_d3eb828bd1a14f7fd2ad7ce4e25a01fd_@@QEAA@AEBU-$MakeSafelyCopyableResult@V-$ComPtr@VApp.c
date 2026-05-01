/*
 * XREFs of ??0_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_@@QEAA@AEBU?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@AEB$$T@Z @ 0x180258728
 * Callers:
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEB$$T@Z @ 0x180257A54 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@-$AsyncEventSourceT@U-$ITypedEventH.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801409F0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

_QWORD *__fastcall _lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_::_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_(
        _QWORD *a1,
        volatile int *a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r11
  _QWORD *v5; // r10
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  v3 = *(_QWORD *)a2;
  v4 = a3;
  *a1 = *(_QWORD *)a2;
  v5 = a1;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 192);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 192), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v6 + 16), a2);
  }
LABEL_8:
  v5[1] = *v4;
  return v5;
}
