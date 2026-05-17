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

int __thiscall RtlpValidFilterAclSubjectContext(void *this)
{
  unsigned __int8 *AceByType; // eax
  int v3; // ecx
  unsigned __int8 *v4; // esi
  int v6; // [esp+10h] [ebp-14h] BYREF
  unsigned int v7; // [esp+14h] [ebp-10h] BYREF
  int Buf2; // [esp+18h] [ebp-Ch] BYREF
  __int16 v9; // [esp+1Ch] [ebp-8h]

  v6 = 0;
  Buf2 = 0;
  v9 = 256;
  v7 = 0;
  while ( 1 )
  {
    AceByType = RtlFindAceByType((int)this, 21, &v7);
    v4 = AceByType;
    if ( !AceByType )
      goto LABEL_3;
    if ( (*((_DWORD *)AceByType + 1) & 0xFF000000) != 0 )
      return -1073741811;
    if ( (AceByType[1] & 0x40) == 0 )
      break;
    if ( !(unsigned __int8)RtlpValidTrustSubjectContext(v3, &v6) )
      return -1073741790;
LABEL_3:
    ++v7;
    if ( !v4 )
      return v6;
  }
  if ( !memcmp(AceByType + 10, &Buf2, 6u) && v4[9] == 1 && !*((_DWORD *)v4 + 4) )
    goto LABEL_3;
  return -1073741811;
}
