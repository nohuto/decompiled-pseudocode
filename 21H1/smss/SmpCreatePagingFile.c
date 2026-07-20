/*
 * XREFs of SmpCreatePagingFile @ 0x140008554
 * Callers:
 *     SmpEnableSwapOnPagingFiles @ 0x1400078C4 (SmpEnableSwapOnPagingFiles.c)
 *     SmpCreatePagefileOnVolume @ 0x14000BD08 (SmpCreatePagefileOnVolume.c)
 * Callees:
 *     SmpRecordNewPageFile @ 0x1400085D8 (SmpRecordNewPageFile.c)
 */

__int64 __fastcall SmpCreatePagingFile(
        UNICODE_STRING *String2,
        union _LARGE_INTEGER a2,
        union _LARGE_INTEGER a3,
        ULONG a4)
{
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  union _LARGE_INTEGER v8; // [rsp+30h] [rbp+8h] BYREF
  union _LARGE_INTEGER v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v8 = a3;
  v5 = NtCreatePagingFile(String2, &v9, &v8, a4);
  v6 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
  *((_DWORD *)&SmpPagefileLog + 2 * v6) = 2113;
  *((_DWORD *)&SmpPagefileLog + 2 * v6 + 1) = v5;
  *((_QWORD *)&SmpPagefileLog + v6 + 1) = String2;
  if ( v5 >= 0 )
    SmpRecordNewPageFile(String2);
  return (unsigned int)v5;
}
