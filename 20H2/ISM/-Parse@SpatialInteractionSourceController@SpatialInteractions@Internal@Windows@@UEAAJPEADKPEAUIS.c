/*
 * XREFs of ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x18016D590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800C94FC (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 *     ??$ButtonsStateChanged@AEAKAEAKAEAI@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0AEAI@Z @ 0x180168018 (--$ButtonsStateChanged@AEAKAEAKAEAI@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0A.c)
 *     ??$ResetReportDueToFirmwareUpdate@AEAKAEAK@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0@Z @ 0x1801685D8 (--$ResetReportDueToFirmwareUpdate@AEAKAEAK@SpatialInteractionTrace@SpatialInteractionDevices@@SA.c)
 *     ??$TimestampClampedDueToLatency@AEAKAEAKAEB_JAEB_J@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0AEB_J1@Z @ 0x180168730 (--$TimestampClampedDueToLatency@AEAKAEAKAEB_JAEB_J@SpatialInteractionTrace@SpatialInteractionDev.c)
 *     _anonymous_namespace_::UpdateIfChanged_float_ @ 0x18016879C (_anonymous_namespace_--UpdateIfChanged_float_.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___ @ 0x180168E4C (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_180168E4C.c)
 *     ?CheckForDeviceInformationUpdate@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N@Z @ 0x18016AB24 (-CheckForDeviceInformationUpdate@SpatialInteractionSourceController@SpatialInteractions@Internal.c)
 *     ?OnParse@SpatialInteractionHeartbeat@SpatialInteractionDevices@@QEAAXI@Z @ 0x18016D234 (-OnParse@SpatialInteractionHeartbeat@SpatialInteractionDevices@@QEAAXI@Z.c)
 *     ?TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2@Z @ 0x18016F82C (-TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_J.c)
 *     ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x18016FE10 (-UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::Parse(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        char *a2,
        int a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        __int64 a5,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a6,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a7,
        bool *a8,
        enum MPCAugmentedInputGestureType *a9,
        bool *a10,
        bool *a11)
{
  bool *v11; // r15
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v12; // r14
  bool *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  char v19; // al
  char v20; // si
  __int64 v21; // rax
  __int64 v22; // r14
  struct SpatialInteractionDevices::InputReport *v23; // r9
  int v24; // edi
  float v25; // xmm6_4
  int v26; // eax
  unsigned int v27; // edi
  float v28; // xmm0_4
  bool v29; // cl
  int v30; // eax
  unsigned int v31; // eax
  float v32; // xmm0_4
  int *v33; // rsi
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  char v37; // dl
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  _BYTE *v43; // r8
  _BYTE *v44; // r8
  _BYTE *v45; // r8
  const struct Windows::Foundation::Numerics::Matrix4x4 *v46; // r12
  const struct Windows::Foundation::Numerics::Matrix4x4 *v47; // r13
  __int128 v48; // xmm1
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v49; // r9
  float v50; // xmm2_4
  float v51; // xmm3_4
  float v52; // xmm1_4
  int v53; // esi
  bool v54; // r10
  bool v55; // r9
  int v56; // edi
  bool v57; // zf
  float v58; // xmm1_4
  float v59; // xmm0_4
  SpatialInteractionDevices::SpatialInteractionHeartbeat *v60; // rcx
  _OWORD v61[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v62; // [rsp+58h] [rbp-B0h]
  int v63; // [rsp+5Ch] [rbp-ACh]
  int v64; // [rsp+60h] [rbp-A8h]
  float v65; // [rsp+64h] [rbp-A4h]
  int v66; // [rsp+68h] [rbp-A0h]
  int v67; // [rsp+6Ch] [rbp-9Ch]
  float v68; // [rsp+70h] [rbp-98h]
  int v69; // [rsp+74h] [rbp-94h]
  char v70; // [rsp+78h] [rbp-90h]
  float v71; // [rsp+7Ch] [rbp-8Ch]
  char v72; // [rsp+80h] [rbp-88h]
  float v73; // [rsp+84h] [rbp-84h]
  float v74; // [rsp+88h] [rbp-80h]
  float v75; // [rsp+8Ch] [rbp-7Ch]
  float v76; // [rsp+90h] [rbp-78h]
  char v77; // [rsp+94h] [rbp-74h]
  int v78; // [rsp+98h] [rbp-70h]
  char v79; // [rsp+9Ch] [rbp-6Ch]
  LARGE_INTEGER PerformanceCount; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v81; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-50h] BYREF
  LARGE_INTEGER v83; // [rsp+C0h] [rbp-48h] BYREF
  LARGE_INTEGER v84; // [rsp+C8h] [rbp-40h] BYREF
  int v85; // [rsp+D0h] [rbp-38h] BYREF
  char *v86; // [rsp+D8h] [rbp-30h]
  _QWORD v87[7]; // [rsp+E0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]
  LARGE_INTEGER v89; // [rsp+158h] [rbp+50h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v90; // [rsp+170h] [rbp+68h]

  v90 = a4;
  v11 = a10;
  v12 = a4;
  v15 = a11;
  *a10 = 0;
  *v15 = 0;
  *a8 = 0;
  *(_DWORD *)a9 = 0;
  if ( !*((_BYTE *)this + 106) )
  {
    v16 = -2147020579;
    v17 = 514LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)v16);
    return v16;
  }
  LODWORD(a10) = 0;
  v19 = *((_BYTE *)this + 1184);
  *((_BYTE *)this + 1184) = 0;
  if ( v19 )
  {
    v20 = 1;
  }
  else
  {
    v20 = 0;
    if ( !a2 )
    {
      v46 = a7;
      v47 = a6;
      goto LABEL_65;
    }
  }
  if ( a2 && a3 != *((unsigned __int16 *)this + 94) )
  {
    v16 = -2147024809;
    v17 = 522LL;
    goto LABEL_3;
  }
  QueryPerformanceCounter(&PerformanceCount);
  v21 = *((_QWORD *)this + 86);
  v22 = *((_QWORD *)this + 122);
  v82 = v22;
  v81 = PerformanceCount.QuadPart - v21;
  if ( v22 >= PerformanceCount.QuadPart - v21 )
  {
    *((_QWORD *)this + 122) = v22 + 1;
    SpatialInteractionDevices::SpatialInteractionTrace::TimestampClampedDueToLatency<unsigned long &,unsigned long &,__int64 const &,__int64 const &>(
      (unsigned int *)this + 2,
      (unsigned int *)this + 3,
      &v82,
      &v81);
  }
  else
  {
    *((_QWORD *)this + 122) = PerformanceCount.QuadPart - v21;
  }
  *v11 = v22 == 0;
  memset_0(v61, 0, 0x68uLL);
  if ( v20 )
  {
    v57 = *((_BYTE *)this + 440) == 0;
    v24 = *((_DWORD *)this + 241);
    v63 = v24;
    if ( v57 )
    {
      v25 = v71;
    }
    else
    {
      v25 = 0.0;
      v72 = 1;
      v71 = 0.0;
    }
    if ( (v24 & 0x20) != 0 )
    {
      v70 = 1;
      v68 = 0.5;
      *(float *)&v69 = 0.5;
    }
    if ( (v24 & 4) != 0 )
    {
      LOBYTE(v67) = 1;
      v65 = 0.5;
      *(float *)&v66 = 0.5;
    }
    SpatialInteractionDevices::SpatialInteractionTrace::ResetReportDueToFirmwareUpdate<unsigned long &,unsigned long &>(
      (unsigned int *)this + 2,
      (unsigned int *)this + 3);
  }
  else
  {
    v85 = *((unsigned __int16 *)this + 94);
    v86 = a2;
    v26 = SpatialInteractionDevices::ParseInputReport(
            (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 120),
            (struct SpatialInteractionDevices::HID_HANDLE *)&v85,
            (struct SpatialInteractionDevices::HID_REPORT *)v61,
            v23);
    v27 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23D,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v26);
      return v27;
    }
    v25 = v71;
    v24 = v63;
  }
  if ( !*((_BYTE *)this + 440) )
  {
    if ( (v24 & 8) != 0 )
    {
      v57 = (v64 & 8) == 0;
      *((_BYTE *)this + 1011) = 1;
      if ( v57 )
        v32 = 0.0;
      else
        v32 = FLOAT_1_0;
      *((float *)this + 250) = v32;
    }
    goto LABEL_46;
  }
  v62 |= 8u;
  if ( !v72 )
  {
    v24 &= ~8u;
    v63 = v24;
    goto LABEL_46;
  }
  v24 |= 8u;
  *((float *)this + 250) = v25;
  *((_BYTE *)this + 1011) = 1;
  v63 = v24;
  LODWORD(v28) = COERCE_UNSIGNED_INT(v25 - 1.0) & _xmm;
  if ( v28 > 0.001 )
    v64 &= ~8u;
  else
    v64 |= 8u;
  v29 = COERCE_FLOAT(LODWORD(v25) & _xmm) > 0.001 && v28 > 0.001;
  v30 = *((_DWORD *)this + 243);
  if ( (v30 & 8) == 0 )
  {
    if ( !v29 )
      goto LABEL_46;
    v31 = v30 | 8;
    goto LABEL_37;
  }
  if ( !v29 )
  {
    v31 = v30 & 0xFFFFFFF7;
LABEL_37:
    *((_DWORD *)this + 243) = v31;
    *v11 = 1;
  }
LABEL_46:
  v33 = (int *)((char *)this + 968);
  LODWORD(a10) = v24;
  v34 = v24 & v64 | *((_DWORD *)this + 242) & ~v24;
  v35 = v62 | *((_DWORD *)this + 241);
  if ( *((_DWORD *)this + 241) != v35 )
  {
    *((_DWORD *)this + 241) = v35;
    *v11 = 1;
  }
  v36 = *v33;
  v37 = 0;
  if ( *v33 != v34 )
  {
    *v33 = v34;
    v37 = 1;
    LOBYTE(v36) = v34;
  }
  if ( v37 )
  {
    *v11 = 1;
    SpatialInteractionDevices::SpatialInteractionTrace::ButtonsStateChanged<unsigned long &,unsigned long &,unsigned int &>(
      (unsigned int *)this + 2,
      (unsigned int *)this + 3,
      (unsigned int *)this + 242);
    v36 = *v33;
  }
  if ( (v36 & 0x44) != 0 )
  {
    if ( (_BYTE)v67 )
    {
      v38 = *(float *)&v66;
      v39 = v65 * 2.0;
      *((_BYTE *)this + 1010) = 1;
      *((float *)this + 246) = v39 - 1.0;
      *((float *)this + 247) = (float)(v38 * 2.0) - 1.0;
    }
  }
  else
  {
    *((_BYTE *)this + 1010) = 0;
  }
  if ( v70 )
  {
    v40 = *(float *)&v69;
    v41 = v68 * 2.0;
    *((_BYTE *)this + 1012) = 1;
    *((float *)this + 248) = v41 - 1.0;
    *((float *)this + 249) = (float)(v40 * 2.0) - 1.0;
  }
  if ( v77 )
  {
    v42 = v73;
    *((_BYTE *)this + 1144) = 1;
    anonymous_namespace_::UpdateIfChanged_float_((float *)this + 282, v42, v11);
    anonymous_namespace_::UpdateIfChanged_float_((float *)this + 283, v74, v43);
    anonymous_namespace_::UpdateIfChanged_float_((float *)this + 284, v75, v44);
    anonymous_namespace_::UpdateIfChanged_float_((float *)this + 285, v76, v45);
  }
  if ( v79 )
  {
    *((_DWORD *)this + 254) = v78;
    *((_BYTE *)this + 1020) = 1;
  }
  v46 = a7;
  v47 = a6;
  v12 = v90;
  if ( *((_BYTE *)this + 456) )
  {
    v48 = v61[1];
    v49 = v90;
    *(_OWORD *)((char *)this + 460) = v61[0];
    *(_OWORD *)((char *)this + 476) = v48;
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateSimulatedPose(
      this,
      0LL,
      (const struct SpatialInteractionDevices::PoseData *)v61,
      v49,
      v47,
      v46);
    *v11 = 1;
  }
LABEL_65:
  v50 = *((float *)this + 112);
  v51 = *((float *)this + 113);
  v52 = *((float *)this + 250);
  v53 = *((_DWORD *)this + 106);
  v54 = v52 >= (float)(v50 + v51) || v50 == 0.0 && v52 > 0.0;
  v55 = (float)(v50 - v51) >= v52 || v50 == 1.0 && v52 < 1.0;
  *((_BYTE *)this + 441) = v52 == 1.0;
  v56 = 2;
  if ( v53 )
  {
    if ( v53 != 1 )
    {
      if ( v53 == 2 )
      {
        v57 = !v55;
LABEL_81:
        if ( v57 )
          goto LABEL_93;
        goto LABEL_82;
      }
      if ( v53 != 3 )
        goto LABEL_93;
      if ( v52 != 1.0 )
      {
        v57 = v52 != 0.0;
        goto LABEL_81;
      }
      goto LABEL_90;
    }
    if ( v55 || v52 == 0.0 )
    {
LABEL_82:
      *((_DWORD *)this + 106) = 0;
      goto LABEL_93;
    }
    if ( v52 != 1.0 )
    {
      QueryPerformanceCounter(&v83);
      if ( v83.QuadPart - *((_QWORD *)this + 54) > (unsigned int)(int)(*((float *)this + 111)
                                                                     * (double)(int)qword_1802082F8) )
        *((_DWORD *)this + 106) = 3;
      goto LABEL_93;
    }
LABEL_90:
    *((_DWORD *)this + 106) = 2;
    goto LABEL_93;
  }
  if ( v52 == 1.0 )
    goto LABEL_90;
  if ( v54 )
  {
    *((_DWORD *)this + 106) = 1;
    QueryPerformanceCounter(&v84);
    *((LARGE_INTEGER *)this + 54) = v84;
  }
LABEL_93:
  if ( (unsigned int)(v53 - 1) <= 1 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 106) - 1) <= 1 )
    {
      v59 = *((float *)this + 250);
      v56 = 3;
      if ( v59 > *((float *)this + 112) )
        *((float *)this + 112) = v59;
      goto LABEL_102;
    }
    v56 = 4;
  }
  else if ( (unsigned int)(*((_DWORD *)this + 106) - 1) > 1 )
  {
    v58 = *((float *)this + 250);
    v56 = 6;
    if ( *((float *)this + 112) > v58 )
      *((float *)this + 112) = v58;
    goto LABEL_102;
  }
  *v11 = 1;
  *((_DWORD *)this + 112) = *((_DWORD *)this + 250);
LABEL_102:
  if ( *((_BYTE *)this + 456) )
  {
    v89.QuadPart = 0LL;
    QueryPerformanceCounter(&v89);
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateSimulatedPose(
      this,
      v89.QuadPart,
      (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 460),
      v12,
      v47,
      v46);
  }
  else if ( v12 )
  {
    *v11 |= Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::TryUpdatePose(
              this,
              a5,
              v12,
              v47,
              v46);
  }
  *a8 = *((_BYTE *)this + 441);
  *(_DWORD *)a9 = v56;
  v60 = (SpatialInteractionDevices::SpatialInteractionHeartbeat *)*((_QWORD *)this + 62);
  if ( v60 )
    SpatialInteractionDevices::SpatialInteractionHeartbeat::OnParse(v60, *((_DWORD *)this + 242));
  v87[0] = this;
  v87[1] = &a10;
  Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___(
    (__int64)this + 8,
    (__int64)v87);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CheckForDeviceInformationUpdate(this, a11);
  return 0LL;
}
