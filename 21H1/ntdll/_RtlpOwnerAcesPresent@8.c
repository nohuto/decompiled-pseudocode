/*
 * XREFs of _RtlpOwnerAcesPresent@8 @ 0x4B2D8769
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlOwnerAcesPresent@4 @ 0x4B346CE0 (_RtlOwnerAcesPresent@4.c)
 * Callees:
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, int a2)
{
  unsigned int v2; // ebx
  char *v4; // esi
  unsigned int v5; // edi
  unsigned __int8 v6; // al
  char *v7; // ecx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [esp+Ch] [ebp-1Ch] BYREF
  unsigned __int8 v10; // [esp+16h] [ebp-12h]
  unsigned __int8 v11; // [esp+17h] [ebp-11h]
  _BYTE Sid[8]; // [esp+18h] [ebp-10h] BYREF
  int v13; // [esp+20h] [ebp-8h]

  v11 = a1;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  v2 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) < 0 )
    return 0;
  v13 = 4;
  if ( !a2 )
    return 0;
  v4 = (char *)(a2 + 8);
  v5 = *(unsigned __int16 *)(a2 + 4);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v10 = v4[1];
    if ( (v10 & 8) == 0 )
    {
      if ( ((v6 = *v4, (unsigned __int8)*v4 < 5u) || v6 > 8u) && (v6 < 0xBu || v6 > 0xCu) && (v6 < 0xFu || v6 > 0x10u) )
      {
        if ( v6 == 4 )
          v7 = v4 + 12;
        else
          v7 = v6 <= 0xAu || (unsigned __int8)(v6 - 13) <= 1u ? v4 + 8 : 0;
      }
      else
      {
        v7 = &v4[16 * (*((_DWORD *)v4 + 2) & 1) + ((8 * (*((_DWORD *)v4 + 2) & 2)) | 0xC)];
      }
      if ( v7 && RtlEqualSid(v7, Sid) && (!v11 || (v11 & v10) != 0) )
        break;
    }
    ++v2;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v2 >= v5 )
      return 0;
  }
  return 1;
}
