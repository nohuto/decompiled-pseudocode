/*
 * XREFs of ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180097E80
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033D10 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180034BA0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003D384 (--_U@YAPEAX_K@Z.c)
 *     ??$_Insert_or_assign@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@?$unordered_map@KUUsageList@MobileButtonDeviceCollection@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x180096D60 (--$_Insert_or_assign@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@-$unordered_map@KUUsageLis.c)
 *     ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x180097BF4 (-IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnDeviceAttach(
        MobileButtonDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v6; // rdx
  _OWORD *v8; // rax
  MobileButtonDeviceCollection *v9; // rcx
  int v10; // r8d
  struct RIMDevice *v11; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v15; // [rsp+88h] [rbp+28h] BYREF
  bool v16; // [rsp+98h] [rbp+38h] BYREF

  v15 = a2;
  v11 = 0LL;
  v16 = 0;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( Device < 0 )
  {
    v6 = 101LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  v8 = operator new[](0x28uLL);
  *(_QWORD *)&v12 = v8;
  if ( !v8 )
  {
    Device = -2147024882;
    v6 = 105LL;
    goto LABEL_3;
  }
  DWORD2(v12) = 20;
  *v8 = 0LL;
  v8[1] = 0LL;
  *((_QWORD *)v8 + 4) = 0LL;
  std::unordered_map<unsigned long,MobileButtonDeviceCollection::UsageList>::_Insert_or_assign<unsigned long const &,MobileButtonDeviceCollection::UsageList &>(
    (__int64)this + 2760,
    (__int64)v13,
    (unsigned __int8 *)&v15,
    &v12);
  Device = RIMDeviceCollection::FindDevice(this, v15, 0LL, &v11, 0LL);
  if ( Device < 0 )
  {
    v6 = (unsigned int)(v10 + 117);
    goto LABEL_3;
  }
  Device = MobileButtonDeviceCollection::IsMobile0DButtonDevice(v9, v11, &v16);
  if ( Device < 0 )
  {
    v6 = 118LL;
    goto LABEL_3;
  }
  *((_BYTE *)*a3 + 40) = v16;
  return 0LL;
}
