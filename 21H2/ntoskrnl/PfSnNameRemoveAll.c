/*
 * XREFs of PfSnNameRemoveAll @ 0x140698BDC
 * Callers:
 *     PfFileInfoNotify @ 0x14031D600 (PfFileInfoNotify.c)
 * Callees:
 *     PfSnActiveTraceGetNext @ 0x1402B52F8 (PfSnActiveTraceGetNext.c)
 *     PfSnNameRemove @ 0x1402B53B4 (PfSnNameRemove.c)
 *     PfSnLogStreamDelete @ 0x140698C2C (PfSnLogStreamDelete.c)
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
    if ( (unsigned int)PfSnNameRemove((__int64)result, *(_QWORD *)(a1 + 16)) )
      PfSnLogStreamDelete(a1, v4);
  }
  return result;
}
