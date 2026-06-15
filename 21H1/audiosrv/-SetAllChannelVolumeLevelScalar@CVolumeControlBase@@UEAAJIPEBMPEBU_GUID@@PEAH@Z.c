/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800C1A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180054BA0 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005D96C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18005D990 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18005DB90 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeControlBase::SetAllChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4,
        int *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  const struct _GUID *v7; // r13
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // ebp
  unsigned int v14; // esi
  float v15; // xmm6_4
  CVolumeUnit *v16; // rax
  CVolumeUnit *v17; // rax
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v7 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( a2 >= *((_DWORD *)this + 31) )
  {
    v10 = -2147024809;
    v11 = 816LL;
    v12 = 2147942487LL;
    goto LABEL_12;
  }
  v13 = 0;
  v14 = 0;
  if ( !a2 )
  {
LABEL_9:
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
    v18 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
    v10 = v18;
    if ( v18 < 0 )
    {
      v11 = 843LL;
      goto LABEL_11;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
      *((_QWORD *)this + 17),
      0LL,
      v7);
    if ( a5 )
      *a5 = v13 == 0;
    v10 = 0;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v15 = *a3;
    v16 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 11,
                           v14);
    if ( CVolumeUnit::GetWiper(v16) != v15 )
      break;
LABEL_7:
    ++v14;
    ++a3;
    if ( v14 >= a2 )
    {
      v7 = a4;
      goto LABEL_9;
    }
  }
  v17 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         v14);
  v18 = CVolumeUnit::SetWiper(v17, v15);
  v10 = v18;
  if ( v18 >= 0 )
  {
    ++v13;
    goto LABEL_7;
  }
  v11 = 827LL;
LABEL_11:
  v12 = (unsigned int)v18;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)v12);
LABEL_17:
  if ( v5 )
    LeaveCriticalSection(v5);
  return v10;
}
