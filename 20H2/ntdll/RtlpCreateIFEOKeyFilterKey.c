/*
 * XREFs of RtlpCreateIFEOKeyFilterKey @ 0x1800E38AC
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800752DC (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlRandomEx @ 0x180043CE0 (RtlRandomEx.c)
 *     RtlStringFromGUIDEx @ 0x180069B80 (RtlStringFromGUIDEx.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwCreateKey @ 0x18009D450 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpCreateIFEOKeyFilterKey(_QWORD *a1, __int64 a2)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdi
  int Key; // ebx
  __int32 v8; // [rsp+44h] [rbp-45h] BYREF
  __int64 v9; // [rsp+48h] [rbp-41h]
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-39h] BYREF
  int v11; // [rsp+60h] [rbp-29h]
  __int64 v12; // [rsp+68h] [rbp-21h]
  UNICODE_STRING *p_UnicodeString; // [rsp+70h] [rbp-19h]
  int v14; // [rsp+78h] [rbp-11h]
  __int128 v15; // [rsp+80h] [rbp-9h]
  unsigned int v16[4]; // [rsp+90h] [rbp+7h] BYREF

  v9 = 0LL;
  v4 = v16;
  v8 = MEMORY[0x7FFE0014];
  v5 = 8LL;
  do
  {
    *(_WORD *)v4 = RtlRandomEx(&v8);
    v4 = (unsigned int *)((char *)v4 + 2);
    --v5;
  }
  while ( v5 );
  Key = RtlStringFromGUIDEx(v16, (__int64)&UnicodeString, 1);
  if ( Key >= 0 )
  {
    v11 = 48;
    p_UnicodeString = &UnicodeString;
    v12 = a2;
    v14 = 576;
    v15 = 0LL;
    Key = ZwCreateKey();
    RtlFreeAnsiString(&UnicodeString);
    if ( Key >= 0 )
      *a1 = v9;
  }
  return (unsigned int)Key;
}
