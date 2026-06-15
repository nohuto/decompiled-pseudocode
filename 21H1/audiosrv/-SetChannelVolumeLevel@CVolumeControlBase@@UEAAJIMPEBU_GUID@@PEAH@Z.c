/*
 * XREFs of ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C1BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18005D048 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005D074 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005D96C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18005D990 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevel(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  __int64 v8; // rdx
  CVolumeUnit *v9; // rax
  __int64 v10; // rax
  CVolumeUnit *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  CVolumeUnit *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  float DB; // [rsp+50h] [rbp+8h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( a2 >= *((_DWORD *)this + 31) )
  {
    v8 = 615LL;
LABEL_11:
    v13 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    goto LABEL_12;
  }
  v9 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 11, a2);
  DB = CVolumeUnit::GetDB(v9);
  v10 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 11, a2);
  if ( *(float *)(v10 + 8) > a3 || a3 > *(float *)(v10 + 12) )
  {
    v8 = 620LL;
    goto LABEL_11;
  }
  v11 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 11, a2);
  CVolumeUnit::SetDB(v11, a3);
  v12 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 208LL))(this, a2);
  v13 = v12;
  if ( v12 >= 0 )
  {
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
      *((_QWORD *)this + 17),
      0LL,
      a4);
    if ( a5 )
      *a5 = DB == a3;
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x278,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v12);
    v14 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 11,
                           a2);
    CVolumeUnit::SetDB(v14, DB);
  }
LABEL_12:
  if ( v5 )
    LeaveCriticalSection(v5);
  return v13;
}
