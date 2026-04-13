/*
 * XREFs of ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800AFC98
 * Callers:
 *     _lambda_4da519507bbb1c7cbbe275d8da092dac_::operator() @ 0x1800B071C (_lambda_4da519507bbb1c7cbbe275d8da092dac_--operator().c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800B09AC (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007258 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180034084 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800AFC18 (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_880c7e649d9a78c463fea33c30caf4e7___ @ 0x1800B0C48 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_880c7e649d9a78c463fea33c30caf4.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
char __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
        HSTRING a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 *a6)
{
  __int64 v6; // rbx
  volatile signed __int32 *v11; // rbx
  _QWORD *v13; // rax
  HRESULT v14; // eax
  __int64 *v15; // rcx
  wil::details::in1diag3 *v16; // rax
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  int v19; // eax
  int v20; // eax
  HRESULT v21; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  int v28; // eax
  int v29; // eax
  __int64 *v30; // rdi
  __int64 (__fastcall *v31)(__int64 *, __int64, __int64 *); // r14
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rcx
  int v37; // eax
  HRESULT v38; // eax
  int v39; // eax
  wil::details::in1diag3 *v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  wil::details::in1diag3 *v43; // rcx
  int v44; // eax
  __int64 v45; // rdi
  __int64 v46; // rcx
  int v47; // eax
  __int64 *v48; // rdi
  __int64 (__fastcall *v49)(__int64 *, __int64, __int64 *); // rsi
  __int64 v50; // rcx
  int v51; // eax
  wil::details::in1diag3 *v52; // rcx
  int v53; // eax
  __int64 v54; // rdi
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rax
  int v58; // eax
  volatile signed __int32 *v59; // rbx
  __int64 v60; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v61; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v63; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+68h] [rbp-A0h]
  __int64 *v66; // [rsp+70h] [rbp-98h] BYREF
  __int64 v67; // [rsp+78h] [rbp-90h] BYREF
  __int64 v68; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v69; // [rsp+88h] [rbp-80h] BYREF
  __int64 v70; // [rsp+90h] [rbp-78h] BYREF
  __int64 v71; // [rsp+98h] [rbp-70h] BYREF
  __int64 v72; // [rsp+A0h] [rbp-68h] BYREF
  PCWSTR StringRawBuffer; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v74[4]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v75; // [rsp+D0h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+E0h] [rbp-28h] BYREF
  HSTRING string; // [rsp+F8h] [rbp-10h] BYREF
  HSTRING_HEADER v78; // [rsp+100h] [rbp-8h] BYREF
  HSTRING v79; // [rsp+118h] [rbp+10h] BYREF
  HSTRING_HEADER v80; // [rsp+120h] [rbp+18h] BYREF
  HSTRING v81; // [rsp+138h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v74[2] = -2LL;
  v74[3] = a6;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  LOBYTE(v60) = 0;
  v74[0] = &v60;
  v74[1] = &StringRawBuffer;
  CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_880c7e649d9a78c463fea33c30caf4e7___(v74);
  if ( (_BYTE)v60 )
  {
    if ( (unsigned int)(a5 - 1) > 1 )
    {
      v11 = (volatile signed __int32 *)a6[1];
      if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( !_InterlockedDecrement(v11 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
      return 0;
    }
    if ( a5 == 1 )
    {
      v13 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              &v75,
              a6);
      CreativeFramework::CommonHelper::UnregisterTask((__int64)a1, (__int64)v13);
    }
  }
  v61 = 0LL;
  string = 0LL;
  v14 = WindowsCreateStringReference(
          L"Windows.ApplicationModel.Background.BackgroundTaskBuilder",
          0x39u,
          &hstringHeader,
          &string);
  if ( v14 < 0 )
    goto LABEL_78;
  v61 = 0LL;
  LODWORD(v6) = RoActivateInstance(string, &v66);
  if ( (int)v6 >= 0 )
  {
    if ( *(_QWORD *)&GUID_0351550e_3e64_4572_a93a_84075a37c917.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_0351550e_3e64_4572_a93a_84075a37c917.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v15 = v66;
      v61 = v66;
      goto LABEL_17;
    }
    LODWORD(v6) = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 **))*v66)(
                    v66,
                    &GUID_0351550e_3e64_4572_a93a_84075a37c917,
                    &v61);
    (*(void (__fastcall **)(__int64 *))(*v66 + 16))(v66);
  }
  v15 = v61;
LABEL_17:
  v16 = retaddr;
  if ( (int)v6 < 0 )
  {
LABEL_79:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v6);
LABEL_80:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x83,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(__int64 *, HSTRING))(*v15 + 80))(v15, a1);
  v18 = retaddr;
  if ( v17 < 0 )
    goto LABEL_80;
  v19 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v61 + 48))(v61, a2);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  v20 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v61 + 64))(v61, a3);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_83;
  }
  v63 = 0LL;
  v79 = 0LL;
  v21 = WindowsCreateStringReference(L"Windows.ApplicationModel.Background.SystemCondition", 0x33u, &v78, &v79);
  if ( v21 < 0 )
  {
LABEL_83:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
    goto LABEL_84;
  }
  ActivationFactory = RoGetActivationFactory(v79, &GUID_d269d1f1_05a7_49ae_87d7_16b2b8b9a553, &v63);
  v23 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_84:
    wil::details::in1diag3::Throw_Hr(
      v23,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_85;
  }
  v62 = 0LL;
  v6 = 0LL;
  v65 = 0LL;
  if ( (a4 & 9) == 0 )
    goto LABEL_30;
  v24 = *v63;
  v62 = 0LL;
  if ( (a4 & 4) != 0 || (v25 = 7LL, (a4 & 1) != 0) )
    v25 = 3LL;
  v26 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v24 + 48))(v63, v25, &v62);
  v27 = retaddr;
  if ( v26 < 0 )
  {
LABEL_85:
    wil::details::in1diag3::Throw_Hr(
      v27,
      (void *)0x94,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v26);
    __debugbreak();
  }
  v28 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v62)(
          v62,
          &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
          &v72);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v28);
    __debugbreak();
  }
  v6 = v72;
  v65 = v72;
  v29 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v61 + 72))(v61, v72);
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v29);
    __debugbreak();
  }
LABEL_30:
  if ( (a4 & 2) != 0 )
  {
    v30 = v63;
    v31 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(*v63 + 48);
    v32 = v62;
    v62 = 0LL;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    v33 = v31(v30, 5LL, &v62);
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v33);
      __debugbreak();
    }
    v34 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v62)(
            v62,
            &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
            &v67);
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1577,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v34);
      __debugbreak();
    }
    v35 = v67;
    v67 = 0LL;
    v36 = v6;
    v6 = v35;
    v65 = v35;
    if ( v36 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      if ( v67 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
    }
    v37 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v61 + 72))(v61, v35);
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v37);
LABEL_91:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v38);
      goto LABEL_92;
    }
  }
  if ( (a4 & 0x10) == 0 )
    goto LABEL_52;
  v69 = 0LL;
  v81 = 0LL;
  v38 = WindowsCreateStringReference(L"Windows.ApplicationModel.Background.CSystemCondition", 0x34u, &v80, &v81);
  if ( v38 < 0 )
    goto LABEL_91;
  v39 = RoGetActivationFactory(v81, &GUID_6f989a99_770e_4539_840b_ec97284926d5, &v69);
  v40 = retaddr;
  if ( v39 < 0 )
  {
LABEL_92:
    wil::details::in1diag3::Throw_Hr(
      v40,
      (void *)0xA7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v39);
LABEL_93:
    wil::details::in1diag3::Throw_Hr(
      v43,
      (void *)0xAD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v42);
    __debugbreak();
  }
  v64 = 0LL;
  v41 = *v69;
  v64 = 0LL;
  v42 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64 *))(v41 + 48))(v69, 7LL, 0LL, &v64);
  v43 = retaddr;
  if ( v42 < 0 )
    goto LABEL_93;
  v44 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v64)(
          v64,
          &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
          &v68);
  if ( v44 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v44);
    __debugbreak();
  }
  v45 = v68;
  v68 = 0LL;
  v46 = v6;
  v6 = v45;
  v65 = v45;
  if ( v46 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    if ( v68 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
  }
  v47 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v61 + 72))(v61, v45);
  if ( v47 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v47);
    goto LABEL_96;
  }
  if ( v64 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
  if ( v69 )
    (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
LABEL_52:
  if ( (a4 & 0x20) != 0 )
    goto LABEL_61;
  v48 = v63;
  v49 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(*v63 + 48);
  v50 = v62;
  v62 = 0LL;
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  v51 = v49(v48, 8LL, &v62);
  v52 = retaddr;
  if ( v51 < 0 )
  {
LABEL_96:
    wil::details::in1diag3::Throw_Hr(
      v52,
      (void *)0xB7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v51);
    __debugbreak();
  }
  v53 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v62)(
          v62,
          &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
          &v70);
  if ( v53 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v53);
    __debugbreak();
  }
  v54 = v70;
  v70 = 0LL;
  v55 = v6;
  v6 = v54;
  v65 = v54;
  if ( v55 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    if ( v70 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
  }
  v56 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v61 + 72))(v61, v54);
  if ( v56 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v56);
    JUMPOUT(0x1800B0564LL);
  }
LABEL_61:
  v71 = 0LL;
  v57 = *v61;
  v71 = 0LL;
  v58 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v57 + 96))(v61, &v71);
  if ( v58 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v58);
LABEL_78:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    goto LABEL_79;
  }
  if ( v71 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v62 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  if ( v63 )
    (*(void (__fastcall **)(__int64 *))(*v63 + 16))(v63);
  if ( v61 )
    (*(void (__fastcall **)(__int64 *))(*v61 + 16))(v61);
  v59 = (volatile signed __int32 *)a6[1];
  if ( v59 )
  {
    if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v59)(v59);
      if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
    }
  }
  return 1;
}
