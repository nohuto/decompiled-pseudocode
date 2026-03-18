/*
 * XREFs of UpdateInternalStatsOnFlush @ 0x27B304
 * Callers:
 *     LookUpTableFlushComplete @ 0x27A994 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x27B226 (LookUpTableFlushPartial.c)
 * Callees:
 *     <none>
 */

int __fastcall UpdateInternalStatsOnFlush(_DWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  int result; // eax
  bool v4; // cf

  if ( a2 )
  {
    HIDWORD(v2) = a1[40];
    LODWORD(v2) = a1[41];
    if ( a1[44] > a2 || (result = v2 | HIDWORD(v2), !v2) )
      a1[44] = a2;
    if ( a1[43] < a2 )
      a1[43] = a2;
    a1[40] = HIDWORD(v2) + 1;
    v4 = __CFADD__(a2, a1[38]);
    a1[38] += a2;
    a1[41] = __CFADD__(HIDWORD(v2), 1) + (_DWORD)v2;
    a1[39] += v4;
  }
  return result;
}
