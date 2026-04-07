/*
 * XREFs of ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x1800019F8
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800013B4 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180001860 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x180009350 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

char __fastcall CTransitionWindowSnapshot::CanUseCVIFromSnapshot(const struct CWindowData *a1)
{
  char v1; // r11
  CWindowSnapshot *v3; // r8

  v1 = 0;
  if ( (*((_BYTE *)a1 + 612) & 0x10) != 0 )
  {
    v3 = (CWindowSnapshot *)*((_QWORD *)a1 + 52);
    if ( v3 )
      return CWindowSnapshot::HasCVIOfCompatibleSize(
               v3,
               (const struct tagRECT *)((char *)a1 + ((*((_DWORD *)a1 + 154) & 0x1000000) != 0 ? 0x23C : 0) + 48));
  }
  return v1;
}
