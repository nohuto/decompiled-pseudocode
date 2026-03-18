/*
 * XREFs of ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0046FFC
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00D6C94 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ??1DXGDODPRESENT@@QEAA@XZ @ 0x1C02F8144 (--1DXGDODPRESENT@@QEAA@XZ.c)
 * Callees:
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C02F80E4 (--1BLTQUEUE@@QEAA@XZ.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::`scalar deleting destructor'(BLTQUEUE *P, char a2)
{
  BLTQUEUE::~BLTQUEUE(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
