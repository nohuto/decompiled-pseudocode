/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180007C3C
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180008104 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18000405C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180005708 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x1800057B0 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800070B4 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180007290 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000FDB4 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180040660 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
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
  int v12; // edx
  unsigned int v13; // eax
  char v14; // cl
  char v15; // cl
  const struct __WIL__WNF_TYPE_ID *v16; // r9
  int v17; // ebx
  unsigned int v18; // r14d
  __int64 v19; // r12
  char v20; // bl
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v22; // r9
  void *v23; // r14
  HANDLE ProcessHeap; // rax
  void *v25; // rbx
  HANDLE v26; // rax
  __int64 *v27; // [rsp+20h] [rbp-E0h]
  void *v28; // [rsp+20h] [rbp-E0h]
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v31; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+68h] [rbp-98h]
  _WORD v34[2]; // [rsp+80h] [rbp-80h] BYREF
  char v35; // [rsp+84h] [rbp-7Ch]
  __int16 v36; // [rsp+86h] [rbp-7Ah]
  char v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  void *v39; // [rsp+98h] [rbp-68h]
  __int128 v40; // [rsp+A0h] [rbp-60h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  __int16 v42; // [rsp+B8h] [rbp-48h]
  char v43; // [rsp+BAh] [rbp-46h]
  __int64 v44; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v47; // [rsp+D8h] [rbp-28h] BYREF
  char v48; // [rsp+DAh] [rbp-26h]
  unsigned int v49; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v50; // [rsp+E0h] [rbp-20h]
  __int128 v51; // [rsp+E8h] [rbp-18h]
  __int64 v52; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v53; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v54[2]; // [rsp+108h] [rbp+8h] BYREF
  char v55; // [rsp+118h] [rbp+18h] BYREF
  void **v56; // [rsp+120h] [rbp+20h] BYREF
  __int128 v57; // [rsp+128h] [rbp+28h]
  _WORD *v58; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *v59; // [rsp+188h] [rbp+88h]
  _WORD v60[2048]; // [rsp+190h] [rbp+90h] BYREF

  v4 = a3;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v45 = 0LL;
  while ( 1 )
  {
    LOBYTE(a3) = *((_BYTE *)v4 + 8);
    v8 = v4[3];
    LOBYTE(a2) = *((_BYTE *)v4 + 4);
    v9 = v4[1];
    v34[0] = *v4;
    v34[1] = v9;
    v35 = (char)a2;
    v36 = v8;
    v37 = (char)a3;
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
      v38 = v10;
    }
    else
    {
      v38 = 0LL;
    }
    v39 = 0LL;
    v40 = 0LL;
    lpMem = 0LL;
    v42 = 0;
    v43 = 0;
    v29 = 4096;
    v11 = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(v5, a2, a3, &v30, v60, &v29);
    wil::details::NtStatusToHr(v11, v12);
    if ( (_DWORD)v11 )
    {
      v13 = 0;
      v29 = 0;
      v30 = 0;
    }
    else
    {
      v13 = v29;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v34, v60, v13, (const char *)0x1000);
    if ( HIBYTE(v42) )
      break;
    v44 = 0LL;
    *(_QWORD *)&v32 = &v44;
    *((_QWORD *)&v32 + 1) = &v45;
    *(_QWORD *)&v33 = v34;
    v56 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v57 = v32;
    v58 = v34;
    v59 = (wil::details::in1diag3 *)&v56;
    v54[1] = &v55;
    v31 = (unsigned __int8 *)(*((_QWORD *)v4 + 3) + 10LL);
    v14 = *((_BYTE *)v4 + 4);
    LOWORD(v32) = v4[1];
    BYTE2(v32) = v14;
    DWORD1(v32) = 0;
    WORD4(v32) = 0;
    v33 = 0LL;
    v15 = *((_BYTE *)v4 + 8);
    v47 = v4[3];
    v48 = v15;
    v49 = 0;
    v50 = 0;
    v51 = 0LL;
LABEL_14:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v32,
              &v31,
              *((unsigned __int8 **)v4 + 4)) )
    {
      v17 = 0;
      v18 = DWORD1(v32);
      if ( DWORD1(v32) )
      {
        v19 = *((_QWORD *)&v33 + 1);
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v47,
                  &v31,
                  *((unsigned __int8 **)v4 + 4)) )
        {
          v29 = v49;
          v52 = v50;
          v53 = *((_QWORD *)&v51 + 1);
          v54[0] = WORD4(v32);
          v46 = v19;
          if ( !v59 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v27 = &v52;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, _QWORD *, __int64 *))(*(_QWORD *)v59 + 32LL))(
                  v59,
                  &v46,
                  v54,
                  &v53) )
          {
            if ( v59 )
              (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v59 + 24LL))(v59);
            v20 = 0;
            goto LABEL_28;
          }
          if ( ++v17 >= v18 )
            goto LABEL_14;
        }
      }
    }
    if ( v59 )
      (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v59 + 24LL))(v59);
    v20 = 1;
LABEL_28:
    if ( (_BYTE)v42 )
    {
      updated = wil_details_NtUpdateWnfStateData(v5, v39, (int)v40 - (int)v39, v16, v27, v30, 1u);
      if ( updated == -1073741823 )
      {
        ++v7;
        v20 = 0;
        goto LABEL_33;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v39, v40 - (_DWORD)v39, v22, v28, 0, 0);
    }
    v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
    v45 = v44;
LABEL_33:
    v23 = lpMem;
    lpMem = 0LL;
    if ( v23 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v23);
    }
    if ( v20 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v25 = lpMem;
  lpMem = 0LL;
  if ( v25 )
  {
    v26 = GetProcessHeap();
    HeapFree(v26, 0, v25);
  }
}
