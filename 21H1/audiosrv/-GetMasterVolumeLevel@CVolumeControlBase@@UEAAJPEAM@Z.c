/*
 * XREFs of ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18005CFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18005D048 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005D96C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qdg @ 0x1800C3014 (WPP_SF_qdg.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevel(CVolumeControlBase *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // ebx
  CVolumeUnit *v6; // rax
  float DB; // xmm0_4

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v5 = -2147467261;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( a2 )
  {
    v6 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                          (char *)this + 88,
                          *((unsigned int *)this + 30));
    DB = CVolumeUnit::GetDB(v6);
    *a2 = DB;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20LL,
        &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
        this,
        *((_DWORD *)this + 30),
        DB);
    }
    v5 = 0;
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetMasterVolumeLevel", 0x19Eu, -2147467261);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
