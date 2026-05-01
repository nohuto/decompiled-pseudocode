/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180038778
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180039960 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18003857C (-MemoryFree@@YAXPEAX@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1800392E4 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x180039AA4 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18003A5F8 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18003A700 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     wil_details_NtQueryWnfStateData @ 0x180046790 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x180046818 (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x180047B80 (_alloca_probe.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int64 v4; // rsi
  wil::details_abi *v5; // r15
  wil::details_abi *v7; // rdi
  int v8; // edx
  int v9; // r8d
  wil::details *WnfStateData; // rbx
  int v11; // edx
  unsigned int v12; // eax
  char v13; // bl
  void *v14; // rcx
  int updated; // eax
  void *v16; // rcx
  int v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+58h] [rbp-A8h]
  _BYTE *v23; // [rsp+68h] [rbp-98h]
  _BYTE v24[24]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  void *v27; // [rsp+A0h] [rbp-60h]
  char v28; // [rsp+A8h] [rbp-58h]
  char v29; // [rsp+A9h] [rbp-57h]
  _BYTE v30[8]; // [rsp+B0h] [rbp-50h] BYREF
  void **v31; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v32; // [rsp+C0h] [rbp-40h]
  _BYTE *v33; // [rsp+D0h] [rbp-30h]
  void ***v34; // [rsp+120h] [rbp+20h]
  _BYTE v35[4096]; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v21 = 0LL;
  v7 = this;
  while ( 1 )
  {
    LOBYTE(a4) = *((_BYTE *)a3 + 4);
    LOBYTE(v18) = *((_BYTE *)a3 + 8);
    LOWORD(v17) = a3[3];
    wil::details_abi::RawUsageIndex::RawUsageIndex(v24, *a3, a3[1], a4, v17, v18);
    LODWORD(v19) = 4096;
    WnfStateData = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(
                                                   (_DWORD)v7,
                                                   v8,
                                                   v9,
                                                   (unsigned int)&v19 + 4,
                                                   (__int64)v35,
                                                   (__int64)&v19);
    wil::details::NtStatusToHr(WnfStateData, v11);
    if ( (_DWORD)WnfStateData )
    {
      v12 = 0;
      v19 = 0LL;
    }
    else
    {
      v12 = v19;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v24, v35, v12, 0x1000uLL);
    if ( v29 )
      break;
    v20 = 0LL;
    *(_QWORD *)&v22 = &v20;
    *((_QWORD *)&v22 + 1) = &v21;
    v23 = v24;
    v31 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v34 = &v31;
    v32 = v22;
    v33 = v24;
    v13 = wil::details_abi::RawUsageIndex::Iterate(a3, v30);
    if ( v28 )
    {
      updated = wil_details_NtUpdateWnfStateData((_DWORD)v7, v25, (int)v26 - (int)v25, (_DWORD)a4, v17, HIDWORD(v19), 1);
      if ( updated == -1073741823 )
      {
        ++v4;
        v13 = 0;
        goto LABEL_7;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v7, v25, v26 - v25, (_DWORD)a4, v17, 0, 0);
    }
    v7 = (wil::details_abi *)((char *)v7 + 8);
    v21 = v20;
LABEL_7:
    v14 = v27;
    v27 = 0LL;
    if ( v14 )
      MemoryFree(v14);
    if ( v13 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  v16 = v27;
  v27 = 0LL;
  if ( v16 )
    MemoryFree(v16);
}
