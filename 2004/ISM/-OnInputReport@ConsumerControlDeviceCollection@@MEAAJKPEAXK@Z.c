/*
 * XREFs of ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x180099900
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033CE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045248 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180088FE0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800902A4 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x180099300 (-CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18009CB3C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnInputReport(
        ConsumerControlDeviceCollection *this,
        int a2,
        PCHAR Report,
        unsigned int a4)
{
  int v8; // edx
  int DeviceInfo; // ebx
  __int64 v10; // rdx
  struct RIMDevice *v12; // rcx
  struct RIMDevice *PreparsedData; // rdi
  PUSAGE v14; // r12
  unsigned int v15; // ecx
  NTSTATUS Usages; // eax
  __int64 v17; // rcx
  __int64 appended; // rax
  __int64 v19; // r11
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r10
  ULONG v23; // eax
  PUSAGE v24; // rbx
  unsigned __int16 *v25; // rdi
  DWORD v26; // ebx
  unsigned __int16 *v27; // rdi
  DWORD TickCount; // ebx
  __int64 v29; // rax
  __int64 v30; // rdx
  struct RIMDevice *v31; // [rsp+40h] [rbp-C0h] BYREF
  ULONG UsageLength; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 v33[8]; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-A8h] BYREF
  PUSAGE PreviousUsageList[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct DeviceInfo *v36[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v37[24]; // [rsp+80h] [rbp-80h] BYREF
  int v38; // [rsp+98h] [rbp-68h]
  USHORT UsageList[8]; // [rsp+870h] [rbp+770h] BYREF
  __int128 v40; // [rsp+880h] [rbp+780h]
  __int64 v41; // [rsp+890h] [rbp+790h]
  USHORT BreakUsageList[8]; // [rsp+898h] [rbp+798h] BYREF
  __int128 v43; // [rsp+8A8h] [rbp+7A8h]
  __int64 v44; // [rsp+8B8h] [rbp+7B8h]
  USHORT MakeUsageList[8]; // [rsp+8C0h] [rbp+7C0h] BYREF
  __int128 v46; // [rsp+8D0h] [rbp+7D0h]
  __int64 v47; // [rsp+8E0h] [rbp+7E0h]
  wil::details::in1diag3 *retaddr; // [rsp+928h] [rbp+828h]

  *(_DWORD *)v33 = a2;
  UsageLength = 20;
  v41 = 0LL;
  v47 = 0LL;
  v44 = 0LL;
  v31 = 0LL;
  PreviousUsageList[0] = 0LL;
  *(_OWORD *)UsageList = 0LL;
  v40 = 0LL;
  *(_OWORD *)MakeUsageList = 0LL;
  v46 = 0LL;
  *(_OWORD *)BreakUsageList = 0LL;
  v43 = 0LL;
  memset_0(v37, 0, 0x7F0uLL);
  v38 = 2032;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, v36);
  if ( DeviceInfo < 0 )
  {
    v10 = 194LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)(unsigned int)DeviceInfo);
    return (unsigned int)DeviceInfo;
  }
  DeviceInfo = RIMDeviceCollection::FindDevice(this, v8, 0LL, &v31, 0LL);
  if ( DeviceInfo < 0 )
  {
    v10 = 198LL;
    goto LABEL_3;
  }
  v12 = v31;
  PreparsedData = (struct RIMDevice *)*((_QWORD *)v31 + 6);
  v31 = PreparsedData;
  DeviceInfo = HIDDevice::GetHIDCapabilities(v12, (struct _HIDP_CAPS **)PreviousUsageList);
  if ( DeviceInfo < 0 )
  {
    v10 = 200LL;
    goto LABEL_3;
  }
  v14 = PreviousUsageList[0];
  v15 = PreviousUsageList[0][2];
  if ( a4 >= v15 )
  {
    while ( 1 )
    {
      Usages = HidP_GetUsages(
                 HidP_Input,
                 0xCu,
                 0,
                 UsageList,
                 &UsageLength,
                 PreparsedData,
                 Report,
                 (unsigned __int16)v15);
      if ( Usages < 0 )
      {
        v30 = 228LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v30,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      appended = std::_Fnv1a_append_bytes(v17, v33, 4uLL);
      v20 = *(_QWORD *)(v19 + 48) & appended;
      while ( 1 )
      {
        v21 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                v19,
                v36,
                v20);
        if ( v22 == *v21 )
          break;
        if ( *(_DWORD *)(v22 + 16) == a2 )
          goto LABEL_15;
      }
      v22 = *(_QWORD *)(v19 + 8);
LABEL_15:
      if ( v22 == *((_QWORD *)this + 346) )
      {
        DeviceInfo = -2147467259;
        v10 = 234LL;
        goto LABEL_3;
      }
      *(_OWORD *)PreviousUsageList = *(_OWORD *)(v22 + 24);
      v23 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)PreviousUsageList, 8));
      if ( v23 > 0x14 )
      {
        DeviceInfo = -2147467259;
        v10 = 244LL;
        goto LABEL_3;
      }
      v24 = PreviousUsageList[0];
      Usages = HidP_UsageListDifference(PreviousUsageList[0], UsageList, BreakUsageList, MakeUsageList, v23);
      if ( Usages < 0 )
      {
        v30 = 252LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v30,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      v25 = BreakUsageList;
      *(_OWORD *)v24 = *(_OWORD *)UsageList;
      *((_OWORD *)v24 + 1) = v40;
      *((_QWORD *)v24 + 4) = v41;
      if ( BreakUsageList[0] )
        break;
LABEL_22:
      v27 = MakeUsageList;
      if ( MakeUsageList[0] )
      {
        while ( 1 )
        {
          TickCount = GetTickCount();
          QueryPerformanceCounter(&PerformanceCount);
          if ( (int)ConsumerControlDeviceCollection::CreateButtonInfo(
                      (ConsumerControlDeviceCollection *)*v27,
                      a2,
                      TickCount,
                      PerformanceCount,
                      *v27,
                      1,
                      (struct InputInfo *)v37) >= 0 )
          {
            DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                           *((_QWORD *)this + 2),
                           v37);
            if ( DeviceInfo < 0 )
              break;
          }
          if ( !*++v27 )
            goto LABEL_27;
        }
        v10 = 327LL;
        goto LABEL_3;
      }
LABEL_27:
      v29 = v14[2];
      a4 -= v29;
      Report += v29;
      LOWORD(v15) = v14[2];
      if ( a4 < (unsigned int)v29 )
        return 0LL;
      PreparsedData = v31;
    }
    while ( 1 )
    {
      v26 = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      if ( (int)ConsumerControlDeviceCollection::CreateButtonInfo(
                  (ConsumerControlDeviceCollection *)*v25,
                  a2,
                  v26,
                  PerformanceCount,
                  *v25,
                  0,
                  (struct InputInfo *)v37) >= 0 )
      {
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v37);
        if ( DeviceInfo < 0 )
          break;
      }
      if ( !*++v25 )
        goto LABEL_22;
    }
    v10 = 288LL;
    goto LABEL_3;
  }
  return 0LL;
}
