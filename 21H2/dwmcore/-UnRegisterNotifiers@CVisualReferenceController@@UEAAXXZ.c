/*
 * XREFs of ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x1800E6FD0
 * Callers:
 *     ??1CVisualReferenceController@@MEAA@XZ @ 0x1800E6C04 (--1CVisualReferenceController@@MEAA@XZ.c)
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x1800E6C3C (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENC.c)
 * Callees:
 *     ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F6DC0 (-reset@-$com_ptr_t@V-$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

void __fastcall CVisualReferenceController::UnRegisterNotifiers(CVisualReferenceController *this)
{
  char *v1; // rdi
  __int64 v3; // rbx
  CVisualReferenceController **i; // rcx

  v1 = (char *)this + 72;
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    for ( i = *(CVisualReferenceController ***)(v3 + 24); i != *(CVisualReferenceController ***)(v3 + 32) && *i != this; ++i )
      ;
    memmove_0(i, i + 1, *(_QWORD *)(v3 + 32) - (_QWORD)(i + 1));
    *(_QWORD *)(v3 + 32) -= 8LL;
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset(v1);
  }
}
