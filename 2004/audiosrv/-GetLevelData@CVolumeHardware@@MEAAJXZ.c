/*
 * XREFs of ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005D174 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18005D404 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18005D598 (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005DA6C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18005DA90 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x18005DBA8 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18005DC40 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18005DD2C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800BE428 (WPP_SF_qd.c)
 *     WPP_SF_qdg @ 0x1800C3104 (WPP_SF_qdg.c)
 *     WPP_SF_qdggg @ 0x1800C31D0 (WPP_SF_qdggg.c)
 *     WPP_SF_qgg @ 0x1800C3320 (WPP_SF_qgg.c)
 */

__int64 __fastcall CVolumeHardware::GetLevelData(CVolumeHardware *this)
{
  int v2; // edi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  float v6; // xmm8_4
  float v7; // xmm9_4
  float i; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  float v11; // xmm7_4
  float v12; // xmm6_4
  unsigned int j; // esi
  CVolumeUnit *v14; // rax
  int v16; // [rsp+20h] [rbp-F8h]
  float v17[6]; // [rsp+40h] [rbp-D8h] BYREF
  char *v18; // [rsp+58h] [rbp-C0h]
  _BYTE v19[128]; // [rsp+70h] [rbp-A8h] BYREF
  float v20; // [rsp+128h] [rbp+10h] BYREF
  float v21; // [rsp+130h] [rbp+18h] BYREF
  float v22; // [rsp+138h] [rbp+20h] BYREF

  v2 = -2147467259;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids, this);
  }
  if ( !*((_QWORD *)this + 32) )
    goto LABEL_25;
  v3 = *((_DWORD *)this + 71);
  *((_DWORD *)this + 31) = v3;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v16 = v3;
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids, this, v16);
  }
  v18 = (char *)this + 88;
  ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((char *)this + 88, 0LL);
  if ( !*((_QWORD *)this + 32) )
  {
LABEL_25:
    v2 = -2147418113;
LABEL_26:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::GetLevelData", 0x4DAu, v2);
    return (unsigned int)v2;
  }
  v6 = FLOAT_1000_0;
  v7 = FLOAT_N1000_0;
  for ( i = 0.0; ; ++LODWORD(i) )
  {
    v17[1] = i;
    if ( LODWORD(i) >= *((_DWORD *)this + 31) )
      break;
    CVolumeUnit::CVolumeUnit((CVolumeUnit *)v19);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(**((_QWORD **)this + 32) + 32LL))(
           *((_QWORD *)this + 32),
           0LL,
           &v22,
           &v21,
           &v20);
    if ( v2 < 0 )
      goto LABEL_26;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, this, LODWORD(i), v22, v21, v20);
    }
    v11 = v21;
    v12 = v22;
    CVolumeUnit::SetDBRange(v19);
    v6 = fminf(v12, v6);
    v17[3] = v6;
    v7 = fmaxf(v11, v7);
    v17[4] = v7;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 32) + 40LL))(
           *((_QWORD *)this + 32),
           LODWORD(i),
           v17);
    if ( v2 < 0 )
      goto LABEL_26;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        31LL,
        &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
        this,
        LODWORD(i),
        v17[0]);
    }
    CVolumeUnit::SetDB((CVolumeUnit *)v19, v17[0]);
    v2 = 0;
    ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)this + 88, LODWORD(i), v19);
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qgg(*((_QWORD *)WPP_GLOBAL_Control + 2), v4, v5, this, v6, v7);
  }
  for ( j = 0; j < *((_DWORD *)this + 31); ++j )
  {
    v14 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((char *)this + 88, j);
    CVolumeUnit::SetTaperOverallRange(v14, v6, v7);
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(this);
  if ( v2 < 0 )
    goto LABEL_26;
  return (unsigned int)v2;
}
