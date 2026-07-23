/*
 * XREFs of _RtlpValidFilterAclSubjectContext@8 @ 0x4B2D8C55
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlFindAceByType@12 @ 0x4B2D7FA0 (_RtlFindAceByType@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _RtlpValidTrustSubjectContext@16 @ 0x4B34A352 (_RtlpValidTrustSubjectContext@16.c)
 */

int __fastcall RtlpValidFilterAclSubjectContext(PACL Acl, void *a2)
{
  _DWORD *AceByType; // eax
  int v4; // ecx
  _DWORD *v5; // esi
  size_t v7; // [esp-4h] [ebp-28h]
  int v9; // [esp+10h] [ebp-14h] BYREF
  ULONG Index; // [esp+14h] [ebp-10h] BYREF
  int Buf2; // [esp+18h] [ebp-Ch] BYREF
  __int16 v12; // [esp+1Ch] [ebp-8h]

  v9 = 0;
  Buf2 = 0;
  v12 = 256;
  Index = 0;
  while ( 1 )
  {
    AceByType = RtlFindAceByType(Acl, 0x15u, &Index);
    v5 = AceByType;
    if ( !AceByType )
      goto LABEL_3;
    if ( (AceByType[1] & 0xFF000000) != 0 )
      return -1073741811;
    if ( (*((_BYTE *)AceByType + 1) & 0x40) == 0 )
      break;
    if ( !(unsigned __int8)RtlpValidTrustSubjectContext(a2, AceByType + 2, v4, (int)&v9) )
      return -1073741790;
LABEL_3:
    ++Index;
    if ( !v5 )
      return v9;
  }
  LODWORD(v7) = 6;
  if ( !memcmp((char *)AceByType + 10, &Buf2, v7) && *((_BYTE *)v5 + 9) == 1 && !v5[4] )
    goto LABEL_3;
  return -1073741811;
}
