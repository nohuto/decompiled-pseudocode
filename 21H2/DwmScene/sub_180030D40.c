/*
 * XREFs of sub_180030D40 @ 0x180030D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18006CDF0 @ 0x18006CDF0 (sub_18006CDF0.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
int __fastcall sub_180030D40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  double v9; // xmm8_8
  int v10; // r14d
  double v11; // xmm7_8
  double v12; // xmm6_8
  int v13; // esi
  int v14; // edi
  int v15; // ebx
  __int64 v16; // rax
  double v17; // xmm0_8
  double v18; // xmm6_8
  float v19; // xmm0_4
  __int64 v20; // rdx
  int result; // eax
  __int64 v22; // rcx
  __int64 v23; // [rsp+68h] [rbp-51h] BYREF
  __int64 v24; // [rsp+70h] [rbp-49h] BYREF
  _Mtx_t v25[2]; // [rsp+78h] [rbp-41h] BYREF
  __int128 v26; // [rsp+88h] [rbp-31h] BYREF

  v26 = 0LL;
  sub_180066E84(a1 + 8, &v26);
  *(_OWORD *)v25 = 0LL;
  (*(void (__fastcall **)(__int64, _Mtx_t *))(*(_QWORD *)a1 + 320LL))(a1, v25);
  sub_18006CDF0(a1, v6, v7, v8, a5);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 336LL))(a1);
  v9 = (float)((*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1) * 100.0);
  v10 = (int)(float)((*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1) * 96.0);
  v11 = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1);
  v12 = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
  sub_18011BCAC(
    &unk_18020F0B8,
    3LL,
    "Render Output Resolution: handle=%016llx -- physical window-space %dx%d pixels (%dxMSAA) - logical display-space %.2"
    "fx%.2f dips at %d ppi (scale %.0f%%)",
    v16,
    v15,
    v14,
    v13,
    v12,
    v11,
    v10,
    v9);
  v17 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
  if ( *(float *)&v17 != (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) )
  {
    v18 = (float)((*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) * 100.0);
    v19 = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
    sub_18011BCAC(&unk_18020F0B8, 3LL, "  non-uniform scale factors: x=%.0f%% y=%.0f%%", (float)(v19 * 100.0), v18);
  }
  v24 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 400LL))(a1, &v24);
  v23 = v24;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 384LL))(a1, &v23);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 392LL))(a1);
  LOBYTE(v20) = 1;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 360LL))(a1, v20);
  v22 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( LOBYTE(v25[1]) )
  {
    result = Mtx_unlock(v25[0]);
    if ( result )
    {
      std::_Throw_C_error(result);
      JUMPOUT(0x18003104DLL);
    }
  }
  if ( BYTE8(v26) )
    return sub_180067304(v26);
  return result;
}
