/*
 * XREFs of ?Shutdown@WindowGroupManager@@UEAAXXZ @ 0x180273820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A9AC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1801EFB94 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_fb8ffb7aaf04028a008f50d257f75536___ @ 0x1802725A0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_fb8ffb7aaf04028a008f50d257f75536.c)
 */

void __fastcall WindowGroupManager::Shutdown(WindowGroupManager *this)
{
  RTL_SRWLOCK *v2; // rdi
  void *v3; // rdx
  __int64 *v4; // rbx
  __int64 v5; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ecx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 64);
  AcquireSRWLockShared((PSRWLOCK)this + 8);
  v4 = (__int64 *)*((_QWORD *)this + 9);
  v5 = *v4;
  v14 = *v4;
  while ( (__int64 *)v5 != v4 )
  {
    v15 = v5 + 32;
    *(_QWORD *)v12 = *((_QWORD *)this + 14);
    *(_QWORD *)&v12[2] = &v15;
    CurrentThreadId = GetCurrentThreadId();
    v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_fb8ffb7aaf04028a008f50d257f75536___(
           v7,
           CurrentThreadId,
           (__int128 *)v12);
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
        (const char *)(unsigned int)v8);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
      &v14,
      v9,
      v10,
      v11);
    v5 = v14;
  }
  wil::details::SetEvent(*((wil::details **)this + 13), v3);
  if ( v2 )
    ReleaseSRWLockShared(v2);
}
