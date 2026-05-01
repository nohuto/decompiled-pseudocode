/*
 * XREFs of sub_180029064 @ 0x180029064
 * Callers:
 *     sub_18000E3DC @ 0x18000E3DC (sub_18000E3DC.c)
 *     sub_180027150 @ 0x180027150 (sub_180027150.c)
 * Callees:
 *     sub_180029148 @ 0x180029148 (sub_180029148.c)
 *     sub_180029184 @ 0x180029184 (sub_180029184.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180029064(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v5; // ebx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-E0h] BYREF
  HKEY hKey; // [rsp+28h] [rbp-D8h] BYREF
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v11[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v12[272]; // [rsp+40h] [rbp-C0h] BYREF

  hKey = 0LL;
  v10 = 130;
  sub_1800297B0(a1, &v10, v12);
  v5 = sub_180029184(a2, 1LL, &hKey);
  if ( v5 >= 0 )
  {
    v8 = 4;
    v6 = sub_180029148(hKey, v12, v11, &v8);
    v5 = v6;
    if ( v6 < 0 )
    {
      if ( v6 != -1073283070 )
        goto LABEL_6;
      *a3 = 0;
      goto LABEL_5;
    }
    if ( v11[0] <= 0x1AFF && v8 == 4 )
    {
      *a3 = v11[0];
LABEL_5:
      v5 = 0;
      goto LABEL_6;
    }
    v5 = -1073739509;
  }
LABEL_6:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v5;
}
