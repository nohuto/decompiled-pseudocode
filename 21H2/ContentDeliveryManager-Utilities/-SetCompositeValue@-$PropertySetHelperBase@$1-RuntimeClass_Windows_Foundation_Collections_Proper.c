/*
 * XREFs of ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18007975C
 * Callers:
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x180074DFC (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180078254 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x180074778 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
        _QWORD *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, _QWORD *))
{
  int v5; // eax
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-18h]
  __int64 *v17; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v20; // [rsp+90h] [rbp+30h] BYREF
  __int64 v21; // [rsp+98h] [rbp+38h] BYREF

  v14[1] = -2LL;
  v14[0] = 0LL;
  v5 = (**a3)(a3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v5);
    goto LABEL_16;
  }
  v15 = 0LL;
  v16 = 0;
  v7 = (__int64 *)a1[1];
  v8 = *v7;
  v17 = &v15;
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v8 + 152))(v7, v14[0], &v18);
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v17);
  if ( v6 >= 0 )
  {
    v21 = 0LL;
    v9 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
           &v21);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v21 + 80LL))(v21, a2, v15, &v20);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v6 = 0;
LABEL_11:
        v11 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        goto LABEL_13;
      }
      v10 = 257LL;
    }
    else
    {
      v10 = 255LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFD,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
    (const char *)(unsigned int)v6);
LABEL_13:
  if ( v15 && ((v16 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (**)(void))(*(_QWORD *)v15 + 16LL))();
LABEL_16:
  v12 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v6;
}
