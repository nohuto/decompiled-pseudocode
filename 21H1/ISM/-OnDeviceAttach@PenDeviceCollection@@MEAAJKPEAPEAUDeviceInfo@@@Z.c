/*
 * XREFs of ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033C80 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180034AD0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18012EC88 (--0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x18012F254 (-AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenDeviceCollection::OnDeviceAttach(void **this, int a2, struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v6; // rdx
  int v8; // r8d
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v10; // rax
  PenDeviceManager *v11; // rbx
  struct ISMBamos_AutoBamos::BamoConnection *v12; // rdi
  PenDeviceManager *v13; // rax
  PenDeviceManager *v14; // rdi
  struct InputSystemServerConnection *v15; // rax
  struct RIMDevice *v16; // [rsp+30h] [rbp-18h] BYREF
  PenDeviceManager *v17; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v16 = 0LL;
  Device = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, a3);
  if ( Device < 0 )
  {
    v6 = 83LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, a2, 0LL, &v16, 0LL);
  if ( Device < 0 )
  {
    v6 = (unsigned int)(v8 + 87);
    goto LABEL_3;
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 23) + 8LL) + 168LL))(*((_QWORD *)BamoServerConnection + 23) + 8LL);
  v11 = (PenDeviceManager *)v10;
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 24));
    v11 = (PenDeviceManager *)v10;
  }
  if ( !v11 )
  {
    v12 = ISMStatics::GetBamoServerConnection();
    v17 = (PenDeviceManager *)operator new(0x90uLL);
    v13 = PenDeviceManager::PenDeviceManager(v17, v12);
    v14 = v13;
    v11 = v13;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v13 + 6);
      v11 = v13;
    }
    v15 = ISMStatics::GetBamoServerConnection();
    (*(void (__fastcall **)(__int64, PenDeviceManager *))(*(_QWORD *)(*((_QWORD *)v15 + 23) + 8LL) + 176LL))(
      *((_QWORD *)v15 + 23) + 8LL,
      v14);
  }
  PenDeviceManager::AttachRIMDevice(v11, this[10], *((void **)v16 + 2));
  if ( v11 )
    (**((void (__fastcall ***)(__int64))v11 + 2))((__int64)v11 + 16);
  return 0LL;
}
