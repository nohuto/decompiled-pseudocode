/*
 * XREFs of ?SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0098560
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00599C4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0098810 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01CEAD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  DirectComposition::CResourceMarshaler *v10; // rcx
  struct DirectComposition::CResourceMarshaler *v12; // rdx

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 0xCu:
      if ( !a4
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              169LL) )
      {
        return (unsigned int)-1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 16);
      if ( v9 == a4 )
        return v5;
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      v10 = a4;
      *((_QWORD *)this + 16) = a4;
      goto LABEL_9;
    case 0x19u:
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              2LL) )
      {
        return (unsigned int)-1073741811;
      }
      v12 = (struct DirectComposition::CResourceMarshaler *)((*((_QWORD *)this + 38) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 38) >> 64));
      if ( a4 == v12 )
        return v5;
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
      *((_QWORD *)this + 38) = 0LL;
      if ( !a4 )
      {
LABEL_10:
        *a5 = 1;
LABEL_11:
        *((_DWORD *)this + 4) &= ~0x400u;
        return v5;
      }
      *((_QWORD *)this + 38) = (char *)a4 - 16;
      v10 = a4;
LABEL_9:
      DirectComposition::CResourceMarshaler::AddRef(v10);
      goto LABEL_10;
    case 0x1Au:
      if ( a4
        && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
             a4,
             169LL) )
      {
        if ( *((_QWORD *)this + 20) )
          return (unsigned int)-1073741790;
        *((_QWORD *)this + 20) = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
        *a5 = 1;
        *((_DWORD *)this + 46) = 1;
        goto LABEL_11;
      }
      return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
