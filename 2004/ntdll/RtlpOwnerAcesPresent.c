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

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned int v8; // ecx
  int v9; // edx
  unsigned __int8 *v10; // rcx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int16 v13; // [rsp+24h] [rbp-24h]
  __int16 v14; // [rsp+28h] [rbp-20h] BYREF
  int v15; // [rsp+30h] [rbp-18h]

  v12 = 0;
  v13 = 768;
  LOBYTE(a3) = 1;
  if ( (int)RtlInitializeSid(&v14, &v12, a3) < 0 )
    return 0;
  v15 = 4;
  if ( !a2 )
    return 0;
  v5 = (unsigned __int8 *)(a2 + 8);
  v6 = 0;
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    if ( (v5[1] & 8) == 0 )
    {
      v8 = *v5;
      if ( (unsigned __int8)v8 <= 0x10u && (v9 = 104928, _bittest(&v9, v8)) )
      {
        v10 = &v5[16 * (*((_DWORD *)v5 + 2) & 1) + ((8LL * (*((_DWORD *)v5 + 2) & 2)) | 0xC)];
      }
      else if ( (_BYTE)v8 == 4 )
      {
        v10 = v5 + 12;
      }
      else
      {
        v10 = (unsigned __int8)v8 < 0xBu || (unsigned __int8)(v8 - 13) <= 1u ? v5 + 8 : 0LL;
      }
      if ( v10 && RtlEqualSid(v10, &v14) && (!a1 || (a1 & v5[1]) != 0) )
        break;
    }
    ++v6;
    v5 += *((unsigned __int16 *)v5 + 1);
    if ( v6 >= v7 )
      return 0;
  }
  return 1;
}
