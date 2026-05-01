/*
 * XREFs of ?get_ExperienceId@WindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802BEF20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_de069777131e635a669efef9c9b948bd___ @ 0x1802BB8C4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_de069777131e635a669efef9c9b948bd.c)
 */

__int64 __fastcall WindowWrapperBase::get_ExperienceId(WindowWrapperBase *this, HSTRING *a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  HSTRING *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 208LL))(*((_QWORD *)this + 35), &SRWLock);
  *(_QWORD *)&v7 = (char *)this - 8;
  *((_QWORD *)&v7 + 1) = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_de069777131e635a669efef9c9b948bd___(
         v4,
         CurrentThreadId,
         &v7);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
