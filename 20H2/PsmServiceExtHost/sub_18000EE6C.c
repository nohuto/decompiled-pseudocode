/*
 * XREFs of sub_18000EE6C @ 0x18000EE6C
 * Callers:
 *     sub_180027DE0 @ 0x180027DE0 (sub_180027DE0.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     _assert @ 0x180028750 (_assert.c)
 *     sub_180037BEC @ 0x180037BEC (sub_180037BEC.c)
 *     sub_18007A4CC @ 0x18007A4CC (sub_18007A4CC.c)
 *     sub_18007B7A0 @ 0x18007B7A0 (sub_18007B7A0.c)
 *     sub_18007C128 @ 0x18007C128 (sub_18007C128.c)
 *     sub_18007EC18 @ 0x18007EC18 (sub_18007EC18.c)
 * Callees:
 *     sub_18000EE4C @ 0x18000EE4C (sub_18000EE4C.c)
 *     sub_18000EF78 @ 0x18000EF78 (sub_18000EF78.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18003123C @ 0x18003123C (sub_18003123C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000EE6C(__int64 a1, __int64 a2, _QWORD *a3)
{
  char *v5; // rsi
  int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-268h] BYREF
  char *v13; // [rsp+28h] [rbp-260h] BYREF
  _BYTE v14[544]; // [rsp+30h] [rbp-258h] BYREF
  __int64 v15; // [rsp+250h] [rbp-38h]

  v5 = 0LL;
  v6 = sub_18003123C(a2, v14);
  if ( v6 >= 0 )
  {
    v7 = a1 - 1752;
    v8 = a1 - 1752 + 16;
    v12 = v15;
    RtlAcquireSRWLockShared(v8);
    v6 = sub_18000EF78(v7, &v12, &v13);
    RtlReleaseSRWLockShared(v8);
    if ( v6 >= 0 )
    {
      v5 = v13;
      if ( (v13[836] & 1) != 0 )
      {
        sub_18001E380(v9);
        if ( (unsigned int)sub_18000EE4C((__int64)(v5 + 64)) )
        {
          sub_18000F390(v10);
          *a3 = v5 + 64;
          v6 = 0;
        }
        else
        {
          v6 = -1073741275;
          sub_18000F390(v10);
        }
      }
      else
      {
        v6 = -1073740007;
      }
    }
    if ( v5 )
      sub_1800265B0(v5);
  }
  return (unsigned int)v6;
}
