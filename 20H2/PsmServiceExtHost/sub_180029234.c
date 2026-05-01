/*
 * XREFs of sub_180029234 @ 0x180029234
 * Callers:
 *     sub_180029184 @ 0x180029184 (sub_180029184.c)
 * Callees:
 *     sub_180029370 @ 0x180029370 (sub_180029370.c)
 *     sub_180029764 @ 0x180029764 (sub_180029764.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180029234(PSID Sid, int a2, HKEY *a3)
{
  _WORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebx
  HKEY v10; // rcx
  HKEY v12; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v14[256]; // [rsp+50h] [rbp-B0h] BYREF

  v12 = 0LL;
  memset(v14, 0, 0x1FCuLL);
  *(_QWORD *)&UnicodeString.Length = 33292288LL;
  UnicodeString.Buffer = v14;
  RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
  v6 = v14;
  v7 = 254LL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( v7 )
    v8 = 254 - v7;
  else
    v8 = 0LL;
  if ( v7 )
    sub_180029370(&v14[v8], 254 - v8);
  v9 = sub_180029764(-2147483645, (unsigned int)v14, 0, a2, (__int64)&v12);
  if ( v9 < 0 )
  {
    v10 = v12;
  }
  else
  {
    v10 = 0LL;
    *a3 = v12;
    v9 = 0;
    v12 = 0LL;
  }
  if ( v10 )
    RegCloseKey(v10);
  return (unsigned int)v9;
}
