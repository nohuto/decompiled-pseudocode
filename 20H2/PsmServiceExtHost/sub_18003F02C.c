/*
 * XREFs of sub_18003F02C @ 0x18003F02C
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18003F088 @ 0x18003F088 (sub_18003F088.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 sub_18003F02C()
{
  __int64 v0; // rbx
  unsigned int v1; // ebx
  unsigned int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v0 = qword_1800B4E90;
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_1800A368D, 0LL, 0LL, 2u, &v4);
  v1 = sub_18003F088(v0);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v7 = 0;
    v5 = (int *)&v3;
    v3 = v1;
    v6 = 4;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_1800A36B4, 0LL, 0LL, 3u, &v4);
  }
  return v1;
}
