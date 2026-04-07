/*
 * XREFs of ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x1800282D8
 * Callers:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012AF0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x18001A638 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180027A38 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetDirtyFlags@UdwmBottomVisual@@UEAAXK@Z @ 0x1800BAE40 (-SetDirtyFlags@UdwmBottomVisual@@UEAAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::PropagateDirtyChildren(CVisual *this)
{
  __int64 i; // rbx

  for ( i = *((_QWORD *)this + 3); i && (*(_BYTE *)(i + 80) & 1) == 0; i = *(_QWORD *)(i + 24) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 32LL))(i);
}
