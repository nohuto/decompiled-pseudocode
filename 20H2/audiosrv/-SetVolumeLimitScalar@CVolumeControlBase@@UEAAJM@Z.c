/*
 * XREFs of ?SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z @ 0x1800C1A90
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005D2CC (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x1800C1B48 (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 */

__int64 __fastcall CVolumeControlBase::SetVolumeLimitScalar(CVolumeControlBase *this, float a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  unsigned int v4; // ebx
  unsigned int v5; // edi
  CVolumeUnit *v6; // rax
  int v7; // eax

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = 0;
  if ( *((_DWORD *)this + 31) )
  {
    while ( 1 )
    {
      v6 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (_QWORD *)this + 11,
                            v5);
      v7 = CVolumeUnit::SetVolumeLimitScalar(v6, a2);
      v4 = v7;
      if ( v7 < 0 )
        break;
      if ( ++v5 >= *((_DWORD *)this + 31) )
        goto LABEL_6;
    }
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetVolumeLimitScalar", 871, v7);
  }
LABEL_6:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
