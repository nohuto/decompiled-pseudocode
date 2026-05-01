/*
 * XREFs of ?SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x18041E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVJointResize@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVJointResize@@@Z @ 0x18041C2DC (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotificati_ea_18041C2DC.c)
 *     ?IsJointResizeEnabled@JointResize@@AEAA_NXZ @ 0x18041D608 (-IsJointResizeEnabled@JointResize@@AEAA_NXZ.c)
 */

__int64 __fastcall JointResize::SubscribeToServices(JointResize *this, struct IServiceProvider *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         (char *)this + 104);
  if ( v4 < 0 )
  {
    v5 = 129LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         (char *)this + 112);
  if ( v4 < 0 )
  {
    v5 = 130LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         (char *)this + 120);
  if ( v4 < 0 )
  {
    v5 = 131LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         (char *)this + 128);
  if ( v4 < 0 )
  {
    v5 = 132LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &unk_180542E60,
         &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
         (char *)this + 136);
  if ( v4 < 0 )
  {
    v5 = 133LL;
    goto LABEL_3;
  }
  v4 = SmartCookie::Register<IImmersiveSettingsCache,long (IImmersiveSettingsCache::*)(IImmersiveSettingsCacheNotification *,unsigned long *),long (IImmersiveSettingsCache::*)(unsigned long),JointResize *>(
         (__int64)this + 272,
         *((_QWORD *)this + 17),
         v7);
  if ( v4 < 0 )
  {
    v5 = 138LL;
    goto LABEL_3;
  }
  if ( JointResize::IsJointResizeEnabled((JointResize *)((char *)this - 24)) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 16) + 72LL))(
           *((_QWORD *)this + 16),
           ((unsigned __int64)this + 64) & -(__int64)(this != (JointResize *)24));
    if ( v4 < 0 )
    {
      v5 = 142LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
