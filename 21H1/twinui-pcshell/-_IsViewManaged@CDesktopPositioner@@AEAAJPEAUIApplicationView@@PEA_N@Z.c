/*
 * XREFs of ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800432F4
 * Callers:
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180043010 (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18004873C (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180043484 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::_IsViewManaged(CDesktopPositioner *this, struct IApplicationView *a2, bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  bool v7; // al
  struct IImmersiveApplication **v8; // r8
  int v9; // eax
  CDesktopPositioner *v10; // rbx
  int v11; // eax
  bool v12; // di
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // [rsp+20h] [rbp-50h]
  __int128 v17; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+40h] [rbp-30h]
  PROPVARIANT pvar[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  CDesktopPositioner *pfRet; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+38h] BYREF
  CDesktopPositioner *v23; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+48h] BYREF

  pfRet = this;
  *a3 = 0;
  v24 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL))(a2, &v24);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C0,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v5,
      v16);
  }
  else
  {
    v7 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24) == 0;
    *a3 = v7;
    if ( !v7 )
    {
LABEL_14:
      v6 = 0;
      goto LABEL_15;
    }
    v22 = 0LL;
    if ( (int)ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)&v22, v8) < 0 )
    {
LABEL_12:
      v13 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      goto LABEL_14;
    }
    v23 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, CDesktopPositioner **))(*(_QWORD *)v22 + 48LL))(
           v22,
           0LL,
           &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
           &v23);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v10 = v23;
      pfRet = v23;
      if ( v23 )
        (*(void (__fastcall **)(CDesktopPositioner *))(*(_QWORD *)v23 + 8LL))(v23);
      LOWORD(pvar[0]) = 0;
      v17 = PKEY_ImmersiveApplication_IsPartOfTabDragOperation;
      v18 = 12;
      v11 = (*(__int64 (__fastcall **)(CDesktopPositioner *, __int128 *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
              v10,
              &v17,
              pvar);
      v12 = 1;
      if ( v11 >= 0 )
      {
        if ( !LOWORD(pvar[0]) )
          v11 = -2147023728;
        if ( v11 >= 0 )
        {
          LODWORD(pfRet) = 0;
          if ( LOWORD(pvar[0]) )
          {
            if ( PropVariantToBoolean(pvar, (BOOL *)&pfRet) >= 0 )
              v12 = (_DWORD)pfRet == 0;
          }
        }
      }
      PropVariantClear(pvar);
      *a3 = v12;
      (*(void (__fastcall **)(CDesktopPositioner *))(*(_QWORD *)v10 + 16LL))(v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      goto LABEL_12;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C9,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v9,
      v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  }
LABEL_15:
  v14 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v6;
}
