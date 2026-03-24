/*
 * XREFs of ??0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z @ 0x1C016DFB8
 * Callers:
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z @ 0x1C016DF18 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001AFA4 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 */

BLTQUEUE_EMULATED_VSYNC_SOURCE *__fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::BLTQUEUE_EMULATED_VSYNC_SOURCE(
        BLTQUEUE_EMULATED_VSYNC_SOURCE *this,
        struct DXGDODPRESENT *a2,
        struct _EX_TIMER *a3,
        struct _EX_TIMER *a4)
{
  BLTQUEUE_EMULATED_VSYNC_SOURCE *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &BLTQUEUE_EMULATED_VSYNC_SOURCE::`vftable';
  *((_BYTE *)this + 8) = 0;
  KeInitializeEvent((PRKEVENT)this + 1, SynchronizationEvent, 0);
  if ( a2 && (*((_DWORD *)DXGDODPRESENT::GetAdapter(a2) + 87) & 0x100) != 0 )
    *((_BYTE *)this + 8) = 1;
  result = this;
  if ( !*((_BYTE *)this + 8) )
    a3 = a4;
  *((_QWORD *)this + 2) = a3;
  return result;
}
