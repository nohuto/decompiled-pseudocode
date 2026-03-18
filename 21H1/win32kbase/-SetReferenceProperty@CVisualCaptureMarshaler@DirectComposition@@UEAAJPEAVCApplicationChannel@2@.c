/*
 * XREFs of ?SetReferenceProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01F4A70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D6DD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetReferenceProperty(
        DirectComposition::CVisualCaptureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // edi
  int v9; // r8d
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rdx
  struct DirectComposition::CResourceMarshaler *v12; // rdx

  v5 = 0;
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 == 1
        && (!a4
         || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              40LL)) )
      {
        v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 11);
        if ( a4 == v10 )
          return v5;
        if ( v10 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
        *((_QWORD *)this + 11) = a4;
        goto LABEL_16;
      }
    }
    else if ( !a4
           || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                195LL) )
    {
      v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
      if ( a4 == v11 )
        return v5;
      if ( v11 )
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
      *((_QWORD *)this + 10) = a4;
LABEL_16:
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *a5 = 1;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          195LL) )
  {
    return (unsigned int)-1073741811;
  }
  v12 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
  if ( a4 != v12 )
  {
    if ( v12 )
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
    *((_QWORD *)this + 9) = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *a5 = 1;
  }
  return v5;
}
