/*
 * XREFs of ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800347A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033CE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$_Insert_or_assign@AEBKV?$array@G$0BE@@std@@@?$unordered_map@KV?$array@G$0BE@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x18003484C (--$_Insert_or_assign@AEBKV-$array@G$0BE@@std@@@-$unordered_map@KV-$array@G$0BE@@std@@U-$hash@K@2.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180034B30 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 */

__int64 __fastcall SystemControlDeviceCollection::OnDeviceAttach(
        SystemControlDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-68h]
  unsigned int v8; // [rsp+30h] [rbp-58h] BYREF
  struct RIMDevice *v9[2]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v10[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v11; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = a2;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( Device < 0 )
  {
    v6 = 77LL;
  }
  else
  {
    v11 = 0LL;
    memset(v10, 0, sizeof(v10));
    std::unordered_map<unsigned long,std::array<unsigned short,20>>::_Insert_or_assign<unsigned long const &,std::array<unsigned short,20>>(
      (char *)this + 2760,
      v9,
      &v8,
      v10);
    Device = RIMDeviceCollection::FindDevice(this, v8, 0LL, v9, 0LL);
    if ( Device >= 0 )
      return 0LL;
    v6 = 86LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
    (const char *)(unsigned int)Device,
    v7);
  return (unsigned int)Device;
}
