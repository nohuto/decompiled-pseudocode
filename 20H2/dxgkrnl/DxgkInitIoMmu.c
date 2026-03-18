/*
 * XREFs of DxgkInitIoMmu @ 0x1C018BE1C
 * Callers:
 *     DriverEntry @ 0x1C0305D00 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 DxgkInitIoMmu()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax

  result = IoGetIommuInterface(1LL, &unk_1C00B1020);
  v3 = (int)result;
  if ( (int)result < 0 )
  {
    v4 = WdLogNewEntry5_WdError(v2, v1);
    *(_QWORD *)(v4 + 24) = 1LL;
    *(_QWORD *)(v4 + 32) = v3;
    return WdLogEvent5_WdError(v4);
  }
  return result;
}
