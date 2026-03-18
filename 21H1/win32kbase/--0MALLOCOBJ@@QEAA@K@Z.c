/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C015601C
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C01562D0 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this)
{
  void *v2; // rax

  *(_QWORD *)this = 0LL;
  v2 = PALLOCMEM2(0x100uLL, 0x706D7447u, 1);
  *(_QWORD *)this = v2;
  if ( !v2 )
    EngSetLastError(8u);
  return this;
}
