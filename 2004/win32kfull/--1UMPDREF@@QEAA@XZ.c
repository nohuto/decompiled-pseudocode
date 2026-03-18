/*
 * XREFs of ??1UMPDREF@@QEAA@XZ @ 0x1C02B1E10
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C00EE440 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00EE7B8 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

void __fastcall UMPDREF::~UMPDREF(UMPDOBJ **this)
{
  UMPDOBJ *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    if ( (unsigned int)UMPDOBJ::bCleanupWorker(*this) )
      Win32FreePool(*this);
  }
}
