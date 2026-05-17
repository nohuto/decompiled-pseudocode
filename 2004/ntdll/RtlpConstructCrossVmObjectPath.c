/*
 * XREFs of RtlpConstructCrossVmObjectPath @ 0x1800F583C
 * Callers:
 *     RtlConstructCrossVmMutexPath @ 0x1800F5830 (RtlConstructCrossVmMutexPath.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     RtlStringFromGUIDEx @ 0x180069A70 (RtlStringFromGUIDEx.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DAA0 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlpConstructCrossVmObjectPath(_OWORD *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // rdi
  int appended; // ebx
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-10h] BYREF

  v9 = 0LL;
  WORD1(v9) = 112;
  UnicodeString = 0LL;
  v11 = 0LL;
  if ( a3 )
    WORD1(v9) = 190;
  *((_QWORD *)&v9 + 1) = NtdllpAllocateStringRoutine(a3 != 0LL ? 190LL : 112LL);
  v6 = *((_QWORD *)&v9 + 1);
  if ( *((_QWORD *)&v9 + 1) )
  {
    appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v9, (const void **)L" \"");
    if ( appended < 0
      || (appended = RtlAppendUnicodeToString((unsigned __int16 *)&v9, L"\\"), appended < 0)
      || a3
      && ((appended = RtlStringFromGUIDEx(a3, (__int64)&UnicodeString, 1), appended < 0)
       || (appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v9, (const void **)&UnicodeString),
           appended < 0)
       || (appended = RtlAppendUnicodeToString((unsigned __int16 *)&v9, L"\\"), appended < 0))
      || (appended = RtlStringFromGUIDEx(a2, (__int64)&v11, 1), appended < 0)
      || (appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v9, (const void **)&v11), appended < 0) )
    {
      v6 = *((_QWORD *)&v9 + 1);
    }
    else
    {
      v6 = 0LL;
      *a1 = v9;
    }
  }
  else
  {
    appended = -1073741801;
  }
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v11);
  if ( v6 )
    NtdllpFreeStringRoutine(v6);
  return (unsigned int)appended;
}
