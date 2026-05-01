/*
 * XREFs of sub_1800407B8 @ 0x1800407B8
 * Callers:
 *     sub_180040718 @ 0x180040718 (sub_180040718.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180085678 @ 0x180085678 (sub_180085678.c)
 */

char __fastcall sub_1800407B8(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-40h] BYREF
  int *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  v7 = 0LL;
  v2 = SleepstudyHelperCreateLibrary(1346912589LL, &v7);
  v3 = v2;
  if ( v2 != -1073741637 )
  {
    if ( v2 >= 0 )
    {
      LOBYTE(v2) = v7;
      v4 = 0LL;
      *(_QWORD *)(a1 + 8) = v7;
      v7 = 0LL;
      goto LABEL_4;
    }
    LOBYTE(v2) = sub_180085678();
    if ( (unsigned int)dword_1800B3218 > 4 )
    {
      LOBYTE(v2) = sub_180010470((__int64)&dword_1800B3218, 64LL);
      if ( (_BYTE)v2 )
      {
        v12 = 0;
        v10 = &v8;
        v8 = v3;
        v11 = 4;
        LOBYTE(v2) = sub_18002E278(v5, (unsigned __int8 *)dword_1800A22DD, 0LL, 0LL, 3u, &v9);
      }
    }
  }
  v4 = v7;
LABEL_4:
  if ( v4 )
    LOBYTE(v2) = SleepstudyHelperDestroyLibrary();
  return v2;
}
