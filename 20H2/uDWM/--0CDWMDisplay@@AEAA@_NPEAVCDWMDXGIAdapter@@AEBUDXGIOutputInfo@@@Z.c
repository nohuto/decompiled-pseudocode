/*
 * XREFs of ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180037D54
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180037958 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?ForceHighColor@@YAKXZ @ 0x180037FDC (-ForceHighColor@@YAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180038024 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details@wil@@QEAAX_NW4Re.c)
 *     ?StringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1800380B8 (-StringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     memset_0 @ 0x1800563D2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

CDWMDisplay *__fastcall CDWMDisplay::CDWMDisplay(
        CDWMDisplay *this,
        char a2,
        struct CDWMDXGIAdapter *a3,
        const struct DXGIOutputInfo *a4)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // rax
  bool v11; // al
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  CDWMDisplay *result; // rax
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  int v24; // ebx
  __int64 v25; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v26[8]; // [rsp+28h] [rbp-71h] BYREF
  _BYTE v27[96]; // [rsp+30h] [rbp-69h] BYREF
  int v28; // [rsp+90h] [rbp-9h]
  int v29; // [rsp+94h] [rbp-5h]

  v25 = 0LL;
  memset_0(v27, 0, 0x98uLL);
  *(_DWORD *)this = 1;
  *((_BYTE *)this + 164) = (*((_DWORD *)a4 + 50) & 2) != 0;
  *((_QWORD *)this + 21) = *((_QWORD *)a3 + 42);
  *((_DWORD *)this + 44) = *((_DWORD *)a4 + 32);
  v10 = *((_QWORD *)a4 + 13);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 2) = v10;
  *((_BYTE *)this + 220) = (*((_DWORD *)a4 + 50) & 4) != 0;
  *((_BYTE *)this + 221) = (*((_DWORD *)a4 + 50) & 8) != 0;
  v11 = a2
     && (*(int (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)a4 + 1) + 96LL))(*((_QWORD *)a4 + 1), v26) >= 0
     && (v26[0] & 0x10) != 0;
  *((_BYTE *)this + 223) = v11;
  StringCbCopyNW((unsigned __int16 *)this + 48, v8, (const unsigned __int16 *)a4 + 102, v9);
  v12 = 2;
  if ( ((*((_DWORD *)a4 + 40) - 2) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)this + 45) = *((_DWORD *)a4 + 35);
    v13 = *((_DWORD *)a4 + 36);
  }
  else
  {
    *((_DWORD *)this + 45) = *((_DWORD *)a4 + 36);
    v13 = *((_DWORD *)a4 + 35);
  }
  *((_DWORD *)this + 46) = v13;
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a4)(
         *(_QWORD *)a4,
         &GUID_068346e8_aaec_4b84_add7_137f513f77a1,
         &v25) < 0
    || (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 216LL))(v25, v27) < 0 )
  {
    v29 = 0;
    v28 = 8;
  }
  if ( v25 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    v25 = 0LL;
  }
  if ( ForceHighColor() )
  {
    v28 = 10;
    v29 = 12;
  }
  v14 = ForceHighColor() - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 != 1 )
        v12 = *((_DWORD *)a4 + 70);
    }
    else
    {
      v12 = 1;
    }
  }
  else
  {
    v12 = (*((_DWORD *)a3 + 74) != 32902) + 1;
  }
  if ( !v12 )
    goto LABEL_16;
  v24 = v12 - 1;
  if ( !v24 )
  {
    *((_DWORD *)this + 49) = 24;
    *((_DWORD *)this + 53) = 12;
    goto LABEL_17;
  }
  if ( (unsigned int)(v24 - 1) <= 1 )
  {
    *((_DWORD *)this + 49) = 10;
    *((_DWORD *)this + 53) = 1;
  }
  else
  {
LABEL_16:
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_RgbaSwapChains>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetImpl'::`2'::impl,
      0LL);
    *((_DWORD *)this + 49) = 87;
    *((_DWORD *)this + 53) = 0;
  }
LABEL_17:
  *((_DWORD *)this + 47) = *((_DWORD *)a4 + 38);
  *((_DWORD *)this + 48) = *((_DWORD *)a4 + 39);
  *((_DWORD *)this + 52) = *((_DWORD *)a4 + 40);
  *((_DWORD *)this + 54) = *((_DWORD *)a4 + 67);
  v16 = *((_DWORD *)a4 + 41);
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 50) = v16;
  *((_DWORD *)this + 8) = *((_DWORD *)a4 + 35);
  *((_DWORD *)this + 9) = *((_DWORD *)a4 + 36);
  result = this;
  v18 = *((_DWORD *)a4 + 47);
  v19 = *((_DWORD *)a4 + 48);
  v20 = *((_DWORD *)a4 + 49);
  *((_DWORD *)this + 14) = *((_DWORD *)a4 + 46);
  *((_DWORD *)this + 15) = v18;
  *((_DWORD *)this + 16) = v19;
  *((_DWORD *)this + 17) = v20;
  v21 = *((_DWORD *)a4 + 43);
  v22 = *((_DWORD *)a4 + 44);
  v23 = *((_DWORD *)a4 + 45);
  *((_DWORD *)this + 10) = *((_DWORD *)a4 + 42);
  *((_DWORD *)this + 11) = v21;
  *((_DWORD *)this + 12) = v22;
  *((_DWORD *)this + 13) = v23;
  return result;
}
