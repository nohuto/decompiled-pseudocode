/*
 * XREFs of Win32UAFMFreeToPagedLookasideList @ 0x1C0144B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32UAFMFreeToPagedLookasideList(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  if ( qword_1C0258CA0 )
    result = qword_1C0258CA0();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0258CA8;
    if ( qword_1C0258CA8 )
      return qword_1C0258CA8(a1, a2, a3);
  }
  return result;
}
