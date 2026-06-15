/*
 * XREFs of ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14004D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400016B8 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002164 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007324 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B880 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000F1E0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x140012610 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x14001756C (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14003E130 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14004106C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x1400415F4 (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140046918 (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400469CC (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CStreamGroup::CreateBridgeStream(
        CStreamGroup *this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroup *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // r15
  struct _RTL_CRITICAL_SECTION *v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _RTL_CRITICAL_SECTION *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  CPipeInstance *v18; // rbx
  int ApoEndpointInstance; // r12d
  __int64 v20; // rdx
  struct SYSTEM_AUDIO_STREAM *v21; // r9
  int v22; // eax
  void (__fastcall ***v23)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v24; // r12
  const struct CPipeInstance *v25; // rbx
  CStreamInstance *v26; // rdi
  int v27; // eax
  struct _RTL_CRITICAL_SECTION *v28; // rbx
  struct _RTL_CRITICAL_SECTION *v29; // rdi
  __int64 v30; // r8
  __int64 result; // rax
  ATL::CAtlException *v32; // rbx
  LPVOID *v33; // [rsp+28h] [rbp-C0h]
  CStreamInstance *v34; // [rsp+40h] [rbp-A8h] BYREF
  struct IAudioProcessingObject *v35; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-98h] BYREF
  struct ISubmixInternal *v37; // [rsp+58h] [rbp-90h] BYREF
  CPipeInstance *v38; // [rsp+60h] [rbp-88h] BYREF
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+68h] [rbp-80h]
  char *v40; // [rsp+70h] [rbp-78h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-70h]
  char *v42; // [rsp+80h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+88h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v44; // [rsp+90h] [rbp-58h]
  char *v45; // [rsp+98h] [rbp-50h]
  ATL::CAtlException *v46[3]; // [rsp+A0h] [rbp-48h] BYREF
  char v47; // [rsp+B8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  char *v49; // [rsp+F0h] [rbp+8h] BYREF
  struct SYSTEM_AUDIO_STREAM *v50; // [rsp+108h] [rbp+20h]

  v50 = a4;
  v38 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  v40 = (char *)this + 200;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  v39 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v44 = v8;
  *((_DWORD *)a4 + 238) = 0;
  if ( *((_BYTE *)this + 337) )
  {
    v10 = 135LL;
LABEL_21:
    v11 = -2147024809;
    goto LABEL_22;
  }
  if ( !a2 )
  {
    v11 = -2147467261;
LABEL_7:
    v10 = 138LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)v11);
    goto LABEL_23;
  }
  if ( *(_DWORD *)a2 > 2u )
  {
    v11 = -2147024809;
    goto LABEL_7;
  }
  v12 = *((_DWORD *)this + 70);
  if ( v12 != *(_DWORD *)a2 && (v12 != 2 || *((_DWORD *)a2 + 2) != 2) )
  {
    v10 = 141LL;
    goto LABEL_21;
  }
  if ( *((_QWORD *)this + 32) != *((_QWORD *)a2 + 4) )
  {
    v10 = 142LL;
    goto LABEL_21;
  }
  v13 = *(_QWORD *)((char *)a2 + 12) - *((_QWORD *)this + 33);
  if ( !v13 )
    v13 = *(_QWORD *)((char *)a2 + 20) - *((_QWORD *)this + 34);
  if ( v13 )
  {
    v14 = *(_QWORD *)((char *)a2 + 12) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( !v14 )
      v14 = *(_QWORD *)((char *)a2 + 20) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v14 )
    {
      v10 = 148LL;
      goto LABEL_21;
    }
  }
  v35 = 0LL;
  v36 = 0LL;
  (**(void (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a3)(
    a3,
    &GUID_78c8e80a_c79b_465b_be08_cd0c3ec0edda,
    &v36);
  if ( v36 )
  {
    v35 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, struct IAudioProcessingObject **))(*(_QWORD *)v36 + 24LL))(v36, &v35);
    v11 = v16;
    if ( v16 < 0 )
    {
      v17 = 156LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v16);
LABEL_30:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v36);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v35);
LABEL_23:
      if ( v8 )
      {
        v15 = v8;
LABEL_25:
        LeaveCriticalSection(v15);
        goto LABEL_72;
      }
      goto LABEL_72;
    }
  }
  if ( !v35 )
  {
LABEL_69:
    PublishDeviceGraphWnfState();
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v36);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v35);
    if ( v8 )
      LeaveCriticalSection(v9);
    v11 = 0;
    goto LABEL_72;
  }
  v16 = CPipeInstance::CreateBridgeStreamPipeInstance(
          *((struct IUnknown **)this + 36),
          a2,
          v35,
          *((struct CPipeInstance **)this + 6),
          *((struct tWAVEFORMATEX **)this + 31),
          v33,
          &v38);
  v11 = v16;
  if ( v16 < 0 )
  {
    v17 = 168LL;
    goto LABEL_29;
  }
  v18 = v38;
  ApoEndpointInstance = CPipeInstance::Initialize(v38);
  if ( ApoEndpointInstance < 0 )
  {
    v20 = 170LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)ApoEndpointInstance);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v36);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v35);
    if ( v8 )
      LeaveCriticalSection(v8);
    v11 = ApoEndpointInstance;
    goto LABEL_72;
  }
  ApoEndpointInstance = CPipeInstance::ConnectAPOs(v18, 0LL);
  if ( ApoEndpointInstance < 0 )
  {
    v20 = 171LL;
    goto LABEL_36;
  }
  ApoEndpointInstance = CPipeInstance::CreateApoEndpointInstance(v18, a2, v35, v21);
  if ( ApoEndpointInstance < 0 )
  {
    v20 = 172LL;
    goto LABEL_36;
  }
  v34 = 0LL;
  v22 = CStreamInstance::CreateStreamInstance(&v34, 0, *(_DWORD *)a2, (__int64)v18, (__int64)v18, 0LL);
  v11 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v22);
LABEL_45:
    if ( v34 )
      CStreamInstance::`scalar deleting destructor'(v34);
    v34 = 0LL;
    goto LABEL_30;
  }
  v38 = 0LL;
  v23 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 41);
  if ( v23 )
  {
    (**v23)(v23, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v37);
    v24 = v37;
  }
  else
  {
    v24 = 0LL;
    v37 = 0LL;
  }
  if ( v24 )
  {
    v25 = (const struct CPipeInstance *)*((_QWORD *)this + 37);
    v26 = v34;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 64LL))((char *)this + 24);
    v27 = CStreamInstance::ConnectToRightSubmix(v26, v24, v25);
    v11 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBC,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v27);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v37);
      goto LABEL_45;
    }
  }
  v46[1] = (ATL::CAtlException *)&v37;
  v46[2] = (ATL::CAtlException *)&v34;
  v47 = 1;
  v28 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v42 = (char *)this + 56;
  v43 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v29 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  try
  {
    v45 = (char *)this + 56;
    v49 = (char *)v34;
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(
      (__int64 *)this + 12,
      (__int64)&v49,
      v30);
  }
  catch ( ATL::CAtlException *v46 )
  {
    v32 = v46[0];
    if ( *(_DWORD *)v46[0] == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v49) = *(_DWORD *)v32;
    v11 = (unsigned int)v49;
    if ( (int)v49 >= 0 )
    {
      v28 = v43;
      v9 = v39;
      v8 = v39;
      v29 = v43;
      goto LABEL_65;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v49);
    if ( v42 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v37 )
      CStreamInstance::DisconnectFromRightSubmix(v34, v37);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v37);
    if ( v34 )
      CStreamInstance::`scalar deleting destructor'(v34);
    v34 = 0LL;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v36);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v35);
    if ( v40 )
    {
      v15 = v39;
      goto LABEL_25;
    }
LABEL_72:
    ATL::CAutoPtr<CPipeInstance>::Free((LPVOID **)&v38);
    result = v11;
  }
LABEL_65:
  if ( v28 )
    LeaveCriticalSection(v29);
  *((_QWORD *)v50 + 4) = *((_QWORD *)v34 + 1);
  v34 = 0LL;
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v37);
  if ( v34 )
    CStreamInstance::`scalar deleting destructor'(v34);
  goto LABEL_69;
}
