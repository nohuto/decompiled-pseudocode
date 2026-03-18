/*
 * XREFs of RtlxQueryRegistryValues @ 0x1C00366C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlxQueryRegistryValues(
        unsigned int RelativeTo,
        const wchar_t *Path,
        _RTL_QUERY_REGISTRY_TABLE *QueryTable,
        void *Context,
        void *Environment)
{
  __int64 (__fastcall *SystemRoutineAddress)(_QWORD, const wchar_t *, _RTL_QUERY_REGISTRY_TABLE *, void *, void *); // rax
  _UNICODE_STRING FunctionName; // [rsp+30h] [rbp-18h] BYREF

  FunctionName = 0LL;
  RtlInitUnicodeString(&FunctionName, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(_QWORD, const wchar_t *, _RTL_QUERY_REGISTRY_TABLE *, void *, void *))MmGetSystemRoutineAddress(&FunctionName);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(_QWORD, const wchar_t *, _RTL_QUERY_REGISTRY_TABLE *, void *, void *))RtlQueryRegistryValues;
  return SystemRoutineAddress(RelativeTo, Path, QueryTable, Context, Environment);
}
