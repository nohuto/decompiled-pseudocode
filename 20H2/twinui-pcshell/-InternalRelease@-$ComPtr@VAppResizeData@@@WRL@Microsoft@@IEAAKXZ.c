/*
 * XREFs of ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x180405BA4
 * Callers:
 *     ??$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChromeManager@@AEAPEAUIUnknown@@@Z @ 0x180405700 (--$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChrom.c)
 *     ??1?$ComPtr@VDragData@@@WRL@Microsoft@@QEAA@XZ @ 0x18040582C (--1-$ComPtr@VDragData@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1804059E0 (-ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180416C94 (-JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VJointDivider@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180417100 (-s_WndProcBase@-$CWRLImpWndProc@VJointDivider@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x18041778C (-DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags.c)
 *     ?AppResizeData_CreateInstance@@YAJPEAUIAppLayout@@AEBU_GUID@@PEAPEAX@Z @ 0x18041A45C (-AppResizeData_CreateInstance@@YAJPEAUIAppLayout@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$ChainInterfaces@UIPlaceModeData@@UIDragData@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180405C40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_180405C40.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,Microsoft::WRL::ChainInterfaces<IPlaceModeData,IDragData,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v1);
  }
  return result;
}
