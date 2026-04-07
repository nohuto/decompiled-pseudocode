/*
 * XREFs of ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x180013954
 * Callers:
 *     ?OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z @ 0x180009C10 (-OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180012B50 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180012F3C (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013990 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002C47C (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::SetDirtyFlags(CSecondaryWindowRepresentation *this, int a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 6);
  if ( (a2 & v3) != a2 )
  {
    *((_DWORD *)this + 6) = a2 | v3;
    (***((void (__fastcall ****)(_QWORD, CSecondaryWindowRepresentation *))this + 21))(*((_QWORD *)this + 21), this);
  }
}
