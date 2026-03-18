/*
 * XREFs of ?EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0096EC4
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0001FDC (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C0096DD8 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C008E23C (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C008E340 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C0095600 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqxxqtz_EtwWriteTransfer @ 0x1C01E7970 (McTemplateK0qqqxxqtz_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::EnsureInteraction(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        char a3,
        const unsigned __int16 *a4,
        struct DirectComposition::CInteractionMarshaler **a5)
{
  int v5; // edi
  int v9; // ecx
  struct DirectComposition::CResourceMarshaler *v10; // rcx
  struct DirectComposition::CResourceMarshaler *v12; // [rsp+60h] [rbp-28h] BYREF
  char v13; // [rsp+90h] [rbp+8h] BYREF

  v5 = 0;
  v13 = 0;
  if ( !*((_QWORD *)this + 27) )
  {
    v12 = 0LL;
    v5 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x57u, &v12);
    if ( v5 < 0 )
      goto LABEL_11;
    v5 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)this + 152LL))(
           this,
           a2,
           23LL,
           v12,
           &v13);
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
    if ( v5 < 0 )
      goto LABEL_11;
    if ( a3 )
    {
      v10 = v12;
      *((_BYTE *)v12 + 332) |= 1u;
      *((_BYTE *)v10 + 332) &= 0x9Fu;
      *((_DWORD *)v10 + 4) |= 0x800u;
      v5 = DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(v10);
    }
    if ( v5 < 0 )
    {
LABEL_11:
      if ( v12 )
        (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 152LL))(
          this,
          a2,
          23LL);
    }
    else
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
        McTemplateK0qqqxxqtz_EtwWriteTransfer(
          v9,
          *((_DWORD *)v12 + 6),
          0,
          *((_DWORD *)a2 + 7),
          *((_DWORD *)this + 6),
          *((_DWORD *)v12 + 6),
          *((_DWORD *)this + 6),
          *((_DWORD *)v12 + 6));
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v12);
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, this);
    }
  }
  *a5 = (struct DirectComposition::CInteractionMarshaler *)*((_QWORD *)this + 27);
  return (unsigned int)v5;
}
