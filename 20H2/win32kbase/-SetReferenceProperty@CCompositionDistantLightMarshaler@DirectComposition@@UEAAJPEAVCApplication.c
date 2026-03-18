/*
 * XREFs of ?SetReferenceProperty@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00B8E00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00599C4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01CEAD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetReferenceProperty(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler **v9; // r14

  v5 = 0;
  *a5 = 0;
  if ( a3 != 4 )
    return 3221225485LL;
  v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 112);
  if ( this == (DirectComposition::CCompositionDistantLightMarshaler *)-112LL
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          195LL) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( *v9 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, *v9);
    *v9 = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) |= 0x200u;
    *a5 = 1;
  }
  return v5;
}
