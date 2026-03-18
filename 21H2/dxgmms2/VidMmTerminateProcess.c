/*
 * XREFs of VidMmTerminateProcess @ 0x1C00015B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C008245C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 */

void __fastcall VidMmTerminateProcess(VIDMM_PROCESS *P)
{
  if ( P )
  {
    VIDMM_PROCESS::~VIDMM_PROCESS(P);
    ExFreePoolWithTag(P, 0);
  }
}
