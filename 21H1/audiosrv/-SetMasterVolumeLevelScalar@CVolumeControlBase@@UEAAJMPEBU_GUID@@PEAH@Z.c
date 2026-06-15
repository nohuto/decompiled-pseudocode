/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C21F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x1800460EC (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180054BA0 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18005D048 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005D074 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005D96C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18005DB90 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdg @ 0x1800C3014 (WPP_SF_qdg.c)
 *     WPP_SF_qdgg @ 0x1800C3074 (WPP_SF_qdgg.c)
 *     WPP_SF_qg_guid_ @ 0x1800C31C4 (WPP_SF_qg_guid_.c)
 *     WPP_SF_qggg @ 0x1800C3298 (WPP_SF_qggg.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevelScalar(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r12
  CVolumeUnit *v8; // rax
  int v9; // r8d
  float Wiper; // xmm12_4
  int v11; // r14d
  CVolumeUnit *v12; // rax
  float DB; // xmm11_4
  CVolumeUnit *v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  _DWORD *v18; // rax
  int v19; // xmm9_4
  int v20; // xmm8_4
  int v21; // xmm7_4
  CVolumeUnit *v22; // rax
  float v23; // xmm0_4
  CVolumeUnit *v24; // rax
  float v25; // xmm8_4
  CVolumeUnit *v26; // rax
  double v27; // xmm2_8
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // ebx
  CVolumeUnit *v31; // rax
  float v32; // xmm7_4
  CVolumeUnit *v33; // rax
  double v34; // xmm2_8
  CVolumeUnit *v35; // rax
  __int64 v36; // rax
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  if ( a2 < 0.0 || a2 > 1.0 )
  {
    v16 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A0,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    return v16;
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v8 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                        (_QWORD *)this + 11,
                        *((unsigned int *)this + 30));
  Wiper = CVolumeUnit::GetWiper(v8);
  v11 = 1;
  if ( a2 == Wiper )
    goto LABEL_35;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23, v9, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
  }
  v12 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  DB = CVolumeUnit::GetDB(v12);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      24LL,
      &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
      this,
      *((_DWORD *)this + 30),
      a2);
  }
  v14 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  v15 = CVolumeUnit::SetWiper(v14, a2);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v18 = (_DWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                      (_QWORD *)this + 11,
                      *((unsigned int *)this + 30));
    v19 = v18[4];
    v20 = v18[3];
    v21 = v18[2];
    v22 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 11,
                           *((unsigned int *)this + 30));
    v23 = CVolumeUnit::GetDB(v22);
    AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 144));
    *((float *)this + 54) = v23;
    *((_DWORD *)this + 55) = v21;
    *((_DWORD *)this + 56) = v20;
    *((_DWORD *)this + 57) = v19;
    v24 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 11,
                           *((unsigned int *)this + 30));
    v25 = CVolumeUnit::GetDB(v24) - DB;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v26 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 11,
                             *((unsigned int *)this + 30));
      v27 = CVolumeUnit::GetDB(v26);
      WPP_SF_qggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v28, v29, this, v25, *(_QWORD *)&v27, DB);
    }
    v30 = 0;
    if ( *((_DWORD *)this + 31) )
    {
      do
      {
        if ( v30 != *((_DWORD *)this + 30) )
        {
          v31 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (_QWORD *)this + 11,
                                 v30);
          v32 = CVolumeUnit::GetDB(v31) + v25;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v33 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                   (_QWORD *)this + 11,
                                   v30);
            v34 = CVolumeUnit::GetDB(v33);
            WPP_SF_qdgg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              26LL,
              &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
              this,
              v30,
              *(_QWORD *)&v34,
              v32);
          }
          v35 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (_QWORD *)this + 11,
                                 v30);
          CVolumeUnit::SetDB(v35, v32);
        }
        ++v30;
      }
      while ( v30 < *((_DWORD *)this + 31) );
      v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    }
    v15 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 720LL;
      goto LABEL_29;
    }
    if ( !a3 )
      goto LABEL_34;
    v36 = 0x4E8B67CC68F64C3DLL - *(_QWORD *)&a3->Data1;
    if ( *(_QWORD *)&a3->Data1 == 0x4E8B67CC68F64C3DLL )
      v36 = 0x6147AA4EA63F7FA1LL - *(_QWORD *)a3->Data4;
    if ( v36 )
LABEL_34:
      (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
        *((_QWORD *)this + 17),
        0LL,
        a3);
LABEL_35:
    if ( a4 )
    {
      if ( Wiper != a2 )
        v11 = 0;
      *a4 = v11;
    }
    v16 = 0;
    goto LABEL_40;
  }
  v17 = 691LL;
LABEL_29:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)(unsigned int)v15);
LABEL_40:
  if ( v7 )
    LeaveCriticalSection(v7);
  return v16;
}
