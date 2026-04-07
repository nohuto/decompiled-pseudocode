/*
 * XREFs of ?NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z @ 0x18002AACC
 * Callers:
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180021BDC (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x18002AAA4 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::NeedsCorrectionScaleForUniformSpaceWindow(struct CWindowData *a1)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)a1 + 87);
  result = 1;
  if ( (v1 & 1) == 0 )
    return (v1 & 2) != 0;
  return result;
}
