/*
 * XREFs of ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVCortanaSharedExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVCortanaSharedExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x1801B6614
 * Callers:
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1801BD2B4 (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801409F0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVCortanaSharedExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x1801B6894 (--$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationH.c)
 *     ??0IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAA@XZ @ 0x1801B6F14 (--0IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@Z @ 0x1801B78B4 (-Attach@-$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B8C20 (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,CortanaSharedExperienceManager *,long (CortanaSharedExperienceManager::*)(unsigned int,unsigned __int64,__int64)>(
        _QWORD *a1,
        __int64 *a2,
        __int128 *a3)
{
  Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *v6; // rax
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
  Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *v18; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *)operator new(
                                                                                 0xA0uLL,
                                                                                 (const struct std::nothrow_t *)&std::nothrow);
  v18 = v6;
  if ( v6 )
  {
    v8 = Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::IImmersiveWindowMessageNotificationHandler(v6);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::Attach(&v17, v8);
    v9 = *a3;
    v10 = v17;
    v11 = *a2;
    v16 = v9;
    v7 = Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::RuntimeClassInitialize<CortanaSharedExperienceManager>(
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
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
          (Microsoft::WRL::Details *)(2 * v13 + 16),
          v12);
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
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
