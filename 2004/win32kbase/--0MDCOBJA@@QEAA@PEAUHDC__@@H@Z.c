/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0027500
 * Callers:
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0027118 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00271BC (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C0087EB0 (HmgShareLockEx.c)
 */

MDCOBJA *__fastcall MDCOBJA::MDCOBJA(MDCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = HmgShareLockEx(v3, a2);
  return this;
}
