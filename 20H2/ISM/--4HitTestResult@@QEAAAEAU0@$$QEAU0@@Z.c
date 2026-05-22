/*
 * XREFs of ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x1800F84FC
 * Callers:
 *     ?HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_KPEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@9@Z @ 0x1800F9690 (-HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_K.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180011654 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800179A4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 */

__int64 __fastcall HitTestResult::operator=(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // r14
  __int64 *v7; // rsi

  v3 = (_QWORD *)(a2 + 8);
  v4 = (_QWORD *)(a1 + 8);
  *(_BYTE *)a1 = *(_BYTE *)a2;
  if ( a1 + 8 != a2 + 8 )
  {
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((_QWORD *)(a1 + 8), a2, a3);
    *v4 = *v3;
    v4[1] = v3[1];
    v4[2] = v3[2];
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
  }
  v7 = (__int64 *)(a2 + 32);
  if ( a1 + 32 != a2 + 32 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
      (__int64 *)(a1 + 32),
      *v7);
    *v7 = 0LL;
  }
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  *(_BYTE *)(a1 + 112) = *(_BYTE *)(a2 + 112);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 116);
  return a1;
}
