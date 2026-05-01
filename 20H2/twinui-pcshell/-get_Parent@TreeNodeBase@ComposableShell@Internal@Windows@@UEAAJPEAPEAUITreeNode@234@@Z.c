/*
 * XREFs of ?get_Parent@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAPEAUITreeNode@234@@Z @ 0x180255CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComposableShell::TreeNodeBase::get_Parent(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::ITreeNode **a2)
{
  RTL_SRWLOCK *v4; // rbx
  const char *v5; // r9
  PVOID Ptr; // rcx
  struct Windows::Internal::ComposableShell::ITreeNode *v7; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = this + 2;
  AcquireSRWLockShared(this + 2);
  try
  {
    Ptr = this[4].Ptr;
    if ( Ptr )
    {
      v7 = (struct Windows::Internal::ComposableShell::ITreeNode *)*((_QWORD *)Ptr + 9);
      if ( v7 )
      {
        *a2 = v7;
        (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::ITreeNode *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      else
      {
        *a2 = 0LL;
      }
    }
    if ( v4 )
      ReleaseSRWLockShared(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAD,
                           (__int64)"internal\\shellcommoncomposable\\inc\\TreeNodeBase.h",
                           v5);
  }
  return result;
}
