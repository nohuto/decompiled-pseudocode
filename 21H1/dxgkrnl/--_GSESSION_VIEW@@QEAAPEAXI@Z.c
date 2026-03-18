/*
 * XREFs of ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C0011CFC
 * Callers:
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0132F08 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C015A320 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 * Callees:
 *     ??1SESSION_VIEW@@QEAA@XZ @ 0x1C0133204 (--1SESSION_VIEW@@QEAA@XZ.c)
 */

SESSION_VIEW *__fastcall SESSION_VIEW::`scalar deleting destructor'(SESSION_VIEW *P)
{
  SESSION_VIEW::~SESSION_VIEW(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
