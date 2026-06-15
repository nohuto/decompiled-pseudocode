/*
 * XREFs of sub_1800D9550 @ 0x1800D9550
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D9550(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v5; // rax
  __int64 v6; // r8
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int16 *v11; // rdi
  void *v12; // rax
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+18h] BYREF
  void *Src; // [rsp+A8h] [rbp+20h] BYREF

  Src = 0LL;
  v16 = 0LL;
  v5 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v5[1], v6, (struct _TP_TIMER *)L"PolicyConfigGetMixFormat");
  *a3 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)::pv + 24LL))(
         ::pv,
         a2,
         0LL,
         0LL,
         &v16);
  if ( v7 < 0 )
    goto LABEL_9;
  v14 = xmmword_18015B730;
  v8 = sub_180020090(v16, 0, (__int64 *)&v14, &Src);
  v11 = (unsigned __int16 *)Src;
  v7 = v8;
  if ( v8 >= 0 )
  {
    v12 = (void *)sub_180045410(*((unsigned __int16 *)Src + 8) + 18LL);
    *a3 = v12;
    if ( v12 )
      memcpy(v12, v11, v11[8] + 18LL);
    else
      v7 = -2147024882;
  }
  if ( v11 )
    CoTaskMemFree(v11);
  if ( v7 < 0 )
LABEL_9:
    sub_18005E8F8((__int64)"PolicyConfigGetMixFormat", 3813, v7);
  sub_18000F690((__int64)pv, v9, v10);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)v7;
}
