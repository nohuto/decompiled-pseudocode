/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180005EA0
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180006368 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000228C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18000335C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180004044 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x1800040EC (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000507C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180005258 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x180044200 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180045D50 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int16 *v4; // rdi
  const struct __WIL__WNF_STATE_NAME *v5; // rsi
  const struct __WIL__WNF_STATE_NAME *v6; // r13
  unsigned __int64 v7; // r15
  unsigned int v8; // r9d
  unsigned __int16 v9; // cx
  __int64 v10; // rax
  wil::details *v11; // rbx
  unsigned int v12; // eax
  char v13; // cl
  char v14; // cl
  const struct __WIL__WNF_TYPE_ID *v15; // r9
  int v16; // ebx
  unsigned int v17; // r14d
  __int64 v18; // r12
  char v19; // bl
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v21; // r9
  void *v22; // r14
  HANDLE ProcessHeap; // rax
  void *v24; // rbx
  HANDLE v25; // rax
  __int64 *v26; // [rsp+20h] [rbp-E0h]
  void *v27; // [rsp+20h] [rbp-E0h]
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v30; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+68h] [rbp-98h]
  _WORD v33[2]; // [rsp+80h] [rbp-80h] BYREF
  char v34; // [rsp+84h] [rbp-7Ch]
  __int16 v35; // [rsp+86h] [rbp-7Ah]
  char v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  void *v38; // [rsp+98h] [rbp-68h]
  __int128 v39; // [rsp+A0h] [rbp-60h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  __int16 v41; // [rsp+B8h] [rbp-48h]
  char v42; // [rsp+BAh] [rbp-46h]
  __int64 v43; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v46; // [rsp+D8h] [rbp-28h] BYREF
  char v47; // [rsp+DAh] [rbp-26h]
  unsigned int v48; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v49; // [rsp+E0h] [rbp-20h]
  __int128 v50; // [rsp+E8h] [rbp-18h]
  __int64 v51; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v52; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v53[2]; // [rsp+108h] [rbp+8h] BYREF
  char v54; // [rsp+118h] [rbp+18h] BYREF
  void **v55; // [rsp+120h] [rbp+20h] BYREF
  __int128 v56; // [rsp+128h] [rbp+28h]
  _WORD *v57; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *v58; // [rsp+188h] [rbp+88h]
  _WORD v59[2048]; // [rsp+190h] [rbp+90h] BYREF

  v4 = a3;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v44 = 0LL;
  while ( 1 )
  {
    LOBYTE(a3) = *((_BYTE *)v4 + 8);
    v8 = v4[3];
    LOBYTE(a2) = *((_BYTE *)v4 + 4);
    v9 = v4[1];
    v33[0] = *v4;
    v33[1] = v9;
    v34 = (char)a2;
    v35 = v8;
    v36 = (char)a3;
    if ( (_WORD)v8 )
    {
      v10 = v8;
      if ( (_BYTE)a3 == 1 )
      {
        v10 = v8 + 2LL;
      }
      else if ( (_BYTE)a3 == 2 )
      {
        v10 = v8 + 4LL;
      }
      v37 = v10;
    }
    else
    {
      v37 = 0LL;
    }
    v38 = 0LL;
    v39 = 0LL;
    lpMem = 0LL;
    v41 = 0;
    v42 = 0;
    v28 = 4096;
    v11 = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(v5, a2, a3, &v29, v59, &v28);
    wil::details::NtStatusToHr(v11);
    if ( (_DWORD)v11 )
    {
      v12 = 0;
      v28 = 0;
      v29 = 0;
    }
    else
    {
      v12 = v28;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v33, v59, v12, (const char *)0x1000);
    if ( HIBYTE(v41) )
      break;
    v43 = 0LL;
    *(_QWORD *)&v31 = &v43;
    *((_QWORD *)&v31 + 1) = &v44;
    *(_QWORD *)&v32 = v33;
    v55 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v56 = v31;
    v57 = v33;
    v58 = (wil::details::in1diag3 *)&v55;
    v53[1] = &v54;
    v30 = (unsigned __int8 *)(*((_QWORD *)v4 + 3) + 10LL);
    v13 = *((_BYTE *)v4 + 4);
    LOWORD(v31) = v4[1];
    BYTE2(v31) = v13;
    DWORD1(v31) = 0;
    WORD4(v31) = 0;
    v32 = 0LL;
    v14 = *((_BYTE *)v4 + 8);
    v46 = v4[3];
    v47 = v14;
    v48 = 0;
    v49 = 0;
    v50 = 0LL;
LABEL_14:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v31,
              &v30,
              *((unsigned __int8 **)v4 + 4)) )
    {
      v16 = 0;
      v17 = DWORD1(v31);
      if ( DWORD1(v31) )
      {
        v18 = *((_QWORD *)&v32 + 1);
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v46,
                  &v30,
                  *((unsigned __int8 **)v4 + 4)) )
        {
          v28 = v48;
          v51 = v49;
          v52 = *((_QWORD *)&v50 + 1);
          v53[0] = WORD4(v31);
          v45 = v18;
          if ( !v58 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v26 = &v51;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, _QWORD *, __int64 *))(*(_QWORD *)v58 + 32LL))(
                  v58,
                  &v45,
                  v53,
                  &v52) )
          {
            if ( v58 )
              (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v58 + 24LL))(v58);
            v19 = 0;
            goto LABEL_28;
          }
          if ( ++v16 >= v17 )
            goto LABEL_14;
        }
      }
    }
    if ( v58 )
      (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v58 + 24LL))(v58);
    v19 = 1;
LABEL_28:
    if ( (_BYTE)v41 )
    {
      updated = wil_details_NtUpdateWnfStateData(v5, v38, (int)v39 - (int)v38, v15, v26, v29, 1u);
      if ( updated == -1073741823 )
      {
        ++v7;
        v19 = 0;
        goto LABEL_33;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v38, v39 - (_DWORD)v38, v21, v27, 0, 0);
    }
    v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
    v44 = v43;
LABEL_33:
    v22 = lpMem;
    lpMem = 0LL;
    if ( v22 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v22);
    }
    if ( v19 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v24 = lpMem;
  lpMem = 0LL;
  if ( v24 )
  {
    v25 = GetProcessHeap();
    HeapFree(v25, 0, v24);
  }
}
