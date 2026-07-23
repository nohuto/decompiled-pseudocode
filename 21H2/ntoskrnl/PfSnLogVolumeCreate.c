/*
 * XREFs of PfSnLogVolumeCreate @ 0x1406115E4
 * Callers:
 *     PfFileInfoNotify @ 0x140328350 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     PfSnLogHelper @ 0x14067B08C (PfSnLogHelper.c)
 *     RtlUpcaseUnicodeString @ 0x14067B110 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall PfSnLogVolumeCreate(__int64 *a1)
{
  int v1; // esi
  unsigned int v2; // edi
  __int64 v4; // rcx
  int v5; // esi
  struct _EX_RUNDOWN_REF *v6; // r15
  __int64 *v7; // rdx
  unsigned __int64 v8; // rbx
  int v9; // ecx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v13; // [rsp+60h] [rbp+20h] BYREF

  v1 = *((unsigned __int16 *)a1 + 15);
  v2 = 0;
  v4 = *a1;
  v5 = 2 * v1;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v13 = 0LL;
  v6 = (struct _EX_RUNDOWN_REF *)PfSnLogHelper(v4, (unsigned int)(v5 + 97) >> 4, &v13);
  if ( v6 )
  {
    v7 = v13;
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v5;
    *(_OWORD *)v13 = 0LL;
    *v7 = (8LL * (((unsigned int)(v5 + 97) >> 4) - 1)) | 5;
    v8 = ((unsigned __int64)v7 + 23) & 0xFFFFFFFFFFFFFFF8uLL;
    v7[1] = a1[1];
    SourceString.Length = v5;
    SourceString.MaximumLength = v5;
    *(_QWORD *)v8 = 0LL;
    v9 = *(_DWORD *)(v8 + 36);
    DestinationString.Buffer = (wchar_t *)(v8 + 56);
    SourceString.Buffer = (wchar_t *)a1[5];
    *(_DWORD *)v8 = (8 * v5 + 528) | 2;
    *(_DWORD *)(v8 + 4) = *((_DWORD *)a1 + 13);
    *(_DWORD *)(v8 + 8) = *((_DWORD *)a1 + 14);
    *(_QWORD *)(v8 + 24) = a1[1];
    *(_DWORD *)(v8 + 36) ^= (*((_DWORD *)a1 + 12) ^ v9) & 0xF;
    *(_DWORD *)(v8 + 36) ^= (*((_DWORD *)a1 + 12) ^ *(_DWORD *)(v8 + 36)) & 0xF0;
    *(_QWORD *)(v8 + 16) = a1[2];
    *(_DWORD *)(v8 + 32) = *((_DWORD *)a1 + 6);
    *(_WORD *)(v8 + 40) = v5;
    *(_WORD *)(v8 + 42) = v5;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    *(_WORD *)(v8 + 2LL * *((unsigned __int16 *)a1 + 15) + 56) = 0;
    ExReleaseRundownProtection(v6 + 45);
  }
  else
  {
    return (unsigned int)-1073741446;
  }
  return v2;
}
