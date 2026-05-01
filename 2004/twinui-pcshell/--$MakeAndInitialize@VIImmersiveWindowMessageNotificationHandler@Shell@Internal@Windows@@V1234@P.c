/*
 * XREFs of ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVShellFeedsExperienceManagerImpl@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVShellFeedsExperienceManagerImpl@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x180097D9C
 * Callers:
 *     ?_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009DBD4 (-_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800922DC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180092F7C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVShellFeedsExperienceManagerImpl@@P84@EAAJI_K_J@Z@Z @ 0x1800981A0 (--$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotification.c)
 *     ??0IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAA@XZ @ 0x1801B7304 (--0IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@Z @ 0x1801B7CA4 (-Attach@-$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B9010 (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,ShellFeedsExperienceManagerImpl *,long (ShellFeedsExperienceManagerImpl::*)(unsigned int,unsigned __int64,__int64)>(
        _QWORD *a1,
        __int64 *a2,
        __int128 *a3)
{
  void *v6; // rax
  int v7; // edi
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rbx
  __int64 v11; // rdx
  volatile int *v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  void *v18; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v6;
  if ( v6 )
  {
    v8 = Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::IImmersiveWindowMessageNotificationHandler((Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *)v6);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::Attach(&v17, v8);
    v9 = *a3;
    v10 = v17;
    v11 = *a2;
    v18 = 0LL;
    v16 = v9;
    v7 = Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::RuntimeClassInitialize<ShellFeedsExperienceManagerImpl>(
           v17,
           v11,
           &v16);
    if ( v7 >= 0 )
    {
      if ( v10 )
      {
        v13 = *(_QWORD *)(v10 + 32);
        while ( v13 >= 0 )
        {
          if ( (_DWORD)v13 != 0x7FFFFFFF )
          {
            v14 = v13;
            v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 32), v13 + 1, v13);
            if ( v14 != v13 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), v12);
LABEL_11:
        v10 = v17;
      }
      *a1 = v10;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v17);
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v18);
  return (unsigned int)v7;
}
