/*
 * XREFs of _lambda_1fc30c6156732220fec1f2e1481ea1a2_::operator() @ 0x180378110
 * Callers:
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180378FE0 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall lambda_1fc30c6156732220fec1f2e1481ea1a2_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rdi
  PVOID Ptr; // rbx

  v2 = *a1 + 34;
  AcquireSRWLockShared(v2);
  Ptr = (*a1)[17].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return Ptr;
}
