/*
 * XREFs of ?CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1803CE34C
 * Callers:
 *     ?RelaunchApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUISplashScreen@@@Z @ 0x1803CAF00 (-RelaunchApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEAUISplashScreen@@@Z.c)
 *     ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1803CBD0C (-_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180033F70 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18022A6FC (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1803CD7F0 (--$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDelayedTileActivation_CreateInstance(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  int CanCastTo; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // r9
  const struct _GUID *v12; // rdx
  volatile int *v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v17; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+30h] BYREF
  volatile int *v19; // [rsp+68h] [rbp+38h] BYREF

  v18 = a3;
  v17 = a1;
  v15 = 0LL;
  v5 = a5;
  *a5 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v19);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CDelayedTileActivation,CDelayedTileActivation,IImmersiveApplication * &,IUnknown * &,enum ACTIVATEOPTIONSINTERNAL &>(
         &v19,
         &v17,
         &v15,
         &v18);
  CanCastTo = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 200LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)v8);
    goto LABEL_14;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(&GUID_688a9333_462e_4715_9651_62bb62432419, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = v19;
    *v5 = (void *)v19;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v13 + 8LL))(v13);
    CanCastTo = 0;
    goto LABEL_14;
  }
  if ( InlineIsEqualGUID(v10, v11) )
  {
    *v5 = (void *)v19;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v19 + 2), v12, v5);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
    if ( CanCastTo < 0 )
    {
      v8 = (unsigned int)CanCastTo;
      v9 = 201LL;
      goto LABEL_13;
    }
  }
  (*(void (__fastcall **)(void *))(*(_QWORD *)*v5 + 8LL))(*v5);
LABEL_14:
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v19);
  return (unsigned int)CanCastTo;
}
