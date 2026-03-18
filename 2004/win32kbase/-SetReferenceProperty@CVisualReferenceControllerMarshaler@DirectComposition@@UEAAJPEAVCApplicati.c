/*
 * XREFs of ?SetReferenceProperty@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C003ECA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisual@CVisualReferenceControllerMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C003ED1C (-SetVisual@CVisualReferenceControllerMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

int __fastcall DirectComposition::CVisualReferenceControllerMarshaler::SetReferenceProperty(
        DirectComposition::CVisualReferenceControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          195LL) )
  {
    return -1073741811;
  }
  else
  {
    return DirectComposition::CVisualReferenceControllerMarshaler::SetVisual(this, a2, a4, a5);
  }
}
