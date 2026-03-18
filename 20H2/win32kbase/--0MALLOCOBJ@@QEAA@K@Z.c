/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C014D71C
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C014D9D0 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this)
{
  void *v2; // rax

  *(_QWORD *)this = 0LL;
  v2 = PALLOCMEM2(0x100uLL, 1886221383LL, 1);
  *(_QWORD *)this = v2;
  if ( !v2 )
    EngSetLastError(8u);
  return this;
}
