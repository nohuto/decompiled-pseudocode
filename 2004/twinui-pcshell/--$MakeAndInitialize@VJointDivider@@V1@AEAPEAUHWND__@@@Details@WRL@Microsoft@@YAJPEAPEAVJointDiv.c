/*
 * XREFs of ??$MakeAndInitialize@VJointDivider@@V1@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAVJointDivider@@AEAPEAUHWND__@@@Z @ 0x180416B50
 * Callers:
 *     ?JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1804173D4 (-JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180092F7C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITaggableTarget@@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180148BE0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITag_ea_180148BE0.c)
 *     ??1?$ComPtr@VDragData@@@WRL@Microsoft@@QEAA@XZ @ 0x18040614C (--1-$ComPtr@VDragData@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0JointDivider@@QEAA@XZ @ 0x180416BDC (--0JointDivider@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<JointDivider,JointDivider,HWND__ * &>(
        JointDivider **a1,
        __int64 *a2)
{
  unsigned int v2; // edi
  void *v5; // rax
  JointDivider *v6; // rax
  __int64 v7; // rcx
  JointDivider *v8; // rbx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  JointDivider *v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v5;
  if ( v5 )
  {
    v6 = JointDivider::JointDivider((JointDivider *)v5);
    v7 = *a2;
    v8 = v6;
    v11 = v6;
    v10 = 0LL;
    *((_QWORD *)v6 + 11) = v7;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITaggableTarget,CWRLObjectWithSite>::AddRef((__int64)v6);
    *a1 = v8;
    Microsoft::WRL::ComPtr<DragData>::~ComPtr<DragData>((__int64)&v11);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
  return v2;
}
