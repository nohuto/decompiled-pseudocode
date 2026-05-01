/*
 * XREFs of ?HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180028F94
 * Callers:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180028EE4 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1800290D0 (RtlStringCopyWorkerW.c)
 *     ?HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z @ 0x1800294C4 (-HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 */

__int64 __fastcall HampUtilCreateUserRegKey(PSID Sid, unsigned int a2, HKEY *a3)
{
  unsigned __int16 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebx
  HKEY v10; // rcx
  HKEY v12; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v14[256]; // [rsp+50h] [rbp-B0h] BYREF

  v12 = 0LL;
  memset_0(v14, 0, 0x1FCuLL);
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
    RtlStringCopyWorkerW(&v14[v8], 254 - v8);
  v9 = HampSystemCreateKey(HKEY_USERS, v14, 0, a2, &v12);
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
