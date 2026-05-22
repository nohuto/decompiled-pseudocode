/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_730587c1c62906cad33c140b5ea68fdf_@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1801683D0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18007595C (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?EnsureWorkerTimer@KeepAliveTimer@ThreadpoolTimerHelpers@@AEAAX_K@Z @ 0x1800CFF20 (-EnsureWorkerTimer@KeepAliveTimer@ThreadpoolTimerHelpers@@AEAAX_K@Z.c)
 */

void __fastcall _lambda_730587c1c62906cad33c140b5ea68fdf_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v3; // rbx
  PVOID Ptr; // rbx
  ULONGLONG TickCount64; // rax
  PVOID v7; // rdx
  ULONGLONG v8; // rax

  v3 = Context + 3;
  AcquireSRWLockExclusive(Context + 3);
  LOBYTE(Context[2].Ptr) = 0;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  Ptr = Context[12].Ptr;
  TickCount64 = GetTickCount64();
  v7 = Context[13].Ptr;
  v8 = TickCount64 - (_QWORD)Ptr;
  if ( (unsigned __int64)v7 > v8 )
    ThreadpoolTimerHelpers::KeepAliveTimer::EnsureWorkerTimer(Context, (__int64)v7 - v8);
  else
    std::_Func_class<void,>::operator()((__int64)&Context[4]);
}
