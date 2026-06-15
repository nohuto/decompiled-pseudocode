/*
 * XREFs of ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x1800BF09C
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800C36B0 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180054500 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005D2CC (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 */

void __fastcall CVolumeControlBase::FillLevels(CVolumeControlBase *this, int a2, float *a3)
{
  __int64 i; // rdi
  CVolumeUnit *v6; // rax

  if ( a2 == *((_DWORD *)this + 31) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 31); i = (unsigned int)(i + 1) )
    {
      v6 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (_QWORD *)this + 11,
                            (unsigned int)i);
      a3[i] = CVolumeUnit::GetWiper(v6);
    }
  }
}
