/*
 * XREFs of ??1UMPDREF@@QAE@XZ @ 0x2161D1
 * Callers:
 *     _NtGdiSetPUMPDOBJ@16 @ 0x21AE6D (_NtGdiSetPUMPDOBJ@16.c)
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QAEHXZ @ 0x1F41F3 (-bCleanupWorker@UMPDOBJ@@QAEHXZ.c)
 */

void __thiscall UMPDREF::~UMPDREF(PATHOBJ **this)
{
  if ( *this )
  {
    DEC_SHARE_REF_CNT(*this);
    if ( UMPDOBJ::bCleanupWorker((UMPDOBJ *)*this) )
      Win32FreePool(*this);
  }
}
