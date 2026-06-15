/*
 * XREFs of sub_180006CE0 @ 0x180006CE0
 * Callers:
 *     sub_180005E08 @ 0x180005E08 (sub_180005E08.c)
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D5648 @ 0x1800D5648 (sub_1800D5648.c)
 *     sub_1800D5670 @ 0x1800D5670 (sub_1800D5670.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180006CE0(__int64 a1, struct _SID_IDENTIFIER_AUTHORITY *a2, BYTE a3, __int64 a4)
{
  DWORD v6; // ebx
  DWORD *v7; // rsi
  DWORD v8; // edi
  DWORD LengthSid; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v14; // eax
  _BYTE Sid[80]; // [rsp+30h] [rbp-88h] BYREF
  BYTE v16; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v17; // [rsp+D8h] [rbp+20h]

  v16 = a3;
  v17 = a4;
  *(_QWORD *)a1 = off_180146480;
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 7;
  *(_QWORD *)(a1 + 88) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  *(_QWORD *)(a1 + 96) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  *(_QWORD *)(a1 + 104) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  *(_QWORD *)(a1 + 112) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  if ( !v16 || GetSidLengthRequired(v16) > 0x44 )
    goto LABEL_12;
  if ( !InitializeSid(Sid, a2, v16) )
    sub_1800D5670();
  v6 = 0;
  if ( v16 )
  {
    v7 = (DWORD *)&v16;
    do
    {
      v7 += 2;
      v8 = *v7;
      *GetSidSubAuthority(Sid, v6++) = v8;
    }
    while ( v6 < v16 );
  }
  if ( !IsValidSid(Sid) || (LengthSid = GetLengthSid(Sid), LengthSid > 0x44) )
LABEL_12:
    sub_1800B8610(2147942487LL);
  *(_BYTE *)(a1 + 76) = 1;
  if ( !CopySid(LengthSid, (PSID)(a1 + 8), Sid) )
  {
    v14 = sub_1800D5648(v11, v10, v12);
    *(_BYTE *)(a1 + 76) = 0;
    sub_1800B8610(v14);
  }
  *(_DWORD *)(a1 + 80) = 8;
  return a1;
}
