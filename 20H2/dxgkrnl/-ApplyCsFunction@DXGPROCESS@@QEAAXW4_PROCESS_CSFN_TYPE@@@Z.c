/*
 * XREFs of ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C0282DD8
 * Callers:
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02BDF5C (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C012F53C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DXGPROCESS::ApplyCsFunction(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v5; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]

  v2 = a2;
  result = *(_QWORD *)(a1 + 104);
  if ( *(struct _KTHREAD **)(result + 16) != KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v5 + 24) = 5324LL;
    result = WdLogEvent5_WdAssertion(v5);
  }
  if ( *(_DWORD *)(a1 + 40) == 1 )
  {
    v9 = 0;
    v7 = a1;
    v8 = v2;
    Global = DXGGLOBAL::GetGlobal(a1, a2);
    return DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))ApplyCsFunctionAdapterCallback,
             (__int64)&v7,
             2);
  }
  return result;
}
