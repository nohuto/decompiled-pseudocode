/*
 * XREFs of ParseInteger @ 0x1C0029E44
 * Callers:
 *     ParseArg @ 0x1C000B10C (ParseArg.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 * Callees:
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall ParseInteger(const void **a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // rbx

  v3 = (_QWORD *)(a2 + 16);
  v4 = a3;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)(a2 + 2) = 1;
  memmove((void *)(a2 + 16), *a1, a3);
  *a1 = (char *)*a1 + v4;
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf("0x%I64x", *v3);
  return 0LL;
}
