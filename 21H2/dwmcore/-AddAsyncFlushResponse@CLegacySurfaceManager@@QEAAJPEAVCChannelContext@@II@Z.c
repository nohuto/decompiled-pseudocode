/*
 * XREFs of ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x180043E10
 * Callers:
 *     ?Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x180043E00 (-Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMIL.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x180043F20 (-ReleaseResponseRef@CResponseItem@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800CF72C (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddAsyncFlushResponse(
        CLegacySurfaceManager *this,
        struct CChannelContext *a2,
        unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbp
  void *v7; // rax
  const unsigned int *v8; // rcx

  v3 = 0;
  v6 = *((_QWORD *)g_pComposition + 12);
  v7 = operator new(0x38uLL);
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 0;
    *(_QWORD *)v7 = &CResponseItem::`vftable';
    *((_DWORD *)v7 + 4) = 1;
    *((_QWORD *)v7 + 3) = v6;
    *((_WORD *)v7 + 16) = 0;
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    *((_DWORD *)v7 + 12) = a3;
    v8 = &CAsyncFlushResponse::`vftable';
    *(_QWORD *)v7 = &CAsyncFlushResponse::`vftable';
    *((_QWORD *)v7 + 5) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  }
  if ( v7 )
  {
    CResponseItem::ReleaseResponseRef((CResponseItem *)v7);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147024882, 0x143u, 0LL);
    CAsyncFlushResponse::SendResponseWorker(a2, a3, -2147024882);
  }
  return v3;
}
