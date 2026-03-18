/*
 * XREFs of ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00CC0C8
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008B830 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 */

void __fastcall VIDMM_GLOBAL::SendBudgetChangeNotifications(VIDMM_GLOBAL *this)
{
  int updated; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rax
  _BYTE v7[20]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v8; // [rsp+54h] [rbp-44h]
  __int128 v9; // [rsp+64h] [rbp-34h]
  __int64 v10; // [rsp+74h] [rbp-24h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  *(_OWORD *)&v7[4] = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  *(_QWORD *)v7 = *(_QWORD *)(*((_QWORD *)this + 3) + 316LL);
  updated = ZwUpdateWnfStateData(&WNF_DX_VIDMM_BUDGETCHANGE_NOTIFICATION, v7, 64LL);
  v5 = updated;
  if ( updated < 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdAssertion(v6);
  }
}
