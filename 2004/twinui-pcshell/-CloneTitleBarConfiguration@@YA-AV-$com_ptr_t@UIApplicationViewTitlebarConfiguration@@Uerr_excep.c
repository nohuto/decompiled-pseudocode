/*
 * XREFs of ?CloneTitleBarConfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180064964
 * Callers:
 *     ?ReconcileTitleBarconfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@AEBUAppTitlebarConfiguration@@PEAUIApplicationViewTitlebarConfiguration@@W4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x180064908 (-ReconcileTitleBarconfiguration@@YA-AV-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_e.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x1800945A4 (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CloneTitleBarConfiguration(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  int v14; // [rsp+20h] [rbp-20h] BYREF
  int v15; // [rsp+24h] [rbp-1Ch] BYREF
  int v16; // [rsp+28h] [rbp-18h] BYREF
  int v17; // [rsp+2Ch] [rbp-14h] BYREF
  int v18; // [rsp+30h] [rbp-10h] BYREF
  int v19; // [rsp+34h] [rbp-Ch] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  _QWORD *v22; // [rsp+60h] [rbp+20h] BYREF
  int v23; // [rsp+68h] [rbp+28h] BYREF
  int v24; // [rsp+70h] [rbp+30h] BYREF
  int v25; // [rsp+78h] [rbp+38h] BYREF

  v22 = a1;
  wil::MakeAndInitializeOrThrow<ApplicationViewTitlebarConfiguration,>(&v20);
  if ( (*(int (__fastcall **)(__int64, int *, _QWORD **))(*(_QWORD *)a2 + 48LL))(a2, &v23, &v22) >= 0 )
  {
    v4 = v20;
    v5 = (int)v22;
    if ( v23 )
    {
      *(_DWORD *)(v20 + 52) = v23;
      *(_DWORD *)(v4 + 56) = v5;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18D,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\applicationviewoperationhelpers.h",
        (const char *)0x80070057LL,
        v14);
    }
  }
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 112LL))(a2, &v24) >= 0 )
    *(_DWORD *)(v20 + 88) = v24;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 32LL))(a2, &v25) >= 0 )
  {
    v6 = v20;
    v7 = v25;
    *(_BYTE *)(v20 + 48) = 1;
    *(_BYTE *)(v6 + 49) = v7 != 0;
  }
  if ( (*(int (__fastcall **)(__int64, int *, int *))(*(_QWORD *)a2 + 64LL))(a2, &v15, &v14) >= 0 )
  {
    v8 = v20;
    v9 = v14;
    if ( v15 )
    {
      *(_DWORD *)(v20 + 60) = v15;
      *(_DWORD *)(v8 + 64) = v9;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19E,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\applicationviewoperationhelpers.h",
        (const char *)0x80070057LL,
        v14);
    }
  }
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v16) >= 0 )
    *(_DWORD *)(v20 + 76) = v16;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 96LL))(a2, &v17) >= 0 )
  {
    v10 = v20;
    *(_DWORD *)(v20 + 80) = v17;
    *(_BYTE *)(v10 + 84) = 1;
  }
  if ( (*(int (__fastcall **)(__int64, int *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v19, &v18) >= 0 )
  {
    v11 = v20;
    v12 = v18;
    if ( v19 )
    {
      *(_DWORD *)(v20 + 68) = v19;
      *(_DWORD *)(v11 + 72) = v12;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D4,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\applicationviewoperationhelpers.h",
        (const char *)0x80070057LL,
        v14);
    }
  }
  *a1 = v20;
  return a1;
}
