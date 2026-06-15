/*
 * XREFs of ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180035840
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSerialWorkQueue::WorkCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  volatile signed __int32 *v9; // rbx

  v5 = Context[2];
  v6 = _Mtx_lock((_Mtx_t)(v5 + 88));
  if ( v6 )
  {
    std::_Throw_C_error(v6);
    goto LABEL_12;
  }
  if ( *(_BYTE *)(v5 + 80) )
    goto LABEL_5;
  v7 = *(_QWORD *)(*Context + 56LL);
  if ( !v7 )
  {
LABEL_12:
    std::_Xbad_function_call();
    goto LABEL_13;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_5:
  v8 = _Mtx_unlock((_Mtx_t)(v5 + 88));
  if ( v8 )
  {
LABEL_13:
    std::_Throw_C_error(v8);
    __debugbreak();
    JUMPOUT(0x18009922DLL);
  }
  v9 = (volatile signed __int32 *)Context[1];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  operator delete(Context, (const struct std::nothrow_t *)0x18);
  CloseThreadpoolWork(Work);
}
