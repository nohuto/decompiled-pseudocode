/*
 * XREFs of CrmStateMonitorTimeSinceLogonStart @ 0x180043A4C
 * Callers:
 *     CrmStateMonitorStart @ 0x18002B290 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002BE6C (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180047B22 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceLogonStart(__int64 a1)
{
  unsigned int v2; // eax
  const void *v3; // rdx
  void *v4; // r9
  int v5; // edi
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v2 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  memcpy_0(v4, v3, v2);
  v5 = TpAllocTimer(a1 + 72, CrmStateMonitorTimeSinceLogonCallback, a1, 0LL);
  if ( v5 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 64) = 30LL;
    v8 = -300000000LL;
    TpSetTimer(v6, &v8, 0LL, 0LL);
  }
  return (unsigned int)v5;
}
