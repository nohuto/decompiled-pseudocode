/*
 * XREFs of CiProcessNotification @ 0x1C0002BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00033D0 (_guard_dispatch_icall_nop.c)
 *     CiProcessSuspend @ 0x1C0004B64 (CiProcessSuspend.c)
 *     CiProcessDereference @ 0x1C000A830 (CiProcessDereference.c)
 *     CiProcessLocate @ 0x1C000B2C0 (CiProcessLocate.c)
 */

__int64 __fastcall CiProcessNotification(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rbx
  unsigned __int8 v4; // al

  result = CiProcessLocate();
  v3 = (void *)result;
  if ( result )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))CiKernelInterface)(a1);
    CiProcessSuspend(v3, v4);
    return CiProcessDereference(v3);
  }
  return result;
}
