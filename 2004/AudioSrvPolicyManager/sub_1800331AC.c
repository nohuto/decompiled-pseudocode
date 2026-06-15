/*
 * XREFs of sub_1800331AC @ 0x1800331AC
 * Callers:
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_1800362DC @ 0x1800362DC (sub_1800362DC.c)
 *     sub_180036308 @ 0x180036308 (sub_180036308.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800331AC(__int64 a1, struct _SID_IDENTIFIER_AUTHORITY *a2, UCHAR a3, __int64 a4)
{
  DWORD v6; // esi
  UCHAR *p_nSubAuthorityCount; // r14
  DWORD v8; // ebx
  DWORD LengthSid; // eax
  int v11; // eax
  _BYTE Sid[80]; // [rsp+30h] [rbp-29h] BYREF
  UCHAR nSubAuthorityCount; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v14; // [rsp+D8h] [rbp+7Fh]

  nSubAuthorityCount = a3;
  v14 = a4;
  *(_QWORD *)a1 = off_18003F6E0;
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 7;
  *(_QWORD *)(a1 + 88) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[3])(&off_18004F098) + 24;
  *(_QWORD *)(a1 + 96) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[3])(&off_18004F098) + 24;
  *(_QWORD *)(a1 + 104) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[3])(&off_18004F098) + 24;
  *(_QWORD *)(a1 + 112) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[3])(&off_18004F098) + 24;
  if ( !nSubAuthorityCount || GetSidLengthRequired(nSubAuthorityCount) > 0x44 )
    goto LABEL_12;
  if ( !InitializeSid(Sid, a2, nSubAuthorityCount) )
    sub_180036308();
  v6 = 0;
  if ( nSubAuthorityCount )
  {
    p_nSubAuthorityCount = &nSubAuthorityCount;
    do
    {
      p_nSubAuthorityCount += 8;
      v8 = *(_DWORD *)p_nSubAuthorityCount;
      *GetSidSubAuthority(Sid, v6++) = v8;
    }
    while ( v6 < nSubAuthorityCount );
  }
  if ( !IsValidSid(Sid) || (LengthSid = GetLengthSid(Sid), LengthSid > 0x44) )
LABEL_12:
    sub_18000A174(-2147024809);
  *(_BYTE *)(a1 + 76) = 1;
  if ( !CopySid(LengthSid, (PSID)(a1 + 8), Sid) )
  {
    v11 = sub_1800362DC();
    *(_BYTE *)(a1 + 76) = 0;
    sub_18000A174(v11);
  }
  *(_DWORD *)(a1 + 80) = 8;
  return a1;
}
