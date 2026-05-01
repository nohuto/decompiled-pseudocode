/*
 * XREFs of sub_1800775D0 @ 0x1800775D0
 * Callers:
 *     sub_18007DC40 @ 0x18007DC40 (sub_18007DC40.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     EdpFree @ 0x180077540 (EdpFree.c)
 */

__int64 __fastcall sub_1800775D0(PSID Sid, _QWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-E0h] BYREF
  int v8; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[384]; // [rsp+40h] [rbp-C0h] BYREF

  v7 = 0LL;
  memset(v10, 0, 0x176uLL);
  *(_QWORD *)&UnicodeString.Length = 24510464LL;
  UnicodeString.Buffer = (PWSTR)v10;
  RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
  v4 = EdpDplPolicyEnabledForUser(UnicodeString.Buffer, &v8);
  if ( v4 < 0 )
    goto LABEL_4;
  if ( !v8 )
  {
    *a2 = 0LL;
    v4 = 0;
LABEL_4:
    v5 = v7;
    goto LABEL_5;
  }
  v4 = EdpQueryDplEnforcedPolicyOwnerIds(UnicodeString.Buffer, &v7);
  if ( v4 < 0 )
    goto LABEL_4;
  v5 = 0LL;
  *a2 = v7;
  v4 = 0;
  v7 = 0LL;
LABEL_5:
  if ( v5 )
    EdpFree();
  return (unsigned int)v4;
}
