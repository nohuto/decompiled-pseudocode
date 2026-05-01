/*
 * XREFs of wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___ @ 0x1803237B8
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18032D840 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801F38CC (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___(__int64 *a1)
{
  __int64 v1; // r14
  __int64 *v2; // rdi
  __int64 *v3; // rsi
  std::_Ref_count_base *v4; // rcx

  v1 = *a1;
  v2 = *(__int64 **)(*a1 + 432);
  v3 = (__int64 *)(*(_QWORD *)a1[1] + 16LL);
  if ( v3 != v2 )
  {
    do
    {
      std::shared_ptr<KBViewInfo>::operator=(v3 - 2, v3);
      v3 += 2;
    }
    while ( v3 != v2 );
    v2 = *(__int64 **)(v1 + 432);
  }
  v4 = (std::_Ref_count_base *)*(v2 - 1);
  if ( v4 )
  {
    std::_Ref_count_base::_Decref(v4);
    v2 = *(__int64 **)(v1 + 432);
  }
  *(_QWORD *)(v1 + 432) = v2 - 2;
  return 0LL;
}
