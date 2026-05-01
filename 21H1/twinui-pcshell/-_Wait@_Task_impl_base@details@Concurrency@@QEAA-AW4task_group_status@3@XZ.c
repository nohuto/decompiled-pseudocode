/*
 * XREFs of ?_Wait@_Task_impl_base@details@Concurrency@@QEAA?AW4task_group_status@3@XZ @ 0x180306CF0
 * Callers:
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::operator() @ 0x180303D5C (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--operator().c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18008D664 (_CxxThrowException_0.c)
 *     ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x180302C3C (--0-$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z.c)
 *     ??0invalid_operation@Concurrency@@QEAA@PEBD@Z @ 0x180302FE4 (--0invalid_operation@Concurrency@@QEAA@PEBD@Z.c)
 *     ?_RethrowUserException@_ExceptionHolder@details@Concurrency@@QEAAXXZ @ 0x18030649C (-_RethrowUserException@_ExceptionHolder@details@Concurrency@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Concurrency::details::_Task_impl_base::_Wait(Concurrency::details::_ExceptionHolder **a1)
{
  Concurrency::details::_ExceptionHolder **v1; // rdi
  int v2; // ebx
  struct _Mtx_internal_imp_t *v3; // r14
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  struct _Mtx_internal_imp_t *v8; // rsi
  int v9; // eax
  int v10; // eax
  Concurrency::details::_ExceptionHolder *v11; // rcx
  _Mtx_t v13; // [rsp+20h] [rbp-78h] BYREF
  char v14; // [rsp+28h] [rbp-70h]
  _Mtx_t v15; // [rsp+30h] [rbp-68h] BYREF
  char v16; // [rsp+38h] [rbp-60h]
  _Mtx_t v17; // [rsp+40h] [rbp-58h] BYREF
  char v18; // [rsp+48h] [rbp-50h]
  _BYTE v19[16]; // [rsp+50h] [rbp-48h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+60h] [rbp-38h] BYREF
  struct _Mtx_internal_imp_t *v22; // [rsp+A8h] [rbp+10h]

  v1 = a1;
  v2 = 0;
  if ( (unsigned __int8)Concurrency::details::_Task_impl_base::_IsNonBlockingThread() )
  {
    if ( *((_DWORD *)v1 + 2) != 3 && *((_DWORD *)v1 + 2) != 4 )
    {
      Concurrency::invalid_operation::invalid_operation(
        (Concurrency::invalid_operation *)pExceptionObject,
        "Illegal to wait on a task in a Windows Runtime STA");
      throw (Concurrency::invalid_operation *)pExceptionObject;
    }
  }
  else if ( *((_BYTE *)v1 + 12) )
  {
    std::unique_lock<std::mutex>::unique_lock<std::mutex>((__int64)&v13, (struct _Mtx_internal_imp_t *)(v1 + 26));
    v3 = v13;
    while ( *((int *)v1 + 78) < 2 )
    {
      v4 = _Cnd_wait((_Cnd_t)(v1 + 17), v3);
      if ( v4 )
        goto LABEL_12;
    }
    if ( v14 )
    {
      v5 = _Mtx_unlock(v3);
      if ( v5 )
      {
        std::_Throw_C_error(v5);
LABEL_12:
        std::_Throw_C_error(v4);
      }
    }
  }
  else
  {
    try
    {
      v22 = (struct _Mtx_internal_imp_t *)(v1 + 26);
      std::unique_lock<std::mutex>::unique_lock<std::mutex>((__int64)&v15, (struct _Mtx_internal_imp_t *)(v1 + 26));
      while ( *((int *)v1 + 78) < 2 )
      {
        v6 = _Cnd_wait((_Cnd_t)(v1 + 17), v15);
        if ( v6 )
        {
          std::_Throw_C_error(v6);
          break;
        }
      }
      if ( v16 )
      {
        v7 = _Mtx_unlock(v15);
        if ( v7 )
          std::_Throw_C_error(v7);
      }
    }
    catch ( Concurrency::details::_Interruption_exception )
    {
      v1 = a1;
      v2 = 0;
    }
    catch ( Concurrency::task_canceled )
    {
      v1 = a1;
      v2 = 0;
    }
    catch ( ... )
    {
      if ( !a1[2] )
      {
        __ExceptionPtrCreate(v19);
        __ExceptionPtrCurrentException(v19);
        Concurrency::details::_Task_impl_base::_CancelWithException(
          (Concurrency::details::_Task_impl_base *)a1,
          (const struct std::exception_ptr *)v19);
        __ExceptionPtrDestroy(v19);
      }
      Concurrency::details::_ExceptionHolder::_RethrowUserException(a1[2]);
    }
    if ( *((_BYTE *)v1 + 13) )
    {
      std::unique_lock<std::mutex>::unique_lock<std::mutex>((__int64)&v17, v22);
      v8 = v17;
      while ( *((int *)v1 + 78) < 2 )
      {
        v9 = _Cnd_wait((_Cnd_t)(v1 + 17), v8);
        if ( v9 )
          goto LABEL_28;
      }
      if ( v18 )
      {
        v10 = _Mtx_unlock(v8);
        if ( v10 )
        {
          std::_Throw_C_error(v10);
LABEL_28:
          std::_Throw_C_error(v9);
        }
      }
    }
  }
  v11 = v1[2];
  if ( v11 )
    Concurrency::details::_ExceptionHolder::_RethrowUserException(v11);
  LOBYTE(v2) = *((_DWORD *)v1 + 2) == 4;
  return (unsigned int)(v2 + 1);
}
