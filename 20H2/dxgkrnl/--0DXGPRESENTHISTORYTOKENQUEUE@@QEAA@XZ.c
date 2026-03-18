/*
 * XREFs of ??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1C0150534
 * Callers:
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C01501C4 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 * Callees:
 *     memset @ 0x1C0027400 (memset.c)
 */

DXGPRESENTHISTORYTOKENQUEUE *__fastcall DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(
        DXGPRESENTHISTORYTOKENQUEUE *this)
{
  KeInitializeSpinLock((PKSPIN_LOCK)this);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  InitializeSListHead((PSLIST_HEADER)this + 2);
  InitializeSListHead((PSLIST_HEADER)this + 3);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  memset((char *)this + 80, 0, 0x4800uLL);
  return this;
}
