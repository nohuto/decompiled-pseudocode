/*
 * XREFs of sub_18002EC60 @ 0x18002EC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_18000CD64 @ 0x18000CD64 (sub_18000CD64.c)
 *     sub_18002E5E8 @ 0x18002E5E8 (sub_18002E5E8.c)
 *     sub_18002EE80 @ 0x18002EE80 (sub_18002EE80.c)
 *     sub_18002F030 @ 0x18002F030 (sub_18002F030.c)
 *     sub_18002F23C @ 0x18002F23C (sub_18002F23C.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002EC60(__int64 a1, _WORD *a2, _BYTE *a3, bool *a4, _DWORD *a5, bool *a6, _BYTE *a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  __int64 v8; // rbp
  __int64 v12; // rbx
  _DWORD **v13; // rbx
  _DWORD *v15; // rdx
  bool v16; // r9
  signed __int32 v17; // eax
  _QWORD v19[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v20[4]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v21[4]; // [rsp+78h] [rbp-70h] BYREF
  __int64 retaddr; // [rsp+E8h] [rbp+0h]

  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v8 = a1 + 56;
  *a3 = 0;
  *a4 = 0;
  *a6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  sub_18000CD64(v19, a2);
  v12 = sub_18002EE80(v8, v19);
  sub_180009CF0((__int64)v19);
  if ( v12 )
  {
    sub_18000CD64(v20, a2);
    v13 = (_DWORD **)sub_18002F23C(v8, v20);
    sub_180009CF0((__int64)v20);
    if ( (*v13)[9]-- == 1 )
    {
      v15 = *v13;
      *a5 = **v13;
      *a7 = *((_BYTE *)v15 + 8);
      v16 = _InterlockedCompareExchange(*v13 + 3, 1234, 1234) == 0;
      v17 = _InterlockedCompareExchange(*v13 + 4, 1234, 1234);
      *a4 = v16;
      *a6 = v17 == 0;
      *a3 = 1;
      sub_18000CD64(v21, a2);
      sub_18002F030(v8, v21);
      sub_180009CF0((__int64)v21);
    }
  }
  else
  {
    sub_18002E5E8(
      retaddr,
      238,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
      2147549183LL,
      (__int64)"Unexpected release of reference to EndpointVolumeState.");
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
