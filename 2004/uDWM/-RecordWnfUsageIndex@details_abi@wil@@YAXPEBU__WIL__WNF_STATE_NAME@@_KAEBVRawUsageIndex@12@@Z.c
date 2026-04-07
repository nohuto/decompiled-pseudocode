/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1800404D8
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180030100 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18002F5D0 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x18002FE34 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180040660 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180040768 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180040788 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180042450 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800560E0 (_alloca_probe.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x18007FC30 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int64 v4; // rsi
  const struct __WIL__WNF_STATE_NAME *v5; // r15
  const struct __WIL__WNF_STATE_NAME *v7; // rdi
  const struct __WIL__WNF_TYPE_ID *v8; // rdx
  const void *v9; // r8
  unsigned int v10; // ebx
  int v11; // edx
  unsigned int v12; // eax
  char v13; // bl
  const struct __WIL__WNF_TYPE_ID *v14; // r9
  void *v15; // rcx
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v17; // r9
  void *v18; // rcx
  void *v19; // [rsp+20h] [rbp-E0h]
  void *v20; // [rsp+20h] [rbp-E0h]
  unsigned int v21; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+58h] [rbp-A8h]
  _BYTE *v26; // [rsp+68h] [rbp-98h]
  _BYTE v27[24]; // [rsp+70h] [rbp-90h] BYREF
  void *v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  void *v30; // [rsp+A0h] [rbp-60h]
  char v31; // [rsp+A8h] [rbp-58h]
  char v32; // [rsp+A9h] [rbp-57h]
  _BYTE v33[8]; // [rsp+B0h] [rbp-50h] BYREF
  void **v34; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v35; // [rsp+C0h] [rbp-40h]
  _BYTE *v36; // [rsp+D0h] [rbp-30h]
  void ***v37; // [rsp+120h] [rbp+20h]
  _BYTE v38[4096]; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v24 = 0LL;
  v7 = this;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v27,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v21 = 4096;
    v10 = wil_details_NtQueryWnfStateData(v7, v8, v9, &v22, v38, &v21);
    wil::details::NtStatusToHr((wil::details *)v10, v11);
    if ( v10 )
    {
      v12 = 0;
      v22 = 0;
      v21 = 0;
    }
    else
    {
      v12 = v21;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v27, v38, v12, 0x1000uLL);
    if ( v32 )
      break;
    v23 = 0LL;
    *(_QWORD *)&v25 = &v23;
    *((_QWORD *)&v25 + 1) = &v24;
    v26 = v27;
    v34 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v37 = &v34;
    v35 = v25;
    v36 = v27;
    v13 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)v33);
    if ( v31 )
    {
      updated = wil_details_NtUpdateWnfStateData(v7, v28, (int)v29 - (int)v28, v14, v19, v22, 1u);
      if ( updated == -1073741823 )
      {
        ++v4;
        v13 = 0;
        goto LABEL_7;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v7, v28, v29 - (_DWORD)v28, v17, v20, 0, 0);
    }
    v7 = (const struct __WIL__WNF_STATE_NAME *)((char *)v7 + 8);
    v24 = v23;
LABEL_7:
    v15 = v30;
    v30 = 0LL;
    if ( v15 )
      MemoryFree(v15);
    if ( v13 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  v18 = v30;
  v30 = 0LL;
  if ( v18 )
    MemoryFree(v18);
}
