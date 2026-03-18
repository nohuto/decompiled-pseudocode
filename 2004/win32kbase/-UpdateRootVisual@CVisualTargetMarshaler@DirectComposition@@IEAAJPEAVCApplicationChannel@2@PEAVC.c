/*
 * XREFs of ?UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C003FE1C
 * Callers:
 *     ?ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C003FD30 (-ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 *     ?SetReferenceProperty@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C003FD90 (-SetReferenceProperty@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D0E54 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualTargetMarshaler::UpdateRootVisual(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        DirectComposition::CVisualTargetMarshaler **a3,
        bool *a4)
{
  unsigned int v4; // edi
  struct DirectComposition::CVisualMarshaler *v9; // rcx
  DirectComposition::CVisualTargetMarshaler *v11; // rax

  v4 = 0;
  *a4 = 0;
  if ( a3 && (v11 = a3[24]) != 0LL && v11 != this )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = (struct DirectComposition::CVisualMarshaler *)*((_QWORD *)this + 9);
    if ( v9 != (struct DirectComposition::CVisualMarshaler *)a3 )
    {
      if ( v9 )
      {
        (*(void (__fastcall **)(struct DirectComposition::CVisualMarshaler *))(*(_QWORD *)v9 + 248LL))(v9);
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this + 9));
        *((_QWORD *)this + 9) = 0LL;
      }
      if ( a3 )
      {
        *((_QWORD *)this + 9) = a3;
        DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)a3);
        *(_QWORD *)(*((_QWORD *)this + 9) + 192LL) = this;
      }
      *((_DWORD *)this + 4) |= 0x20u;
      *a4 = 1;
    }
  }
  return v4;
}
