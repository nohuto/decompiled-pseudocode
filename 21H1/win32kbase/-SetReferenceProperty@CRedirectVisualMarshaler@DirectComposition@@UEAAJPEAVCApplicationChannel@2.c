/*
 * XREFs of ?SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01F4C50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C001A2F0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D6DD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CRedirectVisualMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v5 = 0;
  if ( a3 )
  {
    return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceProperty(
                           (DirectComposition::CVisualMarshaler *)this,
                           a2,
                           a3,
                           a4,
                           a5);
  }
  else if ( !a4
         || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              195LL) )
  {
    v9 = this[46];
    if ( a4 != v9 )
    {
      if ( v9 )
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      this[46] = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 94) |= 1u;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
