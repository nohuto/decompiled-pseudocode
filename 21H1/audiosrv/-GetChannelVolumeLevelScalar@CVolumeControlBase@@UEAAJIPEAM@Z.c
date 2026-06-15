/*
 * XREFs of ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x1800BFDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180054BA0 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005D96C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned int v7; // ebx
  CVolumeUnit *v8; // rax

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v4 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( (unsigned int)v4 >= *((_DWORD *)this + 31) )
  {
    v7 = -2147024809;
LABEL_5:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetChannelVolumeLevelScalar", 481, v7);
    goto LABEL_7;
  }
  if ( !a3 )
  {
    v7 = -2147467261;
    goto LABEL_5;
  }
  v8 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 11, v4);
  *a3 = CVolumeUnit::GetWiper(v8);
  v7 = 0;
LABEL_7:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
