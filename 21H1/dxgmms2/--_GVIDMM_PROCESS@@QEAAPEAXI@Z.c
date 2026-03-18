/*
 * XREFs of ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C002215C
 * Callers:
 *     VidMmCreateProcess @ 0x1C0002050 (VidMmCreateProcess.c)
 * Callees:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C0076CD0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 */

VIDMM_PROCESS *__fastcall VIDMM_PROCESS::`scalar deleting destructor'(VIDMM_PROCESS *P)
{
  VIDMM_PROCESS::~VIDMM_PROCESS(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
