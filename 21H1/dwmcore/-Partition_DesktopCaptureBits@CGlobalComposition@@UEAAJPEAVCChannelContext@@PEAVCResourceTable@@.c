/*
 * XREFs of ?Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x18008C240
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x180035A00 (-GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x18008C214 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x18008C380 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalComposition::Partition_DesktopCaptureBits(
        struct CGlobalSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_DESKTOPCAPTUREBITS *a4)
{
  int DesktopTree; // eax
  __int64 v8; // rcx
  VisualCaptureBitsResponse *v9; // rax
  VisualCaptureBitsResponse *v10; // rcx
  struct WICRect v12; // [rsp+50h] [rbp-18h] BYREF
  CRenderTargetBitmap *v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0LL;
  DesktopTree = CGlobalComposition::GetDesktopTree((CGlobalComposition *)this, *(struct _LUID *)((char *)a4 + 4), &v13);
  if ( DesktopTree < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DesktopTree, 0xE7u, 0LL);
  }
  else
  {
    v12 = *(struct WICRect *)((char *)a4 + 12);
    v9 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new();
    if ( v9 )
      v10 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v9,
              this[12],
              a2,
              v13,
              &v12,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 7),
              *((_QWORD *)a4 + 4),
              *((void **)a4 + 5),
              *((void **)a4 + 6));
    else
      v10 = 0LL;
    if ( v10 )
    {
      (*(void (__fastcall **)(VisualCaptureBitsResponse *))(*(_QWORD *)v10 + 32LL))(v10);
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0xF8u, 0LL);
  }
  SetEvent(*((HANDLE *)a4 + 5));
  CloseHandle(*((HANDLE *)a4 + 5));
  CloseHandle(*((HANDLE *)a4 + 6));
LABEL_6:
  if ( v13 )
    CRenderTargetBitmap::Release(v13);
  return 0LL;
}
