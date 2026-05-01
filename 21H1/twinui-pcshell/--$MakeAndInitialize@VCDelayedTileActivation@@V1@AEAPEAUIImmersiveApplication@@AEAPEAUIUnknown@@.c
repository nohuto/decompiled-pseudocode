/*
 * XREFs of ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1803AD050
 * Callers:
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1803ADBAC (-CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOP.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801158FC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180207E4C (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CDelayedTileActivation@@QEAA@XZ @ 0x1803AD3CC (--0CDelayedTileActivation@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z @ 0x1803ADB78 (-Attach@-$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1803AEA4C (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDelayedTileActivation,CDelayedTileActivation,IImmersiveApplication * &,IUnknown * &,enum ACTIVATEOPTIONSINTERNAL &>(
        volatile int **a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  CDelayedTileActivation *v8; // rax
  int v9; // edi
  CDelayedTileActivation *v10; // rax
  __int64 v11; // r9
  volatile int *v12; // rbx
  volatile int *v13; // rdx
  volatile int *v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CDelayedTileActivation *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = CDelayedTileActivation::CDelayedTileActivation(v8);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<CDelayedTileActivation>::Attach(&v15, v10);
    v11 = *a4;
    v12 = v15;
    v9 = CDelayedTileActivation::RuntimeClassInitialize(v15, *a2, *a3, v11, 0LL);
    if ( v9 >= 0 )
    {
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
          (__int64)v12,
          v13);
      *a1 = v12;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
