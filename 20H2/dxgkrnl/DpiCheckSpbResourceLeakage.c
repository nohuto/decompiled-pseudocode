/*
 * XREFs of DpiCheckSpbResourceLeakage @ 0x1C0058714
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C02C8E80 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiDeleteSpbResourceRecord @ 0x1C02D64FC (DpiDeleteSpbResourceRecord.c)
 */

void __fastcall DpiCheckSpbResourceLeakage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = a1 + 2704;
  if ( *(_QWORD *)v2 != v2 )
  {
    v3 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v3 + 24) = *(_QWORD *)v2;
    *(_QWORD *)(v3 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v3);
  }
  while ( *(_QWORD *)v2 != v2 )
  {
    *(_DWORD *)(*(_QWORD *)v2 + 48LL) = 0;
    DpiDeleteSpbResourceRecord();
  }
}
