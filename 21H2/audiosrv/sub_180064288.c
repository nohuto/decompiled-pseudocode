/*
 * XREFs of sub_180064288 @ 0x180064288
 * Callers:
 *     sub_180062950 @ 0x180062950 (sub_180062950.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_1800458B4 @ 0x1800458B4 (sub_1800458B4.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180064E6C @ 0x180064E6C (sub_180064E6C.c)
 *     sub_180064F54 @ 0x180064F54 (sub_180064F54.c)
 */

__int64 __fastcall sub_180064288(__int64 a1)
{
  int v2; // eax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  void *v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  Mtx_init_in_situ((_Mtx_t)(a1 + 32), 2);
  v6 = 1;
  v7 = &sub_1800EEA10;
  v8 = a1;
  v2 = Pdcv2ActivationClientRegister(40LL, &v6, a1) | 0x10000000;
  if ( v2 < 0 )
    sub_18005E8F8((__int64)"CPdcActivationClient::CPdcActivationClient", 18, v2);
  *(_DWORD *)(a1 + 112) = 0;
  Mtx_init_in_situ((_Mtx_t)(a1 + 120), 2);
  *(_BYTE *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)sub_1800476C0, (PVOID)(a1 + 112), 0LL);
  sub_1800458B4(a1 + 112, 0);
  Mtx_init_in_situ((_Mtx_t)(a1 + 216), 2);
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  v3 = sub_180008EAC(0x48uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *(_QWORD *)(a1 + 296) = v3;
  sub_180064F54(a1 + 216);
  Mtx_init_in_situ((_Mtx_t)(a1 + 312), 2);
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  v4 = sub_180008EAC(0x30uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *(_QWORD *)(a1 + 392) = v4;
  sub_180064E6C(a1 + 312);
  return a1;
}
