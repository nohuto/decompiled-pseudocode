/*
 * XREFs of ?QueryInterface@CMonitorNotification@CMonitor@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FF2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitor::CMonitorNotification::QueryInterface(
        CMonitor::CMonitorNotification *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  if ( !a3 )
    return 2147500035LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 5);
    *a3 = this;
  }
  result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_24918acc_64b3_37c1_8ca9_74a66e9957a8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_24918acc_64b3_37c1_8ca9_74a66e9957a8.Data1 )
    result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_24918acc_64b3_37c1_8ca9_74a66e9957a8.Data4;
  if ( result )
  {
    result = 2147500034LL;
    this = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 5);
  }
  *a3 = this;
  return result;
}
