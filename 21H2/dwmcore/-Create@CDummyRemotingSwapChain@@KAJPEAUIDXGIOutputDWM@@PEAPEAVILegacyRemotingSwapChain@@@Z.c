/*
 * XREFs of ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802895FC
 * Callers:
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x1800FE2A8 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180277214 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ??0CDummyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGIOutputDWM@@IU_UNSIGNED_RATIO@@PEAUHINSTANCE__@@@Z @ 0x18028916C (--0CDummyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGIOutputDWM@@IU_UNSIGNED_RATIO@@PEAUHINS.c)
 *     ?Initialize@CDummyRemotingSwapChain@@IEAAJPEBG@Z @ 0x180289A9C (-Initialize@CDummyRemotingSwapChain@@IEAAJPEBG@Z.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::Create(struct IDXGIOutputDWM *a1, struct ILegacyRemotingSwapChain **a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi
  CDeviceManager *v7; // rcx
  HMODULE LibraryA; // rdi
  int DefaultDevice; // eax
  __int64 v10; // rcx
  CDummyRemotingSwapChain *v11; // rax
  CDummyRemotingSwapChain *v12; // rax
  CDummyRemotingSwapChain *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  CD3DDevice *v16; // rcx
  struct CD3DDevice *v18; // [rsp+40h] [rbp-F8h] BYREF
  struct _UNSIGNED_RATIO v19; // [rsp+48h] [rbp-F0h]
  _BYTE v20[8]; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-E0h]
  struct _UNSIGNED_RATIO v22; // [rsp+78h] [rbp-C0h]
  unsigned __int16 v23[40]; // [rsp+C0h] [rbp-78h] BYREF

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)a1 + 32LL))(a1, v20);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x16u);
    return v6;
  }
  v19 = v22;
  LibraryA = LoadLibraryA("rdsdwmdr.dll");
  if ( !LibraryA )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0LL, -2147024809, 0x2Fu);
    return v6;
  }
  v18 = 0LL;
  DefaultDevice = CDeviceManager::GetDefaultDevice(v7, &v18);
  v6 = DefaultDevice;
  if ( DefaultDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, DefaultDevice, 0x21u);
    v16 = v18;
    if ( v18 )
      goto LABEL_15;
  }
  else
  {
    v11 = (CDummyRemotingSwapChain *)operator new(0x138uLL);
    if ( v11 )
    {
      v12 = CDummyRemotingSwapChain::CDummyRemotingSwapChain(v11, v18, a1, v21, v19, LibraryA);
      v13 = v12;
      if ( v12 )
        CMILRefCountImpl::AddReference((CDummyRemotingSwapChain *)((char *)v12 + 8));
    }
    else
    {
      v13 = 0LL;
    }
    v14 = CDummyRemotingSwapChain::Initialize(v13, v23);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x29u);
      if ( v13 )
        CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v13);
    }
    else
    {
      *a2 = (struct ILegacyRemotingSwapChain *)(((unsigned __int64)v13 + 56) & -(__int64)(v13 != 0LL));
    }
    if ( v18 )
    {
      v16 = v18;
LABEL_15:
      CD3DDevice::Release(v16);
    }
  }
  return v6;
}
