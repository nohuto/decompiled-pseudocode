/*
 * XREFs of sub_180079C30 @ 0x180079C30
 * Callers:
 *     sub_180080460 @ 0x180080460 (sub_180080460.c)
 * Callees:
 *     sub_180002B74 @ 0x180002B74 (sub_180002B74.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007844C @ 0x18007844C (sub_18007844C.c)
 *     sub_18008177C @ 0x18008177C (sub_18008177C.c)
 *     sub_1800817D0 @ 0x1800817D0 (sub_1800817D0.c)
 */

__int64 __fastcall sub_180079C30(__int64 a1, void *a2, unsigned int a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  DWORD v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+40h] [rbp-148h] BYREF
  NTSTATUS v17; // [rsp+44h] [rbp-144h] BYREF
  void *v18; // [rsp+48h] [rbp-140h] BYREF
  _BYTE v19[80]; // [rsp+50h] [rbp-138h] BYREF
  _BYTE TlsValue[144]; // [rsp+A0h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+130h] [rbp-58h] BYREF

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009F8BD, 0LL, 0LL, 2u, &v21);
  v8 = sub_180002B74(a2, a3, v19);
  if ( v8 >= 0 )
  {
    v9 = sub_18008177C(*(_QWORD *)a1, *(unsigned int *)(a1 + 144), v19);
    v10 = (_QWORD *)v9;
    if ( v9 )
    {
      v8 = sub_1800817D0(v9, a1, a4);
      if ( v8 >= 0 )
        v8 = 0;
      sub_1800274E0(v10);
    }
    else
    {
      v8 = -1058275321;
    }
  }
  v11 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v16 = *(_DWORD *)(a1 + 144);
    v18 = a2;
    v17 = v8;
    sub_18007844C(v12, byte_18009F58A, v13, v14, (__int64)&v17, (__int64)&v16, (__int64 *)&v18);
  }
  return (unsigned int)v8;
}
