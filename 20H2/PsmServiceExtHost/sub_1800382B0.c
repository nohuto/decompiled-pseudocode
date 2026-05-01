/*
 * XREFs of sub_1800382B0 @ 0x1800382B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_18006253C @ 0x18006253C (sub_18006253C.c)
 */

__int64 __fastcall sub_1800382B0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  int v7; // r8d
  int v8; // ebx
  int v10; // [rsp+40h] [rbp-9h] BYREF
  int v11; // [rsp+44h] [rbp-5h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp+7h] BYREF
  int *v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]

  v4 = a4;
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 2LL) )
  {
    v11 = v4;
    v12 = a3;
    v10 = a2;
    sub_18006253C(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009A68F,
      v7,
      a4,
      (__int64)&v10,
      (__int64)&v12,
      (__int64)&v11);
  }
  LOBYTE(a4) = v4 != 0;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)qword_1800B41A0 + 24LL))(
         qword_1800B41A0,
         a2,
         a3,
         a4);
  if ( v8 >= 0 )
    v8 = 0;
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 2LL) )
  {
    v10 = v8;
    v14 = &v10;
    v15 = 4LL;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009A5AD, 0LL, 0LL, 3u, &v13);
  }
  return (unsigned int)v8;
}
