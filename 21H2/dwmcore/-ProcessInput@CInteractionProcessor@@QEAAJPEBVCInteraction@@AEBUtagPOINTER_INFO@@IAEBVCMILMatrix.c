/*
 * XREFs of ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18022E384
 * Callers:
 *     ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1801C69A0 (-ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1802352E0 (-ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18004EC24 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18008DD1C (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800D6404 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152D40 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x18022B5D8 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18022D46C (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x18022E2B4 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x18022F2F0 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessInput(
        CInteractionProcessor *this,
        const struct CInteraction *a2,
        const struct tagPOINTER_INFO *a3,
        int a4,
        const struct CMILMatrix *a5,
        struct IManipulationResource *a6,
        bool *a7)
{
  __int64 v10; // rax
  unsigned int started; // esi
  __int64 v12; // rdx
  __int64 v13; // r10
  void *v14; // r11
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v20; // r8
  __int64 v21; // rcx
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int v26; // eax
  __int64 v29; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v30; // [rsp+38h] [rbp-99h] BYREF
  __int64 v31; // [rsp+40h] [rbp-91h] BYREF
  __int64 v32; // [rsp+48h] [rbp-89h] BYREF
  CInteractionProcessor *v33; // [rsp+50h] [rbp-81h] BYREF
  const struct CInteraction *v34; // [rsp+58h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+60h] [rbp-71h] BYREF
  const struct CInteraction **v36; // [rsp+80h] [rbp-51h]
  int v37; // [rsp+88h] [rbp-49h]
  int v38; // [rsp+8Ch] [rbp-45h]
  CInteractionProcessor **v39; // [rsp+90h] [rbp-41h]
  int v40; // [rsp+98h] [rbp-39h]
  int v41; // [rsp+9Ch] [rbp-35h]
  __int64 *v42; // [rsp+A0h] [rbp-31h]
  int v43; // [rsp+A8h] [rbp-29h]
  int v44; // [rsp+ACh] [rbp-25h]
  __int64 *v45; // [rsp+B0h] [rbp-21h]
  int v46; // [rsp+B8h] [rbp-19h]
  int v47; // [rsp+BCh] [rbp-15h]
  __int64 *v48; // [rsp+C0h] [rbp-11h]
  int v49; // [rsp+C8h] [rbp-9h]
  int v50; // [rsp+CCh] [rbp-5h]
  __int64 *v51; // [rsp+D0h] [rbp-1h]
  int v52; // [rsp+D8h] [rbp+7h]
  int v53; // [rsp+DCh] [rbp+Bh]

  if ( (unsigned int)dword_180344EF0 > 4 && (qword_180344F00 & 2) != 0 && (qword_180344F08 & 2) == qword_180344F08 )
  {
    v10 = *((_QWORD *)this + 60);
    v53 = 0;
    v50 = 0;
    v47 = 0;
    v44 = 0;
    v41 = 0;
    v38 = 0;
    v29 = v10;
    v30 = *((_QWORD *)this + 40);
    v31 = *((_QWORD *)this + 20);
    v32 = *(_QWORD *)this;
    v51 = &v29;
    v48 = &v30;
    v45 = &v31;
    v42 = &v32;
    v39 = &v33;
    v33 = this;
    v36 = &v34;
    v34 = a2;
    v52 = 8;
    v49 = 8;
    v46 = 8;
    v43 = 8;
    v40 = 8;
    v37 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180344EF0,
      (unsigned __int8 *)dword_1802EC206,
      0LL,
      0LL,
      8u,
      &v35);
  }
  started = 0;
  *a7 = 0;
  *((_DWORD *)this + 197) = ConvertToInputType(*(_DWORD *)a3, *((_DWORD *)a3 + 3));
  *((_DWORD *)this + 198) = a4;
  *((_QWORD *)this + 100) = *((_QWORD *)a3 + 2);
  if ( !CMILMatrix::IsEqualTo<0>((float *)this + 210, (float *)a5) )
  {
    *(_OWORD *)v13 = *(_OWORD *)v12;
    *(_OWORD *)(v13 + 16) = *(_OWORD *)(v12 + 16);
    *(_OWORD *)(v13 + 32) = *(_OWORD *)(v12 + 32);
    *(_OWORD *)(v13 + 48) = *(_OWORD *)(v12 + 48);
    *(_DWORD *)(v13 + 64) = *(_DWORD *)(v12 + 64);
    anonymous_namespace_::DecomposeMatrix(
      (CMILMatrix *)v13,
      v14,
      (CInteractionProcessor *)((char *)this + 908),
      (CInteractionProcessor *)((char *)this + 976),
      (CInteractionProcessor *)((char *)this + 1044),
      (CInteractionProcessor *)((char *)this + 1112));
    v15 = *((_DWORD *)this + 243);
    v16 = *(_OWORD *)((char *)this + 924);
    *(_OWORD *)((char *)this + 1180) = *(_OWORD *)((char *)this + 908);
    v17 = *(_OWORD *)((char *)this + 940);
    *(_OWORD *)((char *)this + 1196) = v16;
    v18 = *(_OWORD *)((char *)this + 956);
    *(_OWORD *)((char *)this + 1212) = v17;
    *(_OWORD *)((char *)this + 1228) = v18;
    *((_DWORD *)this + 311) = v15;
    if ( !CMILMatrix::Invert((CInteractionProcessor *)((char *)this + 1180), v19, v20) )
    {
      v22 = *((_DWORD *)this + 243);
      v23 = *(_OWORD *)((char *)this + 924);
      *(_OWORD *)v21 = *(_OWORD *)((char *)this + 908);
      v24 = *(_OWORD *)((char *)this + 940);
      *(_OWORD *)(v21 + 16) = v23;
      v25 = *(_OWORD *)((char *)this + 956);
      *(_OWORD *)(v21 + 32) = v24;
      *(_OWORD *)(v21 + 48) = v25;
      *(_DWORD *)(v21 + 64) = v22;
    }
    *a7 = 1;
  }
  if ( !*((_DWORD *)this + 196) )
  {
    v26 = ConvertToInputType(*(_DWORD *)a3, *((_DWORD *)a3 + 3));
    started = CInteractionProcessor::StartInteraction(this, 0LL, 0LL, a6, v26);
  }
  *((_BYTE *)this + 808) &= ~0x10u;
  switch ( *((_DWORD *)this + 197) )
  {
    case 2:
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                             this,
                             (int *)this + 196,
                             (__int64)a3,
                             (__int64)this + 1272);
    case 3:
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                             (_QWORD *)this + 20,
                             (int *)this + 196,
                             (__int64)a3,
                             (__int64)this + 1272);
    case 4:
      if ( CInteractionProcessor::AllowPenGestureDetection(this) )
        return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                               (_QWORD *)this + 40,
                               (int *)this + 196,
                               (__int64)a3,
                               (__int64)this + 1272);
      break;
    case 6:
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                             (_QWORD *)this + 60,
                             (int *)this + 196,
                             (__int64)a3,
                             (__int64)this + 1272);
  }
  return started;
}
