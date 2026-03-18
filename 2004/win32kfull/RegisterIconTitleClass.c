/*
 * XREFs of RegisterIconTitleClass @ 0x1C010F4AC
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C001DF70 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C00A3E30 (NtUserRegisterClassExWOW.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     InternalRegisterClassEx @ 0x1C008D05C (InternalRegisterClassEx.c)
 */

__int64 RegisterIconTitleClass()
{
  __int64 *v0; // rax
  __int64 result; // rax
  _BYTE v2[4]; // [rsp+20h] [rbp-60h] BYREF
  int v3; // [rsp+24h] [rbp-5Ch]
  __int64 v4; // [rsp+28h] [rbp-58h]
  int v5; // [rsp+30h] [rbp-50h]
  int v6; // [rsp+34h] [rbp-4Ch]
  __int64 v7; // [rsp+38h] [rbp-48h]
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  __int64 v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+78h] [rbp-8h]
  int v16; // [rsp+7Ch] [rbp-4h]

  v5 = 0;
  v8 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  v3 = 0;
  v4 = 0LL;
  v6 = 0;
  v15 = 0;
  v7 = hModuleWin;
  v16 = 1;
  v0 = (__int64 *)gasyscur[1];
  if ( v0 )
    v9 = *v0;
  else
    v9 = 0LL;
  v10 = 0LL;
  v12 = 32772LL;
  v14 = 32772LL;
  result = InternalRegisterClassEx((__int64)v2, 667, 0x41u, 0LL);
  if ( result )
  {
    result = 1LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) |= 0x10000000u;
  }
  return result;
}
