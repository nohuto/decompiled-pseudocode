/*
 * XREFs of ?SetReferenceProperty@CDesktopTreeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00BDBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRootVisual@CDesktopTreeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BDCA8 (-ReleaseRootVisual@CDesktopTreeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01CEAD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CDesktopTreeMarshaler::SetReferenceProperty(
        DirectComposition::CDesktopTreeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  DirectComposition::CDesktopTreeMarshaler *v9; // rax

  v5 = 0;
  if ( a3 != 1 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           195LL) )
    {
      v9 = (DirectComposition::CDesktopTreeMarshaler *)*((_QWORD *)a4 + 24);
      if ( !v9 )
      {
        DirectComposition::CDesktopTreeMarshaler::ReleaseRootVisual(this, a2);
        *((_QWORD *)a4 + 24) = this;
        *((_QWORD *)this + 8) = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x40u;
        *a5 = 1;
        return v5;
      }
      if ( v9 == this )
        return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( *((_QWORD *)this + 8) )
  {
    DirectComposition::CDesktopTreeMarshaler::ReleaseRootVisual(this, a2);
    *a5 = 1;
  }
  return v5;
}
