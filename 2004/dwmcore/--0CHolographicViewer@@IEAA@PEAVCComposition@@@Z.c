/*
 * XREFs of ??0CHolographicViewer@@IEAA@PEAVCComposition@@@Z @ 0x1802580DC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CHolographicViewer *__fastcall CHolographicViewer::CHolographicViewer(
        CHolographicViewer *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHolographicViewer::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicViewer::`vftable'{for `IHolographicViewer'};
  *((_QWORD *)this + 8) = &CHolographicViewer::`vftable'{for `IHolographicViewerBufferSource'};
  *((_DWORD *)this + 18) = 0;
  *(_OWORD *)((char *)this + 76) = 0LL;
  *(_OWORD *)((char *)this + 92) = 0LL;
  *(_OWORD *)((char *)this + 108) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_BYTE *)this + 152) = 0;
  *((_DWORD *)this + 18) = _InterlockedIncrement(&dword_18034484C);
  *((_QWORD *)this + 20) = *((_QWORD *)a2 + 17);
  InitializeSRWLock((PSRWLOCK)this + 22);
  return this;
}
