/*
 * XREFs of sub_1C0053330 @ 0x1C0053330
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C003321C @ 0x1C003321C (sub_1C003321C.c)
 */

char __fastcall sub_1C0053330(__int64 a1, _DWORD *a2, unsigned __int16 *a3, unsigned __int64 a4)
{
  __int64 v8; // r9
  int v9; // r8d
  unsigned __int64 v10; // rbp
  unsigned __int16 *v11; // rdi
  char v12; // si
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 (__fastcall *v15)(__int64, __m128 *, unsigned __int16 *, unsigned __int64); // r10
  __m128 v17[4]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 *v18; // [rsp+B0h] [rbp+18h] BYREF

  sub_1C001D340(v17, 0, 0x40uLL);
  if ( *a3 != 8 )
  {
    v8 = *a3;
    v9 = 1447252784;
LABEL_18:
    sub_1C000FD80(a1, 256, v9, v8, 0LL);
    return 0;
  }
  v8 = a3[3];
  if ( (unsigned int)v8 < 0xC )
  {
    v9 = 1447252785;
    goto LABEL_18;
  }
  v10 = (unsigned __int64)a3 + v8;
  if ( (unsigned __int64)a3 + v8 > a4 )
  {
    v9 = 1447252786;
    goto LABEL_18;
  }
  v11 = a3 + 4;
  v18 = v11;
  v12 = 1;
  do
  {
    v13 = v11[1];
    if ( (unsigned int)v13 < 9 )
    {
      v14 = 2 * v13;
      v15 = (unsigned __int8 (__fastcall *)(__int64, __m128 *, unsigned __int16 *, unsigned __int64))*(&off_1C0061D40 + v14);
      if ( !*((_BYTE *)&off_1C0061D40 + 8 * v14 + 8) )
      {
        sub_1C000FD80(a1, 256, 1447252787, v11[1], 0LL);
        v12 = 0;
      }
      v12 = v15(a1, v17, v11, v10) != 0 ? v12 : 0;
    }
    if ( !sub_1C003321C(v10, &v18) )
    {
      v8 = 0LL;
      v9 = 1447252788;
      goto LABEL_18;
    }
    v11 = v18;
  }
  while ( v18 );
  if ( v12 == 1 )
    *a2 |= 8u;
  return v12;
}
