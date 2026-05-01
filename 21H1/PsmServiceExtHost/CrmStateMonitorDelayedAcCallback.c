/*
 * XREFs of CrmStateMonitorDelayedAcCallback @ 0x1800445C0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002B6B4 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorDelayedAcCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1 - 64;
  v4 = *(_QWORD *)(a1 - 64 + 88);
  if ( *a3 )
  {
    TpSetTimer(v4, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 88), 1LL);
    v6 = 0;
    return CrmStateMonitorStateSet((void **)v3, &v6, 4uLL, 0);
  }
  else
  {
    v7 = -18000000000LL;
    return TpSetTimer(v4, &v7, 0LL, 60000LL);
  }
}
