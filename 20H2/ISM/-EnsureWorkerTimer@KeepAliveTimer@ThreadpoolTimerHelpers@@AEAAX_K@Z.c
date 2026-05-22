/*
 * XREFs of ?EnsureWorkerTimer@KeepAliveTimer@ThreadpoolTimerHelpers@@AEAAX_K@Z @ 0x1800CF9D0
 * Callers:
 *     ?KeepAlive@KeepAliveTimer@ThreadpoolTimerHelpers@@QEAAXXZ @ 0x1800D0174 (-KeepAlive@KeepAliveTimer@ThreadpoolTimerHelpers@@QEAAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_730587c1c62906cad33c140b5ea68fdf_@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180167E80 (-_lambda_invoker_cdecl_@_lambda_730587c1c62906cad33c140b5ea68fdf_@@CAXPEAU_TP_CALLBACK_INSTANCE@.c)
 * Callees:
 *     <none>
 */

void __fastcall ThreadpoolTimerHelpers::KeepAliveTimer::EnsureWorkerTimer(RTL_SRWLOCK *this, __int64 a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct _TP_TIMER *Ptr; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  if ( !LOBYTE(this[2].Ptr) )
  {
    Ptr = (struct _TP_TIMER *)this[1].Ptr;
    LOBYTE(this[2].Ptr) = 1;
    pftDueTime = (struct _FILETIME)(-10000 * a2);
    SetThreadpoolTimer(Ptr, &pftDueTime, 0, 0);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
