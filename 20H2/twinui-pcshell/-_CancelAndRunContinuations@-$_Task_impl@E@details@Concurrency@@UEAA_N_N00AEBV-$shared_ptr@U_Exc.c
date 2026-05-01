/*
 * XREFs of ?_CancelAndRunContinuations@?$_Task_impl@E@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x180325E80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??1?$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@QEAA@XZ @ 0x1800B90B8 (--1-$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@QEAA@XZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1802061E0 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18021EBA8 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     Concurrency::details::_ScheduleFuncWithAutoInline @ 0x180327B94 (Concurrency--details--_ScheduleFuncWithAutoInline.c)
 *     ?_SetCollectionState@_TaskCollectionBaseImpl@details@Concurrency@@IEAAXW4_TaskCollectionState@123@@Z @ 0x180327D28 (-_SetCollectionState@_TaskCollectionBaseImpl@details@Concurrency@@IEAAXW4_TaskCollectionState@12.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Concurrency::details::_Task_impl<unsigned char>::_CancelAndRunContinuations(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        _QWORD *a5)
{
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  __int64 v13; // rdx
  int v15; // eax
  struct _Mtx_internal_imp_t *v16; // [rsp+20h] [rbp-78h]
  _QWORD v17[8]; // [rsp+30h] [rbp-68h] BYREF

  v16 = (struct _Mtx_internal_imp_t *)(a1 + 32);
  v8 = _Mtx_lock((_Mtx_t)(a1 + 32));
  if ( v8 )
    std::_Throw_C_error(v8);
  v9 = *(_DWORD *)(a1 + 8);
  if ( a3 )
  {
    if ( v9 != 4 )
    {
      std::shared_ptr<PeoplePaneViewInfo>::operator=((_QWORD *)(a1 + 16), a5);
LABEL_10:
      if ( a2 )
      {
        *(_DWORD *)(a1 + 8) = 4;
        v10 = 1;
      }
      else
      {
        v10 = 0;
        if ( *(_DWORD *)(a1 + 8) == 1 )
          v10 = 2;
        *(_DWORD *)(a1 + 8) = 2;
        Concurrency::details::_TaskEventLogger::_LogCancelTask((Concurrency::details::_TaskEventLogger *)(a1 + 352));
      }
      v11 = _Mtx_unlock(v16);
      if ( v11 )
        std::_Throw_C_error(v11);
      v12 = v10 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          if ( *(_QWORD *)(a1 + 432) )
            std::_Func_class<void,>::operator()(a1 + 376);
        }
      }
      else
      {
        Concurrency::details::_TaskCollectionBaseImpl::_SetCollectionState(a1 + 136);
        if ( *(_QWORD *)(a1 + 112) )
        {
          v17[0] = &std::_Func_impl_no_alloc<_lambda_763529b0c7473cbc215a52d189ac9b18_,void,>::`vftable';
          v17[1] = a1;
          v17[7] = v17;
          Concurrency::details::_ScheduleFuncWithAutoInline(v17, 16LL);
          std::function<bool (APP_LAYOUT_ENUM_ITEM)>::~function<bool (APP_LAYOUT_ENUM_ITEM)>((__int64)v17, v13);
        }
      }
      return 1;
    }
  }
  else if ( v9 != 3 && *(_DWORD *)(a1 + 8) != 4 && (*(_DWORD *)(a1 + 8) != 2 || a2) )
  {
    goto LABEL_10;
  }
  v15 = _Mtx_unlock(v16);
  if ( v15 )
    std::_Throw_C_error(v15);
  return 0;
}
