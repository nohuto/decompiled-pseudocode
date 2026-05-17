/*
 * XREFs of RtlGUIDFromString @ 0x180069A90
 * Callers:
 *     RtlQueryPackageClaims @ 0x1800695F0 (RtlQueryPackageClaims.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180102410 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ScanHexFormat @ 0x180069C80 (ScanHexFormat.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

__int64 __fastcall RtlGUIDFromString(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // ecx
  _BYTE *v8; // rdx
  __int128 *v9; // r8
  __int128 v11; // [rsp+70h] [rbp-28h] BYREF

  v2 = a2 + 4;
  v4 = a2 + 6;
  v5 = *a1;
  v6 = *((_QWORD *)a1 + 1);
  v11 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       v6,
                       v5 >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       a2,
                       v2,
                       v4,
                       &v11,
                       (char *)&v11 + 2,
                       (char *)&v11 + 4,
                       (char *)&v11 + 6,
                       (char *)&v11 + 8,
                       (char *)&v11 + 10,
                       (char *)&v11 + 12,
                       (char *)&v11 + 14) == -1 )
    return 3221225485LL;
  v7 = 0;
  v8 = (_BYTE *)(a2 + 8);
  v9 = &v11;
  do
  {
    ++v7;
    *v8 = *(_BYTE *)v9;
    v9 = (__int128 *)((char *)v9 + 2);
    ++v8;
  }
  while ( v7 < 8 );
  return 0LL;
}
