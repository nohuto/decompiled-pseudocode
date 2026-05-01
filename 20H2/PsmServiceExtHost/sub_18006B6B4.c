/*
 * XREFs of sub_18006B6B4 @ 0x18006B6B4
 * Callers:
 *     sub_1800706FC @ 0x1800706FC (sub_1800706FC.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 * Callees:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180021E08 @ 0x180021E08 (sub_180021E08.c)
 *     sub_18006A8A8 @ 0x18006A8A8 (sub_18006A8A8.c)
 *     sub_18006B4F0 @ 0x18006B4F0 (sub_18006B4F0.c)
 *     sub_180071EC8 @ 0x180071EC8 (sub_180071EC8.c)
 *     sub_180072790 @ 0x180072790 (sub_180072790.c)
 */

__int64 __fastcall sub_18006B6B4(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  bool v17; // zf
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v25; // [rsp+A0h] [rbp+30h] BYREF

  v25 = 0LL;
  sub_180021E08(a1, 0LL, 0LL, &v25);
  v8 = dword_1800B31E0;
  v9 = 1;
  v10 = v25;
  if ( dword_1800B31E0 )
  {
    sub_18006B4F0(a1, v25, (int *)&v25);
    if ( v8 > 4 )
    {
      if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v24 = *(_QWORD *)(a1 + 32);
        v21 = v13;
        v23 = v10;
        v22 = a3;
        LOBYTE(v25) = a2;
        sub_18006A8A8(
          v11,
          byte_18009C27E,
          v12,
          v13,
          (__int64)&v24,
          (__int64)&v25,
          (__int64)&v22,
          (__int64)&v23,
          (__int64)&v21);
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 836) & 1) != 0 )
  {
    if ( a2 <= 0 || a2 > 2 && (v9 = 3, a2 != 3) )
      v9 = 4;
    sub_1800093A0(a1 + 64, 0);
    sub_18000506C(a1 + 64, v9, (unsigned __int8)a3 | 0x700, 0LL, 3, 0);
    return sub_18000A110(a1 + 64);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 1136);
    v16 = 0LL;
    result = v15 - 1296;
    v17 = v15 == a1 + 1136;
    while ( 1 )
    {
      if ( !v17 )
        v16 = result;
      if ( !v16 )
        break;
      if ( (unsigned int)sub_180071EC8(v16, (unsigned int)a2, &v25)
        && (a2 != 2 || !(_DWORD)v25 || (*(_BYTE *)(a1 + 1162) & 0x10) == 0) )
      {
        sub_180072790(v16, v25, a3, v10, a4);
      }
      v18 = *(_QWORD *)(v16 + 1296);
      v19 = *(_QWORD *)(v16 + 1320);
      v20 = 3LL * *(int *)(v16 + 1328) + 139;
      v16 = 0LL;
      v17 = v18 == v19 + 8 * v20;
      result = v18 - 1296;
    }
  }
  return result;
}
