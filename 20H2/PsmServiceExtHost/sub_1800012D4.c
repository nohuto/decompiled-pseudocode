/*
 * XREFs of sub_1800012D4 @ 0x1800012D4
 * Callers:
 *     sub_180001164 @ 0x180001164 (sub_180001164.c)
 *     sub_180001230 @ 0x180001230 (sub_180001230.c)
 * Callees:
 *     sub_180001374 @ 0x180001374 (sub_180001374.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800765F8 @ 0x1800765F8 (sub_1800765F8.c)
 */

__int64 __fastcall sub_1800012D4(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-1Ch]

  while ( 1 )
  {
    v4 = ((__int64 (*)(void))sub_180001374)();
    if ( !v4 || *(_QWORD *)(v4 + 120) > a2 )
      break;
    v10 = v4 - 1168;
    if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 25LL) )
    {
      v11 = *(_QWORD *)(v10 + 32);
      v17 = 0;
      v12 = v11;
      v16 = 8;
      v15 = &v12;
      sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009E666, 0, 0, 3u, &v14);
    }
    sub_1800765F8(a1, v10);
  }
  v5 = sub_180001374(a1);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v5 )
  {
    v7 = &v13;
    v8 = *(unsigned int *)(a1 + 28);
    v13 = *(_QWORD *)(v5 + 120);
  }
  else
  {
    v8 = 0LL;
    v7 = 0LL;
  }
  return TpSetTimer(v6, v7, 0LL, v8);
}
