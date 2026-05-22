/*
 * XREFs of ?IoctlRanLong_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KJMK@Z @ 0x18016042C
 * Callers:
 *     ??$IoctlRanLong@AEBU_GUID@@AEAKJAEAMAEBK@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEAK$$QEAJAEAMAEBK@Z @ 0x18014F340 (--$IoctlRanLong@AEBU_GUID@@AEAKJAEAMAEBK@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEAK$$QEAJA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035068 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180168034 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::IoctlRanLong_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        int a3,
        int a4,
        float a5,
        unsigned int a6)
{
  __int64 v9; // rax
  __int64 v10; // r10
  unsigned int v11; // [rsp+38h] [rbp-69h] BYREF
  float v12; // [rsp+3Ch] [rbp-65h] BYREF
  int v13; // [rsp+40h] [rbp-61h] BYREF
  int v14; // [rsp+44h] [rbp-5Dh] BYREF
  __int64 v15; // [rsp+48h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+58h] [rbp-49h] BYREF
  const struct _GUID *v17; // [rsp+78h] [rbp-29h]
  __int64 v18; // [rsp+80h] [rbp-21h]
  int *v19; // [rsp+88h] [rbp-19h]
  __int64 v20; // [rsp+90h] [rbp-11h]
  int *v21; // [rsp+98h] [rbp-9h]
  __int64 v22; // [rsp+A0h] [rbp-1h]
  float *v23; // [rsp+A8h] [rbp+7h]
  __int64 v24; // [rsp+B0h] [rbp+Fh]
  unsigned int *v25; // [rsp+B8h] [rbp+17h]
  __int64 v26; // [rsp+C0h] [rbp+1Fh]
  __int64 *v27; // [rsp+C8h] [rbp+27h]
  __int64 v28; // [rsp+D0h] [rbp+2Fh]

  v9 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         this,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v9 + 8) > 3u && tlgKeywordOn(*(_QWORD *)(v9 + 8), 0x200000000000LL) )
  {
    v11 = a6;
    v12 = a5;
    v28 = 8LL;
    v27 = &v15;
    v25 = &v11;
    v23 = &v12;
    v21 = &v13;
    v19 = &v14;
    v15 = 0x1000000LL;
    v13 = a4;
    v14 = a3;
    v26 = 4LL;
    v24 = 4LL;
    v22 = 4LL;
    v20 = 4LL;
    v17 = a2;
    v18 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1801D04BF, 0LL, 0LL, 8u, &v16);
  }
}
