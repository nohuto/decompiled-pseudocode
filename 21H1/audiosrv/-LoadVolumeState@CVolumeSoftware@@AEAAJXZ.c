/*
 * XREFs of ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800C0B5C
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800BFF50 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005D074 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18005D304 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18005DB40 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18005DC2C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800BE2B0 (WPP_SF_qS.c)
 *     WPP_SF_qdg @ 0x1800C3014 (WPP_SF_qdg.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeSoftware::LoadVolumeState(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  float *v8; // r15
  unsigned int v9; // esi
  float v10; // xmm6_4
  unsigned __int16 i; // cx
  __int64 j; // rbx
  float v13; // xmm7_4
  __int64 v14; // rdx
  float v15; // xmm3_4
  ATL::CAtlException *v17; // rbx
  __int64 v18; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-D0h]
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-C0h] BYREF
  float *v22; // [rsp+58h] [rbp-B0h]
  float *v23; // [rsp+60h] [rbp-A8h]
  ATL::CAtlException *v24; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v25[104]; // [rsp+70h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  float v28; // [rsp+118h] [rbp+10h]
  int v29; // [rsp+120h] [rbp+18h]
  int v30; // [rsp+128h] [rbp+20h]

  v1 = this;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Eu,
      (__int64)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
      this,
      *((_QWORD *)this + 8));
  }
  v20 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)v1 + 8),
         &v20);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BE,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_42;
  }
  v18 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, 0LL, &v18);
  v3 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C1,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v4);
LABEL_9:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    goto LABEL_42;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, (__int64)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids, v1);
  }
  *(_OWORD *)pvar = 0LL;
  v22 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(
         v18,
         &PKEY_APO_MasterVolumeLevel,
         pvar);
  v3 = v5;
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 1739LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v6);
    PropVariantClear(pvar);
    goto LABEL_9;
  }
  if ( LOWORD(pvar[0]) == 65 && LODWORD(pvar[1]) >= 4 )
  {
    v8 = v22;
    v23 = v22;
    v9 = LODWORD(pvar[1]) >> 2;
    v19 = LODWORD(pvar[1]) >> 2;
    v10 = *v22;
    v28 = *v22;
    if ( LODWORD(pvar[1]) >> 2 != *((_DWORD *)v1 + 31) )
    {
      for ( i = 1; i < v9; ++i )
      {
        v10 = fmaxf(v22[i], v10);
        v28 = v10;
      }
    }
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      v29 = j;
      if ( (unsigned int)j >= *((_DWORD *)v1 + 31) )
        break;
      if ( v9 == *((_DWORD *)v1 + 31) )
        v13 = v8[j];
      else
        v13 = v10;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          48LL,
          &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
          v1,
          j,
          v13);
      }
      CVolumeUnit::CVolumeUnit((CVolumeUnit *)v25);
      if ( *((_DWORD *)v1 + 74) == 4 )
        v15 = FLOAT_30_0;
      else
        v15 = 0.0;
      CVolumeUnit::SetDBRange((__int64)v25, v14, -96.0, v15, SLODWORD(FLOAT_1_5), *(__int64 *)&DOUBLE_1_75);
      CVolumeUnit::SetDB((CVolumeUnit *)v25, v13);
      try
      {
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
          (_QWORD *)v1 + 11,
          (unsigned int)j,
          (__int64)v25);
      }
      catch ( ATL::CAtlException *v24 )
      {
        v17 = v24;
        if ( *(_DWORD *)v24 == -1073741571 )
          _o__resetstkoflw();
        v30 = *(_DWORD *)v17;
        v3 = *(_DWORD *)v17;
        if ( v30 < 0 )
        {
          v6 = (unsigned int)v30;
          v7 = 1778LL;
          goto LABEL_16;
        }
        v1 = this;
        v8 = v23;
        v9 = v19;
        v10 = v28;
        LODWORD(j) = v29;
      }
    }
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    v3 = 0;
  }
  else
  {
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    v3 = -2147023728;
  }
LABEL_42:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  return v3;
}
