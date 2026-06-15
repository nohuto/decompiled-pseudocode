/*
 * XREFs of ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C1E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18005D148 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005D174 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005DA6C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18005DA90 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18005DC90 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  CVolumeUnit *v11; // rax
  CVolumeUnit *v12; // rax
  int v13; // eax
  int v14; // eax
  CVolumeUnit *v15; // rax
  CVolumeUnit *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  float DB; // [rsp+60h] [rbp+18h]

  if ( a3 < 0.0 || a3 > 1.0 )
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    return v8;
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( a2 < *((_DWORD *)this + 31) )
  {
    v11 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 11,
                           a2);
    DB = CVolumeUnit::GetDB(v11);
    v12 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 11,
                           a2);
    v13 = CVolumeUnit::SetWiper(v12, a3);
    v8 = v13;
    if ( v13 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 208LL))(this, a2);
      v8 = v14;
      if ( v14 >= 0 )
      {
        CVolumeControlBase::RecalcMasterFromChannelLevels(this);
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
          *((_QWORD *)this + 17),
          0LL,
          a4);
        if ( a5 )
        {
          v16 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (_QWORD *)this + 11,
                                 a2);
          *a5 = DB == CVolumeUnit::GetDB(v16);
        }
        v8 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x306,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
          (const char *)(unsigned int)v14);
        v15 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                               (_QWORD *)this + 11,
                               a2);
        CVolumeUnit::SetDB(v15, DB);
      }
      goto LABEL_13;
    }
    v10 = (unsigned int)v13;
    v9 = 768LL;
  }
  else
  {
    v8 = -2147024809;
    v9 = 763LL;
    v10 = 2147942487LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)v10);
LABEL_13:
  if ( v7 )
    LeaveCriticalSection(v7);
  return v8;
}
