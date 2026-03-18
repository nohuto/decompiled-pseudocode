/*
 * XREFs of Win32UAFMFreePool @ 0x1C0144AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32UAFMFreePool(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( qword_1C0258C40 )
    result = qword_1C0258C40();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0258C48;
    if ( qword_1C0258C48 )
      return qword_1C0258C48(a1, a2);
  }
  return result;
}
