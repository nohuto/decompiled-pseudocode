/*
 * XREFs of KiUserCallForwarder @ 0x1800A0D70
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A0DC0 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcher @ 0x1800A0ED0 (KiUserCallbackDispatcher.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18008C590 (_guard_check_icall_nop.c)
 */

__int64 KiUserCallForwarder()
{
  __int64 v0; // rdx
  __int64 (__fastcall *v1)(_QWORD, __int64, __int64, __int64); // rcx
  __int64 v2; // r8
  __int64 v3; // r9

  _guard_check_icall_fptr();
  return v1(v1, v0, v2, v3);
}
