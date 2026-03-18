/*
 * XREFs of ??0BLTQUEUE_HW_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_KEVENT@@@Z @ 0x1C02FF360
 * Callers:
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z @ 0x1C0167BD8 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z.c)
 * Callees:
 *     memset @ 0x1C0027400 (memset.c)
 */

BLTQUEUE_HW_VSYNC_SOURCE *__fastcall BLTQUEUE_HW_VSYNC_SOURCE::BLTQUEUE_HW_VSYNC_SOURCE(
        BLTQUEUE_HW_VSYNC_SOURCE *this,
        struct DXGDODPRESENT *a2,
        struct _KEVENT *a3)
{
  BLTQUEUE_HW_VSYNC_SOURCE *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &BLTQUEUE_HW_VSYNC_SOURCE::`vftable';
  memset((char *)this + 16, 0, 0x40uLL);
  *((_QWORD *)this + 10) = 0LL;
  KeInitializeTimerEx((PKTIMER)((char *)this + 16), SynchronizationTimer);
  result = this;
  *((_QWORD *)this + 10) = a3;
  *((_QWORD *)this + 1) = a2;
  return result;
}
