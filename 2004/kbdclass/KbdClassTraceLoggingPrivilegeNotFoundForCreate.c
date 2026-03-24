/*
 * XREFs of KbdClassTraceLoggingPrivilegeNotFoundForCreate @ 0x1C000499C
 * Callers:
 *     KeyboardClassCreate @ 0x1C0001CC0 (KeyboardClassCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002DE0 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1C0007378 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00073AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall KbdClassTraceLoggingPrivilegeNotFoundForCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  char v7; // [rsp+30h] [rbp-19h] BYREF
  char v8; // [rsp+31h] [rbp-18h] BYREF
  int v9; // [rsp+34h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-9h] BYREF
  int *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  char *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  char *v15; // [rsp+80h] [rbp+37h]
  __int64 v16; // [rsp+88h] [rbp+3Fh]

  LOBYTE(a4) = a2;
  if ( (unsigned int)dword_1C000A010 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(a1, a2, a3, a4) )
    {
      v9 = v4;
      v11 = &v9;
      v12 = 4LL;
      v13 = &v7;
      v15 = &v8;
      v7 = v6;
      v14 = 1LL;
      v8 = v5;
      v16 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(v4, (int)&dword_1C000882C, v5, v6, 5u, &v10);
    }
  }
}
