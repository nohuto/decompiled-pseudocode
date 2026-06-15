/*
 * XREFs of sub_18010063C @ 0x18010063C
 * Callers:
 *     sub_180100750 @ 0x180100750 (sub_180100750.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_180102A80 @ 0x180102A80 (sub_180102A80.c)
 *     sub_180103040 @ 0x180103040 (sub_180103040.c)
 *     sub_180104B80 @ 0x180104B80 (sub_180104B80.c)
 *     sub_180104BE0 @ 0x180104BE0 (sub_180104BE0.c)
 */

__int64 __fastcall sub_18010063C(__int64 a1)
{
  int v2; // eax
  DWORD v3; // eax
  DWORD v4; // eax
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handles[3]; // [rsp+38h] [rbp-30h] BYREF

  v6 = 0LL;
  v2 = sub_180104BE0(a1, &v6);
  if ( v2 < 0
    && off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x22u, (__int64)&unk_1801726D0, v2);
  }
  Handles[0] = *(HANDLE *)(a1 + 296);
  Handles[1] = *(HANDLE *)(a1 + 120);
  Handles[2] = *(HANDLE *)(a1 + 240);
  while ( 1 )
  {
    v4 = WaitForMultipleObjectsEx(3u, Handles, 0, 0xFFFFFFFF, 0);
    if ( v4 == -1 )
      break;
    if ( v4 )
    {
      v3 = v4 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          sub_180103040(a1);
      }
      else
      {
        sub_180102A80(a1);
      }
    }
    else if ( *(_DWORD *)(a1 + 56) != 3 )
    {
      break;
    }
  }
  if ( v6 )
    sub_180104B80(&v6);
  return 0LL;
}
