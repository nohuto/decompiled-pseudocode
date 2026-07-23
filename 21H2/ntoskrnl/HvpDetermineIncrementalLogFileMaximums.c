/*
 * XREFs of HvpDetermineIncrementalLogFileMaximums @ 0x1408818D8
 * Callers:
 *     HvAnalyzeLogFiles @ 0x140880D8C (HvAnalyzeLogFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvpIsLogEntryHeaderCoherent @ 0x1408819C8 (HvpIsLogEntryHeaderCoherent.c)
 *     HvpReadLogEntryHeader @ 0x140881EFC (HvpReadLogEntryHeader.c)
 */

__int64 __fastcall HvpDetermineIncrementalLogFileMaximums(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-58h] BYREF
  __int128 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+40h] [rbp-38h]

  *a3 = 0;
  *a4 = 0;
  v12 = 0LL;
  v8 = 512;
  v10 = 0LL;
  v11 = 0LL;
  do
  {
    result = HvpReadLogEntryHeader(v8, a1, a2, &v10);
    if ( (_DWORD)result == -1073741807 )
      break;
    if ( (int)result < 0 )
      return result;
    if ( !(unsigned __int8)HvpIsLogEntryHeaderCoherent(&v10, v8, 0LL) )
      break;
    if ( (unsigned int)v11 > *a4 )
      *a4 = v11;
    if ( HIDWORD(v10) > *a3 )
      *a3 = HIDWORD(v10);
    v8 += DWORD1(v10);
  }
  while ( v8 + 40 >= v8 );
  return 0LL;
}
