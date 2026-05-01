/*
 * XREFs of ?StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1801490F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000B688 (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180135D48 (WPP_SF_.c)
 *     ?_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PEAPEAU2@@Z @ 0x18014BF58 (-_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::StealForegroundActivateGlom(
        IUnknown **this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **))
{
  __int64 (__fastcall *v4)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **); // rbx
  int AnotherGlom; // edi
  char v6; // si
  RTL_SRWLOCK *v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  struct IImmersiveApplicationInternal *v11; // [rsp+58h] [rbp+38h] BYREF
  __int64 v12; // [rsp+60h] [rbp+40h] BYREF
  PSRWLOCK v13; // [rsp+68h] [rbp+48h]

  v11 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  AnotherGlom = v4((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v11);
  if ( AnotherGlom < 0 )
    goto LABEL_21;
  v6 = 0;
  v7 = CApplicationManagerUtility::g_pIAMGlobals;
  v13 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v11 + 416LL))(v11) )
  {
    v9 = WPP_GLOBAL_Control;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      goto LABEL_14;
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids);
  }
  else
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    AnotherGlom = CAppViewManager::_FindAnotherGlom(this - 5, v11, v8, &v12);
    if ( AnotherGlom >= 0 )
    {
      v6 = 1;
    }
    else
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids);
      AnotherGlom = -2147024891;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  v9 = WPP_GLOBAL_Control;
LABEL_14:
  if ( v7 )
  {
    ReleaseSRWLockExclusive(v7);
    v9 = WPP_GLOBAL_Control;
  }
  if ( v6 )
  {
    if ( (*((_BYTE *)v9 + 28) & 1) != 0 && *((_BYTE *)v9 + 25) >= 4u )
      WPP_SF_(v9[2], 0x23u, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
    AnotherGlom = CAppViewManager::_TrySwitchToApplication(this - 5, v11, 0LL);
  }
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return (unsigned int)AnotherGlom;
}
