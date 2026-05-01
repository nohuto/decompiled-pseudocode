/*
 * XREFs of ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x180306444
 * Callers:
 *     ??$?4V_lambda_0c35f08fa008bd0bd75f4471027a7740_@@X@?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV_lambda_0c35f08fa008bd0bd75f4471027a7740_@@@Z @ 0x1803016CC (--$-4V_lambda_0c35f08fa008bd0bd75f4471027a7740_@@X@-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV_la.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@QEAA@XZ @ 0x18017D8F4 (--1-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@QEAA@XZ.c)
 */

void __fastcall std::_Func_class<void,>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::function<void (Concurrency::task<bool>)>::~function<void (Concurrency::task<bool>)>(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
