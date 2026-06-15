/*
 * XREFs of sub_1800DDFC0 @ 0x1800DDFC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004A758 @ 0x18004A758 (sub_18004A758.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DDFC0(__int64 a1, __int64 a2, unsigned __int16 *a3, int a4, __int64 *a5, _QWORD *a6)
{
  __int64 v6; // rbx
  __int64 *v10; // rax
  __int64 v11; // r8
  int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  void *v16; // rsi
  _QWORD *v18; // [rsp+38h] [rbp-29h] BYREF
  __int64 v19; // [rsp+40h] [rbp-21h] BYREF
  __int64 v20; // [rsp+48h] [rbp-19h]
  LPVOID pv; // [rsp+50h] [rbp-11h] BYREF
  struct _TP_TIMER *v22[8]; // [rsp+58h] [rbp-9h] BYREF

  v6 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  pv = 0LL;
  v18 = 0LL;
  v10 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(v22, (struct _TP_TIMER *)v10[1], v11, (struct _TP_TIMER *)L"AudioServerGetBufferSizeLimits");
  v12 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)::pv + 24LL))(
          ::pv,
          a2,
          0LL,
          0LL,
          &v18);
  if ( v12 < 0 )
    goto LABEL_11;
  v6 = v18[2];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v12 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v6 + 24LL))(v6, &unk_18015C488, 1LL);
  if ( v12 < 0 )
    goto LABEL_11;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 64LL))(v20, &v19);
  if ( v12 < 0 )
    goto LABEL_11;
  v13 = sub_18004A758(a3, (__int64 *)&pv);
  v16 = pv;
  v12 = v13;
  if ( v13 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *, _QWORD *))(*(_QWORD *)v19 + 80LL))(v19, pv, a5, a6);
    if ( v12 >= 0 )
    {
      if ( a4 )
      {
        *a5 /= 2LL;
        v14 = *a6 % 2LL;
        *a6 /= 2LL;
      }
    }
  }
  if ( v16 )
    CoTaskMemFree(v16);
  if ( v12 < 0 )
LABEL_11:
    sub_18005E8F8((__int64)"AudioServerGetBufferSizeLimits", 4614, v12);
  sub_18000F690((__int64)v22, v14, v15);
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v12;
}
