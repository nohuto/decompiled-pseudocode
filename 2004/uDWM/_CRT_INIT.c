/*
 * XREFs of _CRT_INIT @ 0x18005431C
 * Callers:
 *     __DllMainCRTStartup @ 0x180054598 (__DllMainCRTStartup.c)
 * Callees:
 *     _amsg_exit_0 @ 0x1800547F6 (_amsg_exit_0.c)
 *     _IsNonwritableInCurrentImage @ 0x180054860 (_IsNonwritableInCurrentImage.c)
 *     _initterm_0 @ 0x1800549CE (_initterm_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRT_INIT(__int64 a1, int a2, __int64 a3)
{
  int v5; // r14d
  PVOID StackBase; // rsi
  signed __int64 v7; // rax
  void (**v8)(void); // rbp
  void (**v9)(void); // rsi
  void *v10; // r12
  __int64 v11; // r15
  void (*v12)(void); // rax
  int v13; // ebp
  PVOID v14; // rsi
  signed __int64 v15; // rax
  __int64 (**v16)(void); // rsi
  int v17; // eax

  if ( !a2 )
  {
    if ( dword_1800E4D58 > 0 )
    {
      v5 = 0;
      --dword_1800E4D58;
      StackBase = NtCurrentTeb()->NtTib.StackBase;
      while ( 1 )
      {
        v7 = _InterlockedCompareExchange64(&_native_startup_lock, (signed __int64)StackBase, 0LL);
        if ( !v7 )
          break;
        if ( (PVOID)v7 == StackBase )
        {
          v5 = 1;
          break;
        }
        Sleep(0x3E8u);
      }
      if ( _native_startup_state == 2 )
      {
        v8 = (void (**)(void))_onexitbegin;
        if ( _onexitbegin )
        {
          v9 = (void (**)(void))_onexitend;
          v10 = _onexitbegin;
          v11 = _onexitend;
          while ( --v9 >= v8 )
          {
            v12 = *v9;
            if ( *v9 )
            {
              *v9 = 0LL;
              v12();
              if ( v10 != _onexitbegin || v11 != _onexitend )
              {
                v10 = _onexitbegin;
                v8 = (void (**)(void))_onexitbegin;
                v11 = _onexitend;
                v9 = (void (**)(void))_onexitend;
              }
            }
          }
          free(v8);
          _onexitend = 0LL;
          _onexitbegin = 0LL;
        }
        _native_startup_state = 0;
        if ( !v5 )
          _InterlockedExchange64(&_native_startup_lock, 0LL);
      }
      else
      {
        amsg_exit_0(31LL);
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( a2 == 1 )
  {
    v13 = 0;
    v14 = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v15 = _InterlockedCompareExchange64(&_native_startup_lock, (signed __int64)v14, 0LL);
      if ( !v15 )
        break;
      if ( (PVOID)v15 == v14 )
      {
        v13 = 1;
        break;
      }
      Sleep(0x3E8u);
    }
    if ( _native_startup_state )
    {
      amsg_exit_0(31LL);
    }
    else
    {
      v16 = (__int64 (**)(void))&_xi_a;
      _native_startup_state = 1;
      v17 = 0;
      if ( &_xi_a < (_UNKNOWN *)&_xi_z )
      {
        while ( !v17 )
        {
          if ( *v16 )
            v17 = (*v16)();
          if ( ++v16 >= &_xi_z )
          {
            if ( !v17 )
              goto LABEL_37;
            return 0LL;
          }
        }
        return 0LL;
      }
LABEL_37:
      initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
      _native_startup_state = 2;
    }
    if ( !v13 )
      _InterlockedExchange64(&_native_startup_lock, 0LL);
    if ( _dyn_tls_init_callback && (unsigned int)IsNonwritableInCurrentImage(&_dyn_tls_init_callback) )
      ((void (__fastcall *)(__int64, __int64, __int64))_dyn_tls_init_callback)(a1, 2LL, a3);
    ++dword_1800E4D58;
  }
  return 1LL;
}
