/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518___::_scalar_deleting_destructor_ @ 0x1800B21C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_::__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_ @ 0x1800B0B0C (_lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_--__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_::__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x158);
  return a1;
}
