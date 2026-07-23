/*
 * XREFs of RtlpOwnerAcesPresent @ 0x18003FB88
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlOwnerAcesPresent @ 0x1800E69D0 (RtlOwnerAcesPresent.c)
 * Callees:
 *     RtlEqualSid @ 0x180038310 (RtlEqualSid.c)
 *     RtlInitializeSid @ 0x180040060 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  unsigned __int8 *v4; // rbx
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ecx
  int v8; // edx
  unsigned __int8 *v9; // rcx
  _SID_IDENTIFIER_AUTHORITY v11; // [rsp+20h] [rbp-28h] BYREF
  _BYTE Sid2[8]; // [rsp+28h] [rbp-20h] BYREF
  int v13; // [rsp+30h] [rbp-18h]

  *(_DWORD *)v11.Value = 0;
  *(_WORD *)&v11.Value[4] = 768;
  if ( RtlInitializeSid(Sid2, &v11, 1u) < 0 )
    return 0;
  v13 = 4;
  if ( !a2 )
    return 0;
  v4 = (unsigned __int8 *)(a2 + 8);
  v5 = 0;
  v6 = *(unsigned __int16 *)(a2 + 4);
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    if ( (v4[1] & 8) == 0 )
    {
      v7 = *v4;
      if ( (unsigned __int8)v7 <= 0x10u && (v8 = 104928, _bittest(&v8, v7)) )
      {
        v9 = &v4[16 * (*((_DWORD *)v4 + 2) & 1) + ((8LL * (*((_DWORD *)v4 + 2) & 2)) | 0xC)];
      }
      else if ( (_BYTE)v7 == 4 )
      {
        v9 = v4 + 12;
      }
      else
      {
        v9 = (unsigned __int8)v7 < 0xBu || (unsigned __int8)(v7 - 13) <= 1u ? v4 + 8 : 0LL;
      }
      if ( v9 && RtlEqualSid(v9, Sid2) && (!a1 || (a1 & v4[1]) != 0) )
        break;
    }
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= v6 )
      return 0;
  }
  return 1;
}
