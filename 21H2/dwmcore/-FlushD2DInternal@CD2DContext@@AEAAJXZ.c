/*
 * XREFs of ?FlushD2DInternal@CD2DContext@@AEAAJXZ @ 0x180019EC8
 * Callers:
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18007F150 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x180278C80 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::FlushD2DInternal(CD2DContext *this)
{
  unsigned int v1; // edi
  int v3; // eax
  unsigned int v4; // ecx

  v1 = 0;
  if ( *((_BYTE *)this + 437) && *((_BYTE *)this + 438) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 25) + 336LL))(
           *((_QWORD *)this + 25),
           0LL,
           0LL);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x715u, 0LL);
    *((_BYTE *)this + 438) = 0;
  }
  return v1;
}
