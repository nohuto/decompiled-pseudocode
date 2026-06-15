/*
 * XREFs of ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x1800C1C10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18005C9A8 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005D2CC (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x1800C23DC (WPP_SF_dg.c)
 */

__int64 __fastcall CVolumeHardware::UpdateChannelVolumeLevel(CVolumeHardware *this, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  CVolumeUnit *v4; // rax
  float DB; // xmm0_4
  __int64 *v6; // rsi
  __int64 v7; // rdi
  CVolumeUnit *v8; // rax
  __int64 v9; // r8

  v2 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                          (_QWORD *)this + 11,
                          a2);
    DB = CVolumeUnit::GetDB(v4);
    WPP_SF_dg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      39LL,
      &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
      (unsigned int)v2,
      DB);
  }
  v6 = (__int64 *)*((_QWORD *)this + 32);
  v7 = *v6;
  v8 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 11, v2);
  CVolumeUnit::GetDB(v8);
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, char *))(v7 + 48))(
           v6,
           (unsigned int)v2,
           v9,
           (char *)this + 264);
}
