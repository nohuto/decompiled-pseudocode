/*
 * XREFs of ?RuntimeClassInitialize@CoverWindowAcc@@QEAAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@@Z @ 0x18041B814
 * Callers:
 *     ??$MakeAndInitialize@VCoverWindowAcc@@V1@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragment@@@Details@WRL@Microsoft@@YAJPEAPEAVCoverWindowAcc@@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragment@@@Z @ 0x18041AF08 (--$MakeAndInitialize@VCoverWindowAcc@@V1@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragmen.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180012934 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180058E00 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$As@UICoverWindowAcc@@@?$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICoverWindowAcc@@@WRL@Microsoft@@@Details@12@@Z @ 0x180414750 (--$As@UICoverWindowAcc@@@-$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ?CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@PEAPEAX@Z @ 0x18041B1F0 (-CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@P.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CoverWindowAcc::RuntimeClassInitialize(
        CoverWindowAcc *this,
        HWND a2,
        const unsigned __int16 *a3,
        IRawElementProviderSimple *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  LANGID ThreadUILanguage; // ax
  bool v12; // r12
  const unsigned __int16 *v13; // r14
  const unsigned __int16 *v14; // rdx
  int Instance; // eax
  __int64 v16; // rdx
  HRESULT v17; // eax
  HRESULT v18; // eax
  HRESULT v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  IRawElementProviderSimple *pProvider; // [rsp+60h] [rbp+30h] BYREF

  if ( *((IRawElementProviderSimple **)this + 5) != a4 )
  {
    pProvider = a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&pProvider);
    pProvider = (IRawElementProviderSimple *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
  }
  *((_QWORD *)this + 12) = a2;
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (LPVOID *)this + 9,
         (__int64)a3,
         0xFFFFFFFFFFFFFFFFuLL);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  if ( !*((_QWORD *)this + 5) )
  {
    ThreadUILanguage = GetThreadUILanguage();
    v12 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
    pProvider = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
    v13 = L"TabletModeCoverWindow_EdgeSwitch";
    v14 = L"TabletModeCoverWindow_EdgeActionCenter";
    if ( !v12 )
      v14 = L"TabletModeCoverWindow_EdgeSwitch";
    Instance = CoverWindowAcc_CreateInstance(
                 0LL,
                 v14,
                 (struct IRawElementProviderFragment *)this + 1,
                 &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
                 (void **)&pProvider);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v16 = 92LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
      return v9;
    }
    Instance = Microsoft::WRL::ComPtr<IRawElementProviderSimple>::As<ICoverWindowAcc>(&pProvider, (__int64 *)this + 6);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v16 = 93LL;
      goto LABEL_27;
    }
    v17 = UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildAdded, 0LL, 0);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
    Instance = CoverWindowAcc_CreateInstance(
                 0LL,
                 L"TabletModeCoverWindow_EdgeTop",
                 (struct IRawElementProviderFragment *)this + 1,
                 &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
                 (void **)&pProvider);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v16 = 96LL;
      goto LABEL_27;
    }
    Instance = Microsoft::WRL::ComPtr<IRawElementProviderSimple>::As<ICoverWindowAcc>(&pProvider, (__int64 *)this + 7);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v16 = 97LL;
      goto LABEL_27;
    }
    v18 = UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildAdded, 0LL, 0);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x62,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)(unsigned int)v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
    if ( !v12 )
      v13 = L"TabletModeCoverWindow_EdgeActionCenter";
    Instance = CoverWindowAcc_CreateInstance(
                 0LL,
                 v13,
                 (struct IRawElementProviderFragment *)this + 1,
                 &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
                 (void **)&pProvider);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v16 = 100LL;
      goto LABEL_27;
    }
    Instance = Microsoft::WRL::ComPtr<IRawElementProviderSimple>::As<ICoverWindowAcc>(&pProvider, (__int64 *)this + 8);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v16 = 101LL;
      goto LABEL_27;
    }
    v19 = UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildAdded, 0LL, 0);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x66,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)(unsigned int)v19);
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
  }
  return 0LL;
}
