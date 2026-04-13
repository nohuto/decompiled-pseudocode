/*
 * XREFs of ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180072DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018C18 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180033834 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180071490 (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800718EC (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800728A4 (-GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskConditionF.c)
 *     ?GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskOptionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072964 (-GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskOptionFlags@.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800AB61C (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800AE8FC (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterTimerTrigger(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  CreativeFramework::CommonHelper::StringUtils *StringRawBuffer; // rax
  const wchar_t *v7; // rdx
  bool v8; // r8
  DWORD dwLowDateTime; // ebx
  void **v10; // rdx
  PVOID Reserved1; // rdi
  const WCHAR *v12; // rcx
  HSTRING_HEADER *v13; // rax
  int v14; // r9d
  const char *v15; // r9
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v18; // rdi
  HSTRING string; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-E0h]
  const WCHAR *v21; // [rsp+60h] [rbp-D8h] BYREF
  __int64 *v22; // [rsp+68h] [rbp-D0h]
  __int64 v23; // [rsp+70h] [rbp-C8h]
  __int64 v24; // [rsp+78h] [rbp-C0h] BYREF
  void *v25[3]; // [rsp+88h] [rbp-B0h] BYREF
  unsigned __int64 v26; // [rsp+A0h] [rbp-98h]
  void *v27[3]; // [rsp+A8h] [rbp-90h] BYREF
  unsigned __int64 v28; // [rsp+C0h] [rbp-78h]
  HSTRING_HEADER v29; // [rsp+C8h] [rbp-70h] BYREF
  HSTRING_HEADER v30; // [rsp+E8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v23 = -2LL;
  v22 = a2;
  string = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 64LL);
  WindowsDeleteString(0LL);
  try
  {
    string = 0LL;
    v5 = v4(a1, &string);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1DD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v5);
      JUMPOUT(0x180073099LL);
    }
    StringRawBuffer = (CreativeFramework::CommonHelper::StringUtils *)WindowsGetStringRawBuffer(string, 0LL);
    dwLowDateTime = CreativeFramework::CommonHelper::StringUtils::GetFileTimeFromString(StringRawBuffer, v7, v8).dwLowDateTime;
    Windows::Services::TargetedContent::Internal::GetTaskOptionsFlagsForTrigger(a1);
    Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger(a1);
    Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger((HSTRING)v27, a1);
    v10 = v27;
    if ( v28 >= 8 )
      v10 = (void **)v27[0];
    Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v25, (__int64)v10);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
      &v24,
      a2);
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)&off_1800F3808)[1].Reserved.Reserved1;
    v12 = (const WCHAR *)v25;
    if ( v26 >= 8 )
      v12 = (const WCHAR *)v25[0];
    v21 = v12;
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, &v21);
    CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger(
      v13[1].Reserved.Reserved1,
      (_DWORD)Reserved1,
      dwLowDateTime,
      v14);
    if ( v26 >= 8 )
      operator delete(v25[0]);
    v26 = 7LL;
    v25[2] = 0LL;
    LOWORD(v25[0]) = 0;
    if ( v28 >= 8 )
      operator delete(v27[0]);
    v28 = 7LL;
    v27[2] = 0LL;
    LOWORD(v27[0]) = 0;
    WindowsDeleteString(string);
  }
  catch ( ... )
  {
    v20 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1E9,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v15);
    v18 = (volatile signed __int32 *)v22[1];
    if ( v18 && _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
    return v20;
  }
  string = 0LL;
  v16 = (volatile signed __int32 *)a2[1];
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return 0LL;
}
