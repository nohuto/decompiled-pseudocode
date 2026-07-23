/*
 * XREFs of PfSnNameRemoveAll @ 0x140698990
 * Callers:
 *     PfFileInfoNotify @ 0x14025C410 (PfFileInfoNotify.c)
 * Callees:
 *     PfSnActiveTraceGetNext @ 0x1402CD610 (PfSnActiveTraceGetNext.c)
 *     PfSnNameRemove @ 0x1402CD6CC (PfSnNameRemove.c)
 *     PfSnLogStreamDelete @ 0x14070E874 (PfSnLogStreamDelete.c)
 */

__int64 *__fastcall PfSnNameRemoveAll(__int64 a1)
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *result; // rax
  struct _EX_RUNDOWN_REF *v4; // rbx

  for ( i = 0LL; ; i = v4 )
  {
    result = PfSnActiveTraceGetNext(i);
    v4 = (struct _EX_RUNDOWN_REF *)result;
    if ( !result )
      break;
    if ( (unsigned int)PfSnNameRemove((__int64)result, *(_RTL_BALANCED_NODE **)(a1 + 16)) )
      PfSnLogStreamDelete(a1, v4);
  }
  return result;
}
