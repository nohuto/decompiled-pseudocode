/*
 * XREFs of ?SetReferenceProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01F6A80
 * Callers:
 *     ?SetReferenceProperty@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01F6F80 (-SetReferenceProperty@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCA.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D6DD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetReferenceProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v5 = 0;
  if ( a3
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          16LL) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 15);
    if ( v9 )
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    *((_QWORD *)this + 15) = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) |= 0x20u;
    *a5 = 1;
  }
  return v5;
}
