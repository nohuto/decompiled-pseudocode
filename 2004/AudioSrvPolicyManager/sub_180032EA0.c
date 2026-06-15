/*
 * XREFs of sub_180032EA0 @ 0x180032EA0
 * Callers:
 *     sub_1800322B0 @ 0x1800322B0 (sub_1800322B0.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000F0A8 @ 0x18000F0A8 (sub_18000F0A8.c)
 *     sub_18000F0C0 @ 0x18000F0C0 (sub_18000F0C0.c)
 *     sub_18000F150 @ 0x18000F150 (sub_18000F150.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_180032EA0(const void **a1, void **a2, int a3)
{
  _QWORD *v4; // rcx
  int v5; // ebx
  __int64 v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, __int64); // rcx
  const void *v10; // rsi
  __int64 v11; // rax
  void *v12; // rax

  v4 = *a1;
  v5 = 0;
  if ( a3 >= 0 )
    v5 = a3;
  if ( v5 < *((_DWORD *)v4 - 4) )
  {
    v8 = *(v4 - 3);
    if ( v8 )
      v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    else
      v9 = 0LL;
    if ( !v9 )
      v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[4])(&off_18004F098);
    v10 = *a1;
    if ( !v9 )
      sub_18000A174(-2147467259);
    if ( !v10 && v5 )
      goto LABEL_19;
    v11 = (**v9)(v9, (unsigned int)v5, 2LL);
    if ( !v11 )
      sub_18000F0A8();
    v12 = (void *)(v11 + 24);
    *a2 = v12;
    if ( v5 > *((_DWORD *)v12 - 3) )
LABEL_19:
      sub_18000A174(-2147024809);
    *((_DWORD *)v12 - 4) = v5;
    *((_WORD *)*a2 + v5) = 0;
    sub_18000F0C0(*a2, v5, v10, v5);
  }
  else
  {
    sub_18000F150(a2, a1);
  }
  return a2;
}
