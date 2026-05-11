/*
 * XREFs of WPP_RECORDER_SF_qZ @ 0x1C0001340
 * Callers:
 *     DriverEntry @ 0x1C002353C (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned __int16 *a7)
{
  __int64 v8; // r8
  const wchar_t *v9; // rcx
  const wchar_t *v10; // rdx
  int v12; // [rsp+20h] [rbp-58h]

  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
  {
    if ( a7 )
      v8 = *a7;
    else
      v8 = 8LL;
    if ( a7 && *a7 )
      v9 = (const wchar_t *)*((_QWORD *)a7 + 1);
    else
      v9 = L"NULL";
    v10 = L"\b";
    if ( a7 )
      v10 = a7;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
      36LL,
      &a6,
      8LL,
      v10,
      2LL,
      v9,
      v8,
      0LL);
  }
  LOWORD(v12) = 36;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids, v12, &a6);
}
