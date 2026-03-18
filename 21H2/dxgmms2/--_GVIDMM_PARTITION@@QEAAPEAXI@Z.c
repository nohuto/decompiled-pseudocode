/*
 * XREFs of ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C003129C
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0001658 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C00018B0 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ??1VIDMM_PARTITION@@QEAA@XZ @ 0x1C0031208 (--1VIDMM_PARTITION@@QEAA@XZ.c)
 */

char **__fastcall VIDMM_PARTITION::`scalar deleting destructor'(char **P)
{
  VIDMM_PARTITION::~VIDMM_PARTITION(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
