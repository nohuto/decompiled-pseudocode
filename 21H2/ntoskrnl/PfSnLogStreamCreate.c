/*
 * XREFs of PfSnLogStreamCreate @ 0x14067AF24
 * Callers:
 *     PfFileInfoNotify @ 0x140328350 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     PfSnLogHelper @ 0x14067B08C (PfSnLogHelper.c)
 *     RtlUpcaseUnicodeString @ 0x14067B110 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall PfSnLogStreamCreate(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  unsigned int v4; // eax
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  struct _EX_RUNDOWN_REF *v7; // r13
  __int64 *v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v15; // [rsp+70h] [rbp+30h] BYREF

  v1 = 0;
  v2 = *(unsigned __int16 *)(a1 + 34);
  v4 = (unsigned __int16)*(_DWORD *)(a1 + 32);
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v15 = 0LL;
  if ( v2 <= v4 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v5 = v2 - v4;
    v6 = ((unsigned __int64)(unsigned int)(2 * v5 + 70) + 15) >> 4;
    v7 = (struct _EX_RUNDOWN_REF *)PfSnLogHelper(*(_QWORD *)a1, (unsigned int)v6, &v15);
    if ( v7 )
    {
      v8 = v15;
      DestinationString.Length = 0;
      *(_OWORD *)v15 = 0LL;
      *v8 = (8LL * (unsigned int)(v6 - 1)) | 5;
      v9 = ((unsigned __int64)v8 + 23) & 0xFFFFFFFFFFFFFFF8uLL;
      v8[1] = *(_QWORD *)(a1 + 16);
      *(_QWORD *)v9 = 0LL;
      DestinationString.Buffer = (wchar_t *)(v9 + 44);
      v10 = (unsigned __int16)*(_DWORD *)(a1 + 32);
      v11 = *(_QWORD *)(a1 + 24);
      DestinationString.MaximumLength = 2 * v5;
      SourceString.Length = 2 * v5;
      SourceString.MaximumLength = 2 * v5;
      SourceString.Buffer = (wchar_t *)(v11 + 2 * v10);
      LODWORD(v10) = *(_DWORD *)(v9 + 40);
      *(_DWORD *)v9 = 8 * ((2 * v5 + 54) & 0xFFFFFFF);
      *(_DWORD *)(v9 + 4) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(a1 + 44);
      *(_QWORD *)(v9 + 24) = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(v9 + 32) = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(v9 + 16) = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(v9 + 40) ^= (*(_DWORD *)(a1 + 36) ^ v10) & 1;
      *(_DWORD *)(v9 + 40) ^= ((unsigned __int8)*(_DWORD *)(v9 + 40) ^ (unsigned __int8)(2 * *(_DWORD *)(a1 + 36))) & 4;
      *(_WORD *)(v9 + 42) = v5;
      RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
      *(_WORD *)(v9 + 2 * v5 + 44) = 0;
      ExReleaseRundownProtection(v7 + 45);
    }
    else
    {
      return (unsigned int)-1073741446;
    }
  }
  return v1;
}
