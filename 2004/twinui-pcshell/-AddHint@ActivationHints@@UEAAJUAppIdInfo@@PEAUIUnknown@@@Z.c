/*
 * XREFs of ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x1803CA510
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x180055890 (-DeleteExpiredHints@ActivationHints@@AEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180055940 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C5D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@UHint@ActivationHints@@@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAAPEAUHint@ActivationHints@@QEAU23@$$QEAU23@@Z @ 0x1803C9F1C (--$_Emplace_reallocate@UHint@ActivationHints@@@-$vector@UHint@ActivationHints@@V-$allocator@UHin.c)
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x1803CA300 (--1Hint@ActivationHints@@QEAA@XZ.c)
 *     ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x1803CAE50 (-erase@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@QEAA-AV-$.c)
 *     ?EnableMarshalByValue@OS@@YAXPEAUIUnknown@@@Z @ 0x1803CDF44 (-EnableMarshalByValue@OS@@YAXPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall ActivationHints::AddHint(__int64 a1, struct IUnknown *a2, OS *a3)
{
  WCHAR *v7; // r14
  WCHAR *lpVtbl; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-98h] BYREF
  __int128 v12; // [rsp+30h] [rbp-88h] BYREF
  __m128i si128; // [rsp+40h] [rbp-78h]
  __int128 v14; // [rsp+50h] [rbp-68h] BYREF
  __m128i v15; // [rsp+60h] [rbp-58h]
  __int64 v16; // [rsp+70h] [rbp-48h] BYREF
  __int64 v17; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( a2->lpVtbl || a2[1].lpVtbl )
  {
    OS::EnableMarshalByValue(a3, a2);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
    v11 = a1 + 48;
    ActivationHints::DeleteExpiredHints((ActivationHints *)(a1 - 104));
    v7 = (WCHAR *)&szAgent;
    lpVtbl = (WCHAR *)&szAgent;
    if ( a2->lpVtbl )
      lpVtbl = (WCHAR *)a2->lpVtbl;
    std::wstring::wstring((__int64)&v12, lpVtbl);
    if ( a2[1].lpVtbl )
      v7 = (WCHAR *)a2[1].lpVtbl;
    std::wstring::wstring((__int64)&v14, v7);
    std::chrono::steady_clock::now(&v16);
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v17,
      (__int64)a3);
    v9 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(a1 + 72) == v9 )
    {
      std::vector<ActivationHints::Hint>::_Emplace_reallocate<ActivationHints::Hint>(
        (__int64 *)(a1 + 56),
        v9,
        (__int64)&v12);
    }
    else
    {
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_OWORD *)v9 = v12;
      *(__m128i *)(v9 + 16) = si128;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v12) = 0;
      *(_QWORD *)(v9 + 48) = 0LL;
      *(_QWORD *)(v9 + 56) = 0LL;
      *(_OWORD *)(v9 + 32) = v14;
      *(__m128i *)(v9 + 48) = v15;
      v15 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v14) = 0;
      *(_QWORD *)(v9 + 64) = v16;
      v10 = v17;
      v17 = 0LL;
      *(_QWORD *)(v9 + 72) = v10;
      *(_QWORD *)(a1 + 64) += 80LL;
    }
    ActivationHints::Hint::~Hint((ActivationHints::Hint *)&v12);
    if ( (unsigned __int64)((*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) / 80LL) > 0xA )
      std::vector<ActivationHints::Hint>::erase(a1 + 56, &v11, *(_QWORD *)(a1 + 56));
    if ( a1 != -48 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 48));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
