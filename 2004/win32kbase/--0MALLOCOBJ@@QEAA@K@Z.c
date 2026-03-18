/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C014FCCC
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C014FF80 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
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
