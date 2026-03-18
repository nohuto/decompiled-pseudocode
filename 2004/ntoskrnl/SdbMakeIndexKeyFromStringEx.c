/*
 * XREFs of SdbMakeIndexKeyFromStringEx @ 0x140744B20
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x140744250 (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402909B0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeString @ 0x1406B7FF0 (RtlUpcaseUnicodeString.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbMakeIndexKeyFromStringEx(const WCHAR *a1, char a2)
{
  unsigned __int64 v2; // rax
  char *v3; // rdi
  __int64 v4; // rbx
  unsigned __int16 *v5; // r14
  int v6; // edx
  const WCHAR *v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int16 v10; // dx
  __int16 v11; // dx
  UNICODE_STRING v13; // [rsp+38h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v16[16]; // [rsp+68h] [rbp+17h] BYREF
  char v17; // [rsp+78h] [rbp+27h] BYREF

  v2 = -1LL;
  v3 = (char *)&SourceString.MaximumLength + 5;
  v4 = 0LL;
  do
    ++v2;
  while ( a1[v2] );
  v5 = (unsigned __int16 *)v16;
  v6 = a2 & 2;
  DestinationString = 0LL;
  SourceString = 0LL;
  v13 = 0LL;
  if ( v2 > 8 && v6 )
    v7 = &a1[v2 - 8];
  else
    v7 = a1;
  RtlInitUnicodeString(&DestinationString, v7);
  SourceString.Buffer = (wchar_t *)&v17;
  SourceString.MaximumLength = 16;
  RtlCopyUnicodeString(&SourceString, &DestinationString);
  v13.MaximumLength = 16;
  v13.Buffer = (wchar_t *)v16;
  if ( RtlUpcaseUnicodeString(&v13, &SourceString, 0) < 0 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v8 = (unsigned __int64)v13.Length >> 1;
  if ( v8 > 8 )
    return 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  v9 = 0LL;
  if ( v8 )
  {
    do
    {
      v10 = *v5++;
      *v3-- = v10;
      v11 = HIBYTE(v10);
      if ( (_BYTE)v11 )
      {
        if ( v9 < 7 )
        {
          *v3-- = v11;
          ++v9;
        }
      }
      ++v9;
    }
    while ( v9 < v8 );
    return *(_QWORD *)&SourceString.Length;
  }
  return v4;
}
