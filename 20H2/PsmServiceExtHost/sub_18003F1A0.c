/*
 * XREFs of sub_18003F1A0 @ 0x18003F1A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18003F290 @ 0x18003F290 (sub_18003F290.c)
 *     sub_18003F2E0 @ 0x18003F2E0 (sub_18003F2E0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003F1A0(int a1, int a2, int a3, _DWORD *a4, __int64 a5, int a6)
{
  int v10; // r14d
  int v11; // edi
  int v12; // ebx
  __int64 v14; // r9
  char v15; // [rsp+30h] [rbp-89h] BYREF
  int v16; // [rsp+34h] [rbp-85h] BYREF
  int v17; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-79h] BYREF
  char *v19; // [rsp+60h] [rbp-59h]
  __int64 v20; // [rsp+68h] [rbp-51h]
  int *v21; // [rsp+70h] [rbp-49h]
  __int64 v22; // [rsp+78h] [rbp-41h]
  int *v23; // [rsp+80h] [rbp-39h]
  __int64 v24; // [rsp+88h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+90h] [rbp-29h] BYREF

  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_1800A3603, 0LL, 0LL, 2u, &v25);
  RtlAcquireSRWLockExclusive(a4);
  a4[2] = GetCurrentThreadId();
  v10 = a4[4];
  v11 = a4[5];
  if ( v10 != 2 )
  {
    sub_18003F2E0(a1, a2, a3, (int)a4, a5, a6);
    if ( a4[4] == 1 )
      sub_18003F290(a4);
  }
  v12 = a4[5];
  a4[2] = 0;
  RtlReleaseSRWLockExclusive(a4);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v24 = v14;
    v23 = &v16;
    v22 = v14;
    v21 = &v17;
    v16 = v12;
    v19 = &v15;
    v17 = v11;
    v15 = v10;
    v20 = 1LL;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_1800A3631, 0LL, 0LL, 5u, &v18);
  }
  return 0LL;
}
