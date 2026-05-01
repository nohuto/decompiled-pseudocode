/*
 * XREFs of sub_180070CC0 @ 0x180070CC0
 * Callers:
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 * Callees:
 *     sub_1800030B4 @ 0x1800030B4 (sub_1800030B4.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180070CC0(__int64 a1)
{
  __int64 v2; // rax
  NTSTATUS v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+30h] [rbp-19h] BYREF
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  HANDLE Object[2]; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]

  sub_18000A110(a1 + 64);
  sub_18000F390();
  Object[0] = *(HANDLE *)(a1 + 1312);
  Object[1] = *(HANDLE *)(a1 + 1304);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    v14 = 0;
    v8 = v2;
    v13 = 8;
    v12 = &v8;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009CEDF, 0LL, 0LL, 3u, &v11);
  }
  v3 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
  sub_18001E380();
  sub_1800093A0(a1 + 64, 0);
  if ( v3 )
  {
    v4 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1320) = 0;
    NtClearEvent(*(HANDLE *)(a1 + 1312));
    v4 = 1;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v9 = *(_QWORD *)(a1 + 32);
    LODWORD(v8) = v4;
    sub_1800030B4((int)&dword_1800B31E0, (int)&unk_18009CE3F, v5, v6, (__int64)&v9, (__int64)&v8);
  }
  return v4;
}
