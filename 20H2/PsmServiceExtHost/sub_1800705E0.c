/*
 * XREFs of sub_1800705E0 @ 0x1800705E0
 * Callers:
 *     sub_180013210 @ 0x180013210 (sub_180013210.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180031E60 @ 0x180031E60 (sub_180031E60.c)
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180071D0C @ 0x180071D0C (sub_180071D0C.c)
 */

char __fastcall sub_1800705E0(_QWORD *a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // edi
  void **v5; // rsi
  void *v6; // rcx
  char result; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]

  v2 = (void *)a1[12];
  if ( v2 )
    CloseHandle(v2);
  v3 = a1[13];
  if ( v3 )
    TpReleaseTimer(v3);
  v4 = 0;
  v5 = (void **)(a1 + 6);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( v4 )
        CloseHandle(v6);
      else
        NtClose(v6);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 6 );
  result = sub_180071D0C(a1 + 18);
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B31E0, 9LL);
    if ( result )
    {
      v9 = a1[27];
      v14 = 0;
      v10 = v9;
      v13 = 8;
      v12 = &v10;
      return sub_18002E278(v8, (unsigned __int8 *)dword_18009CDB2, 0LL, 0LL, 3u, &v11);
    }
  }
  return result;
}
