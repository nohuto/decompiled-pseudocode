/*
 * XREFs of ?SetDeviceTransform@CArrayBasedCoverageSet@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800D6948
 * Callers:
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x18008BB4C (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800D6998 (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 */

void __fastcall CArrayBasedCoverageSet::SetDeviceTransform(CArrayBasedCoverageSet *this, const struct CMILMatrix *a2)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
    CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)(*(_QWORD *)this + 36 * i), a2);
}
