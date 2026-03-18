/*
 * XREFs of ?ReleaseRootVisual@CDesktopTreeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BDCA8
 * Callers:
 *     ?SetReferenceProperty@CDesktopTreeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00BDBE0 (-SetReferenceProperty@CDesktopTreeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?ReleaseAllReferences@CDesktopTreeMarshaler@DirectComposition@@EEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BDC90 (-ReleaseAllReferences@CDesktopTreeMarshaler@DirectComposition@@EEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00599C4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDesktopTreeMarshaler::ReleaseRootVisual(
        DirectComposition::CDesktopTreeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 248LL))(v4);
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *((struct DirectComposition::CResourceMarshaler **)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    *((_DWORD *)this + 4) |= 0x40u;
  }
}
