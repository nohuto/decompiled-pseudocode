/*
 * XREFs of ?SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z @ 0x180164060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x180080C98 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VCClassicWindowFinderByAppID@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByAppID@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180162228 (--$FindEx@VCClassicWindowFinderByAppID@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::SwitchToThisApp(CClassicWindowManager *this, const unsigned __int16 *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  HWND v6; // rdx
  CApplicationManagerUtility *LastActiveVisiblePopupOrSelf; // rax
  __int64 v9; // [rsp+20h] [rbp-28h]
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+70h] [rbp+28h] BYREF
  CApplicationManagerUtility *v12; // [rsp+78h] [rbp+30h] BYREF
  __int64 v13; // [rsp+80h] [rbp+38h] BYREF
  const unsigned __int16 *v14; // [rsp+88h] [rbp+40h] BYREF

  v12 = 0LL;
  v11 = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v14 = a2;
  while ( 1 )
  {
    v13 = 0LL;
    v4 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByAppID>(
           (_QWORD *)this + 13,
           &v14,
           &v13,
           v10,
           v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    if ( v4 < 0 )
      break;
    v5 = *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * v10[0]);
    v4 = (*(__int64 (__fastcall **)(__int64, CApplicationManagerUtility **, int *))(*(_QWORD *)v5 + 40LL))(
           v5,
           &v12,
           &v11);
    if ( v4 < 0 || v11 )
      break;
    (*(void (__fastcall **)(char *, CApplicationManagerUtility *))(*((_QWORD *)this - 2) + 72LL))(
      (char *)this - 16,
      v12);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(v12, v6);
    SwitchToThisWindow((HWND)LastActiveVisiblePopupOrSelf, 1);
  }
  return (unsigned int)v4;
}
