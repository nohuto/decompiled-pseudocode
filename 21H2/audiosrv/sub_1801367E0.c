/*
 * XREFs of sub_1801367E0 @ 0x1801367E0
 * Callers:
 *     sub_180136500 @ 0x180136500 (sub_180136500.c)
 *     sub_1801366A8 @ 0x1801366A8 (sub_1801366A8.c)
 * Callees:
 *     sub_18000AC70 @ 0x18000AC70 (sub_18000AC70.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 *     sub_180135DDC @ 0x180135DDC (sub_180135DDC.c)
 */

void __fastcall sub_1801367E0(__int64 a1, _QWORD *a2, int a3, __int64 a4, _BYTE *a5)
{
  __int64 v7; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  int v12; // ebx
  _BYTE v13[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-60h] BYREF

  v7 = a3;
  if ( *(_BYTE *)(a1 + 552) )
  {
    if ( (unsigned int)dword_18019C4F0 > 5 )
      sub_180109634((__int64)&dword_18019C4F0, (unsigned __int8 *)dword_18016CB00, 0LL, 0LL, 2u, &v14);
  }
  else
  {
    v13[0] = 0;
    v9 = sub_18000AC70(a1, (__int64)a2, a3, v13);
    v10 = 32 * v7;
    v11 = a4 + 24 * v7;
    v12 = v9;
    sub_180135DDC(a1, *(void **)(v10 + a1 + 280), a2, v11);
    if ( v12 != *(_DWORD *)(v11 + 4) || v13[0] != *(_BYTE *)(v11 + 1) )
      *a5 = 1;
  }
}
