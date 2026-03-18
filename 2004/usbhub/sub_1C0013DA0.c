/*
 * XREFs of sub_1C0013DA0 @ 0x1C0013DA0
 * Callers:
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C0018660 @ 0x1C0018660 (sub_1C0018660.c)
 * Callees:
 *     sub_1C00125E0 @ 0x1C00125E0 (sub_1C00125E0.c)
 *     sub_1C0013F08 @ 0x1C0013F08 (sub_1C0013F08.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

NTSTATUS sub_1C0013DA0(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, int a4, ...)
{
  NTSTATUS result; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r10
  int v10; // [rsp+60h] [rbp-68h] BYREF
  int v11; // [rsp+68h] [rbp-60h] BYREF
  __int16 v12; // [rsp+6Ch] [rbp-5Ch]
  __int16 v13; // [rsp+6Eh] [rbp-5Ah]
  __int16 v14; // [rsp+70h] [rbp-58h]
  __int16 v15; // [rsp+72h] [rbp-56h]
  GUID v16; // [rsp+78h] [rbp-50h] BYREF
  _BYTE v17[32]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-20h]
  int v19; // [rsp+B0h] [rbp-18h]
  va_list va; // [rsp+F0h] [rbp+28h] BYREF

  va_start(va, a4);
  v10 = a4;
  result = 0;
  v18 = 0LL;
  v19 = 0;
  memset(v17, 0, sizeof(v17));
  v16 = 0LL;
  if ( dword_1C006B650 )
  {
    v7 = *(_QWORD *)(a1 + 1184);
    if ( !v7 )
      sub_1C002DC78(0LL, 0LL);
    v8 = *(_QWORD *)(v7 + 64);
    if ( !v8 )
      sub_1C002DC78(v7, 0LL);
    if ( *(_DWORD *)v8 != 541218120 )
      sub_1C002DC78(v7, *(_QWORD *)(v7 + 64));
    v11 = *(_DWORD *)(v8 + 5192);
    v12 = *(_WORD *)(v8 + 5196);
    v13 = *(_DWORD *)(v8 + 5200);
    v14 = *(_WORD *)(v8 + 5228);
    v15 = *(_WORD *)(v8 + 5230);
    sub_1C0013F08(a1, v17);
    if ( v9 && qword_1C006B3A0 && (int)qword_1C006B3A0(v9, &v16) >= 0 )
      return sub_1C00125E0(a3, &v16, &v11, 12LL, v17, 44LL, &v10, 4LL, va, 4LL, 0LL);
    else
      return sub_1C00125E0(a3, 0LL, &v11, 12LL, v17, 44LL, &v10, 4LL, va, 4LL, 0LL);
  }
  return result;
}
