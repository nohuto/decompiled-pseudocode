/*
 * XREFs of ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z @ 0x1800CCF3C
 * Callers:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001A3FC (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800CCEDC (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003E144 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall COcclusionContext::DoesImageOcclude(COcclusionContext *this, struct IUnknown *a2, char a3)
{
  bool v3; // bl
  struct IUnknownVtbl *lpVtbl; // rax
  COcclusionContext *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      return 1;
    }
    else
    {
      lpVtbl = a2->lpVtbl;
      v6 = 0LL;
      if ( ((int (__fastcall *)(struct IUnknown *, GUID *, COcclusionContext **))lpVtbl->QueryInterface)(
             a2,
             &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
             &v6) >= 0 )
        v3 = (*(unsigned __int8 (__fastcall **)(COcclusionContext *))(*(_QWORD *)v6 + 8LL))(v6) != 0;
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v6);
    }
  }
  return v3;
}
