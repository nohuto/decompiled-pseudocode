/*
 * XREFs of ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18000CBC8
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18002D8F8 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?StringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18000CB7C (-StringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?ForceHighColor@@YAKXZ @ 0x18000CE50 (-ForceHighColor@@YAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000CE98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details@wil@@QEAAX_NW4Re.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     memset_0 @ 0x180056082 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CDWMDisplay *__fastcall CDWMDisplay::CDWMDisplay(
        CDWMDisplay *this,
        char a2,
        struct CDWMDXGIAdapter *a3,
        const struct DXGIOutputInfo *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  bool v10; // al
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  CDWMDisplay *result; // rax
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  int v23; // ebx
  __int64 v24; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v25[8]; // [rsp+28h] [rbp-71h] BYREF
  _BYTE v26[96]; // [rsp+30h] [rbp-69h] BYREF
  int v27; // [rsp+90h] [rbp-9h]
  int v28; // [rsp+94h] [rbp-5h]

  v24 = 0LL;
  memset_0(v26, 0, 0x98uLL);
  *(_DWORD *)this = 1;
  *((_BYTE *)this + 164) = (*((_DWORD *)a4 + 50) & 2) != 0;
  *((_QWORD *)this + 21) = *((_QWORD *)a3 + 42);
  *((_DWORD *)this + 44) = *((_DWORD *)a4 + 32);
  v9 = *((_QWORD *)a4 + 13);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 2) = v9;
  *((_BYTE *)this + 220) = (*((_DWORD *)a4 + 50) & 4) != 0;
  *((_BYTE *)this + 221) = (*((_DWORD *)a4 + 50) & 8) != 0;
  v10 = a2
     && (*(int (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)a4 + 1) + 96LL))(*((_QWORD *)a4 + 1), v25) >= 0
     && (v25[0] & 0x10) != 0;
  *((_BYTE *)this + 223) = v10;
  StringCbCopyNW((char *)this + 96, v8, (char *)a4 + 204);
  v11 = 2;
  if ( ((*((_DWORD *)a4 + 40) - 2) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)this + 45) = *((_DWORD *)a4 + 35);
    v12 = *((_DWORD *)a4 + 36);
  }
  else
  {
    *((_DWORD *)this + 45) = *((_DWORD *)a4 + 36);
    v12 = *((_DWORD *)a4 + 35);
  }
  *((_DWORD *)this + 46) = v12;
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a4)(
         *(_QWORD *)a4,
         &GUID_068346e8_aaec_4b84_add7_137f513f77a1,
         &v24) < 0
    || (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 216LL))(v24, v26) < 0 )
  {
    v28 = 0;
    v27 = 8;
  }
  if ( v24 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v24 = 0LL;
  }
  if ( ForceHighColor() )
  {
    v27 = 10;
    v28 = 12;
  }
  v13 = ForceHighColor() - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
        v11 = *((_DWORD *)a4 + 70);
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v11 = (*((_DWORD *)a3 + 74) != 32902) + 1;
  }
  if ( !v11 )
    goto LABEL_16;
  v23 = v11 - 1;
  if ( !v23 )
  {
    *((_DWORD *)this + 49) = 24;
    *((_DWORD *)this + 53) = 12;
    goto LABEL_17;
  }
  if ( (unsigned int)(v23 - 1) <= 1 )
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
  v15 = *((_DWORD *)a4 + 41);
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 50) = v15;
  *((_DWORD *)this + 8) = *((_DWORD *)a4 + 35);
  *((_DWORD *)this + 9) = *((_DWORD *)a4 + 36);
  result = this;
  v17 = *((_DWORD *)a4 + 47);
  v18 = *((_DWORD *)a4 + 48);
  v19 = *((_DWORD *)a4 + 49);
  *((_DWORD *)this + 14) = *((_DWORD *)a4 + 46);
  *((_DWORD *)this + 15) = v17;
  *((_DWORD *)this + 16) = v18;
  *((_DWORD *)this + 17) = v19;
  v20 = *((_DWORD *)a4 + 43);
  v21 = *((_DWORD *)a4 + 44);
  v22 = *((_DWORD *)a4 + 45);
  *((_DWORD *)this + 10) = *((_DWORD *)a4 + 42);
  *((_DWORD *)this + 11) = v20;
  *((_DWORD *)this + 12) = v21;
  *((_DWORD *)this + 13) = v22;
  return result;
}
