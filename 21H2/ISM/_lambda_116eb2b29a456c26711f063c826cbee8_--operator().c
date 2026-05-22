/*
 * XREFs of _lambda_116eb2b29a456c26711f063c826cbee8_::operator() @ 0x18019F5C0
 * Callers:
 *     _lambda_2e17bef57c72db371333aa9a3de53833_::operator() @ 0x18019F7B0 (_lambda_2e17bef57c72db371333aa9a3de53833_--operator().c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801A1020 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008A590 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ??$?0$$V@?$_Ref_count_obj@UHotKeyInfo@@@std@@QEAA@XZ @ 0x18019D228 (--$-0$$V@-$_Ref_count_obj@UHotKeyInfo@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall lambda_116eb2b29a456c26711f063c826cbee8_::operator()(_QWORD **a1)
{
  std::_Ref_count_base *v2; // rax
  _BYTE *result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]
  void *v6; // [rsp+40h] [rbp+8h]

  v6 = operator new(0x50uLL);
  v2 = (std::_Ref_count_base *)std::_Ref_count_obj<HotKeyInfo>::_Ref_count_obj<HotKeyInfo>((__int64)v6);
  v4 = (__int64)v2 + 16;
  v5 = v2;
  std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
    *a1,
    &v4);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *(_OWORD *)**a1 = *(_OWORD *)a1[1];
  *(_DWORD *)(**a1 + 16LL) = *(_DWORD *)a1[2];
  *(_DWORD *)(**a1 + 28LL) = *(_DWORD *)a1[3];
  *(_DWORD *)(**a1 + 20LL) = *(_DWORD *)a1[4] & 0xF;
  *(_WORD *)(**a1 + 24LL) = *(_WORD *)a1[4] & 0x7A00;
  *(_BYTE *)(**a1 + 40LL) = *(_BYTE *)a1[5];
  result = a1[6];
  *result = 1;
  return result;
}
