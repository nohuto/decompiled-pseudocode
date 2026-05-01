/*
 * XREFs of sub_18007FE60 @ 0x18007FE60
 * Callers:
 *     sub_180076F40 @ 0x180076F40 (sub_180076F40.c)
 * Callees:
 *     sub_1800252D0 @ 0x1800252D0 (sub_1800252D0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     sub_18007D214 @ 0x18007D214 (sub_18007D214.c)
 */

signed __int64 __fastcall sub_18007FE60(__int64 a1, __int64 a2, int a3)
{
  signed __int64 result; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r8
  __int64 i; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _BYTE v10[4]; // [rsp+30h] [rbp-18h] BYREF
  _BYTE v11[20]; // [rsp+34h] [rbp-14h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  result = sub_1800252D0(a1, a2);
  v5 = (_QWORD *)result;
  if ( result )
  {
    if ( !a3 )
    {
      v12 = 4;
      NtQueryWnfStateData(&qword_1800B34C8, 0LL, 0LL, v11, v10, &v12);
      v6 = 0LL;
      for ( i = (__int64)v5; ; i = *(_QWORD *)(v9[97] + 88LL) )
      {
        v8 = sub_18003CF94(i, 3, v6);
        v9 = v8;
        if ( !v8 )
          break;
        sub_18007D214((__int64)v8, (__int64)v10, 8u);
        v6 = v9;
      }
    }
    return sub_1800274E0(v5);
  }
  return result;
}
