/*
 * XREFs of ??0CAsyncFlushResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@I@Z @ 0x18002759C
 * Callers:
 *     ?Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x180027420 (-Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMIL.c)
 * Callees:
 *     ??0CResponseItem@@QEAA@PEAVCGlobalSurfaceManager@@@Z @ 0x180027670 (--0CResponseItem@@QEAA@PEAVCGlobalSurfaceManager@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

CAsyncFlushResponse *__fastcall CAsyncFlushResponse::CAsyncFlushResponse(
        CAsyncFlushResponse *this,
        struct CGlobalSurfaceManager *a2,
        struct CChannelContext *a3,
        int a4)
{
  CResponseItem::CResponseItem(this, a2);
  *((_DWORD *)this + 12) = a4;
  *(_QWORD *)this = &CAsyncFlushResponse::`vftable';
  *((_QWORD *)this + 5) = a3;
  if ( a3 )
    CMILRefCountImpl::AddReference((struct CChannelContext *)((char *)a3 + 8));
  return this;
}
