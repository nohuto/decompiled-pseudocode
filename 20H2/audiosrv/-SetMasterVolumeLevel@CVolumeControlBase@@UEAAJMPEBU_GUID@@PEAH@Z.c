/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C1390
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18004591C (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18005C9A8 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005C9D4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005D2CC (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qg_guid_ @ 0x1800C2624 (WPP_SF_qg_guid_.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevel(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 v8; // rax
  float v9; // xmm10_4
  float v10; // xmm8_4
  int v11; // xmm11_4
  CVolumeUnit *v12; // rax
  int v13; // r8d
  float DB; // xmm9_4
  int v15; // r14d
  CVolumeUnit *v16; // rax
  float v17; // xmm6_4
  CVolumeUnit *v18; // rax
  float v19; // xmm6_4
  __int64 v20; // rax
  CVolumeUnit *v21; // rax
  CVolumeUnit *v22; // rax
  unsigned int v23; // esi
  float i; // xmm8_4
  CVolumeUnit *v25; // rax
  float v26; // xmm0_4
  CVolumeUnit *v27; // rax
  int v28; // eax
  unsigned int v29; // ebx
  __int64 v30; // r9
  __int64 v31; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v8 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
         (_QWORD *)this + 11,
         *((unsigned int *)this + 30));
  v9 = *(float *)(v8 + 8);
  v10 = *(float *)(v8 + 12);
  v11 = *(_DWORD *)(v8 + 16);
  if ( v9 > a2 || a2 > v10 )
  {
    v31 = 544LL;
    goto LABEL_24;
  }
  v12 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  DB = CVolumeUnit::GetDB(v12);
  v15 = 1;
  if ( DB == a2 )
    goto LABEL_17;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22, v13, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
  }
  v16 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  v17 = CVolumeUnit::GetDB(v16);
  AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 144));
  *((float *)this + 54) = v17;
  *((float *)this + 55) = v9;
  *((float *)this + 56) = v10;
  *((_DWORD *)this + 57) = v11;
  v18 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  v19 = CVolumeUnit::GetDB(v18);
  v20 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
          (_QWORD *)this + 11,
          *((unsigned int *)this + 30));
  if ( *(float *)(v20 + 8) > a2 || a2 > *(float *)(v20 + 12) )
  {
    v31 = 561LL;
LABEL_24:
    v29 = -2147024809;
    v30 = 2147942487LL;
    goto LABEL_25;
  }
  v21 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  CVolumeUnit::SetDB(v21, a2);
  v22 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  v23 = 0;
  for ( i = CVolumeUnit::GetDB(v22) - v19; v23 < *((_DWORD *)this + 31); ++v23 )
  {
    if ( v23 != *((_DWORD *)this + 30) )
    {
      v25 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 11,
                             v23);
      v26 = CVolumeUnit::GetDB(v25);
      v27 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 11,
                             v23);
      CVolumeUnit::SetDB(v27, v26 + i);
    }
  }
  v28 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
  v29 = v28;
  if ( v28 < 0 )
  {
    v30 = (unsigned int)v28;
    v31 = 578LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v30);
    goto LABEL_26;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
    *((_QWORD *)this + 17),
    0LL,
    a3);
LABEL_17:
  if ( a4 )
  {
    if ( DB != a2 )
      v15 = 0;
    *a4 = v15;
  }
  v29 = 0;
LABEL_26:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v29;
}
