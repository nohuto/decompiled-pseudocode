/*
 * XREFs of sub_18007AF20 @ 0x18007AF20
 * Callers:
 *     PsmHamTerminateApplication @ 0x180062410 (PsmHamTerminateApplication.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F0F4 @ 0x18000F0F4 (sub_18000F0F4.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_1800378A4 @ 0x1800378A4 (sub_1800378A4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800785A8 @ 0x1800785A8 (sub_1800785A8.c)
 *     sub_18007F780 @ 0x18007F780 (sub_18007F780.c)
 */

__int64 __fastcall sub_18007AF20(__int64 a1, void *a2, void *a3, int a4, unsigned int a5)
{
  ULONG v9; // eax
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  DWORD v14; // edi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  void *v22; // [rsp+60h] [rbp-A0h] BYREF
  void *v23; // [rsp+68h] [rbp-98h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v25[136]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+320h] [rbp+220h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A0389, 0LL, 0LL, 2u, &v26);
  sub_18000B7F8(TlsValue);
  v9 = RtlLengthSid(a3);
  v10 = sub_1800378A4((__int64)a2, a3, v9, a4, v25);
  if ( v10 >= 0 )
  {
    v11 = sub_18000F0F4(a1, (__int64)v25);
    v13 = (_QWORD *)v11;
    if ( v11 )
    {
      v10 = sub_18007F780(v11, v12, a5);
      if ( v10 >= 0 )
        v10 = 0;
      sub_1800274E0(v13);
    }
    else
    {
      v10 = -1073741275;
    }
  }
  v14 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v19[0] = a5;
    v22 = a3;
    v20 = a4;
    v23 = a2;
    v21 = v10;
    sub_1800785A8(v15, byte_18009F7CA, v16, v17, (__int64)&v21, &v23, (__int64)&v20, (__int64 *)&v22, (__int64)v19);
  }
  return (unsigned int)v10;
}
