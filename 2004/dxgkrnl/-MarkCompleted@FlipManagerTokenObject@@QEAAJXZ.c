/*
 * XREFs of ?MarkCompleted@FlipManagerTokenObject@@QEAAJXZ @ 0x1C0063024
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z @ 0x1C0062BA0 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0010C50 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FlipManagerTokenObject::MarkCompleted(FlipManagerTokenObject *this)
{
  int v2; // ebx

  v2 = CPushLock::AcquireLockShared((FlipManagerTokenObject *)((char *)this + 72));
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 16) == 1 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 24LL))((char *)this + 40);
    else
      v2 = -1073741823;
    CPushLock::ReleaseLock((FlipManagerTokenObject *)((char *)this + 72));
  }
  return (unsigned int)v2;
}
