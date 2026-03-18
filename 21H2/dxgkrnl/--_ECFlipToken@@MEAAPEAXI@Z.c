/*
 * XREFs of ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0006830
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0006A48 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C0006A80 (-ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0006F44 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

CFlipToken *__fastcall CFlipToken::`vector deleting destructor'(CFlipToken *this, char a2)
{
  bool v2; // zf
  void (__fastcall ***v5)(_QWORD); // rcx
  char v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r14
  CPushLock *v12; // rbp
  __int64 v13; // r8
  _QWORD **v14; // rdi
  _QWORD *i; // rax
  __int64 v16; // rdi
  __int64 v17; // rbp
  _QWORD *j; // rax

  v2 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CFlipToken::`vftable';
  if ( !v2 )
  {
    *((_DWORD *)this + 6) = 6;
    CFlipToken::TraceStateChanged(this);
    CFlipToken::ConfirmIndependentFlipEntry(this);
    v7 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this);
    if ( !*((_BYTE *)this + 48) )
    {
      v8 = *((_QWORD *)this + 12);
      if ( v8 > 1 )
      {
        v9 = v8 - 1;
        v10 = *((_QWORD *)this + 4);
        v11 = *((_QWORD *)this + 5);
        v12 = (CPushLock *)(v10 + 48);
        if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v10 + 48)) >= 0 )
        {
          if ( *(_DWORD *)(v10 + 128) )
          {
            v14 = (_QWORD **)(v10 + 112);
            for ( i = *v14; i != v14; i = (_QWORD *)*i )
            {
              if ( *(i - 1) == v11 )
              {
                LOBYTE(v13) = v7;
                (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(*(i - 3) + 104LL))(i - 3, v9, v13);
                break;
              }
            }
          }
          CPushLock::ReleaseLock(v12);
        }
      }
    }
    *((_QWORD *)this + 12) = 0LL;
    if ( !*((_BYTE *)this + 89) )
    {
      v16 = *((_QWORD *)this + 4);
      v17 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 89) = 1;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v16 + 48, 0LL);
      if ( *(_DWORD *)(v16 + 128) )
      {
        for ( j = *(_QWORD **)(v16 + 112); j != (_QWORD *)(v16 + 112); j = (_QWORD *)*j )
        {
          if ( *(j - 1) == v17 )
          {
            (*(void (__fastcall **)(_QWORD *))(*(j - 3) + 112LL))(j - 3);
            break;
          }
        }
      }
      CPushLock::ReleaseLock((CPushLock *)(v16 + 48));
    }
  }
  v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
  *(_QWORD *)this = &CToken::`vftable';
  if ( v5 )
    (**v5)(v5);
  ObfDereferenceObject(*((PVOID *)this + 4));
  v2 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CTokenBase::`vftable';
  if ( !v2 )
    *((_DWORD *)this + 6) = 6;
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
