/*
 * XREFs of ?try_lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18006F5F0
 * Callers:
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x1800DBA94 (-CaptureState@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall wil::critical_section::try_lock(struct _RTL_CRITICAL_SECTION *a1, unsigned __int64 *a2)
{
  bool v4; // cf
  unsigned __int64 *result; // rax

  v4 = TryEnterCriticalSection(a1);
  result = a2;
  *a2 = (unsigned __int64)a1 & -(__int64)v4;
  return result;
}
