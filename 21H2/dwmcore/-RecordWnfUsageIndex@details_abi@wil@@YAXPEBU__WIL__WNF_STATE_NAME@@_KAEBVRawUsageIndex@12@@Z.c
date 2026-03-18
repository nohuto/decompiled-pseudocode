/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1800F3AD4
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180029744 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x18001A258 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180028D20 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x180029630 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18002A324 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800F3C8C (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1800F3D94 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800F76D8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
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
  void *v13; // rdx
  void *v14; // rdx
  char v15; // bl
  const struct __WIL__WNF_TYPE_ID *v16; // r9
  wil::details *v17; // rcx
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v19; // r9
  wil::details *v20; // rcx
  void *v21; // [rsp+20h] [rbp-E0h]
  void *v22; // [rsp+20h] [rbp-E0h]
  unsigned int v23; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+60h] [rbp-A0h]
  _BYTE *v28; // [rsp+70h] [rbp-90h]
  _BYTE v29[24]; // [rsp+80h] [rbp-80h] BYREF
  void *v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+A0h] [rbp-60h]
  wil::details *v32; // [rsp+B0h] [rbp-50h]
  char v33; // [rsp+B8h] [rbp-48h]
  char v34; // [rsp+B9h] [rbp-47h]
  _BYTE v35[8]; // [rsp+C0h] [rbp-40h] BYREF
  void **v36; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v37; // [rsp+D0h] [rbp-30h]
  _BYTE *v38; // [rsp+E0h] [rbp-20h]
  void ***v39; // [rsp+130h] [rbp+30h]
  _BYTE v40[4096]; // [rsp+140h] [rbp+40h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v26 = 0LL;
  v7 = this;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v29,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v23 = 4096;
    v10 = wil_details_NtQueryWnfStateData(v7, v8, v9, &v24, v40, &v23);
    wil::details::NtStatusToHr((wil::details *)v10, v11);
    if ( v10 )
    {
      v12 = 0;
      v24 = 0;
      v23 = 0;
    }
    else
    {
      v12 = v23;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v29, v40, v12, 0x1000uLL);
    if ( v34 )
      break;
    v25 = 0LL;
    *(_QWORD *)&v27 = &v25;
    *((_QWORD *)&v27 + 1) = &v26;
    v28 = v29;
    v36 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v39 = &v36;
    v37 = v27;
    v38 = v29;
    v15 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)v35);
    if ( v33 )
    {
      updated = wil_details_NtUpdateWnfStateData(v7, v30, v31 - (int)v30, v16, v21, v24, 1u);
      if ( updated == -1073741823 )
      {
        ++v4;
        v15 = 0;
        goto LABEL_7;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v7, v30, v31 - (_DWORD)v30, v19, v22, 0, 0);
    }
    v7 = (const struct __WIL__WNF_STATE_NAME *)((char *)v7 + 8);
    v26 = v25;
LABEL_7:
    v17 = v32;
    v32 = 0LL;
    if ( v17 )
      wil::details::FreeProcessHeap(v17, v14);
    if ( v15 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  v20 = v32;
  v32 = 0LL;
  if ( v20 )
    wil::details::FreeProcessHeap(v20, v13);
}
