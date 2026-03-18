/*
 * XREFs of ?Confirm@CCompositionFrame@@UEAAXXZ @ 0x1C00087A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007E758 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 */

void __fastcall CCompositionFrame::Confirm(CCompositionFrame *this)
{
  char *v1; // rdi
  char *i; // rbx
  char *v4; // rdi
  char *v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  _QWORD *v8; // rsi
  char *v9; // rbx
  struct CFlipManagerSignal *v10; // rdi
  __int64 v11; // rbx

  v1 = (char *)this + 144;
  *((_DWORD *)this + 22) = 1;
  for ( i = (char *)*((_QWORD *)this + 18); i != v1; i = *(char **)i )
    (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)i - 1) + 40LL))((_QWORD *)i - 1);
  v4 = (char *)this + 160;
  while ( 1 )
  {
    v5 = *(char **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *(_QWORD *)v5, *(char **)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v5 == v4 )
      break;
    v9 = v5 - 48;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v5 - 1) + 56LL))(v5 - 8);
    ObfDereferenceObject(v9);
  }
  v7 = *((_QWORD *)this + 10);
  v8 = (_QWORD *)((char *)this + 176);
  while ( (_QWORD *)*v8 != v8 )
  {
    v10 = (struct CFlipManagerSignal *)((*v8 - 8LL) & -(__int64)(*v8 != 0LL));
    v11 = *((_QWORD *)v10 + 5);
    *((_QWORD *)v10 + 5) = 0LL;
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v11 + 40)) >= 0 )
    {
      CFlipManager::ProcessSignal((CFlipManager *)(v11 + 32), v10, v7);
      CPushLock::ReleaseLock((CPushLock *)(v11 + 40));
    }
    ObfDereferenceObject((PVOID)v11);
  }
}
