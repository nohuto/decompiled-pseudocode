/*
 * XREFs of ?SetReferenceProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00986F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00599C4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0098810 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01CEAD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 != 11 )
  {
    if ( a3 != 15 )
      return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(
                             (DirectComposition::CBaseExpressionMarshaler *)this,
                             a2,
                             a3,
                             a4,
                             a5);
    if ( a4
      && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           169LL) )
    {
      v9 = this[19];
      if ( v9 != a4 )
      {
        if ( v9 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
        this[19] = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
        *a5 = 1;
        *((_DWORD *)this + 46) = 1;
        goto LABEL_13;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4
    || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          169LL) )
  {
    return (unsigned int)-1073741811;
  }
  v10 = this[16];
  if ( v10 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    this[16] = a4;
    DirectComposition::CResourceMarshaler::AddRef(a4);
    *a5 = 1;
LABEL_13:
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  return v5;
}
