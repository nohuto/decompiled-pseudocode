/*
 * XREFs of SeQueryMandatoryLabel @ 0x1406FD864
 * Callers:
 *     MiAllowImageMap @ 0x140627820 (MiAllowImageMap.c)
 * Callees:
 *     RtlFindAceByType @ 0x14020F8B0 (RtlFindAceByType.c)
 *     RtlSubAuthorityCountSid @ 0x140340E40 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x140340E50 (RtlSubAuthoritySid.c)
 */

__int64 __fastcall SeQueryMandatoryLabel(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebx
  __int64 v3; // rax
  ACL *v4; // rdi
  PSID v5; // rsi
  char *AceByType; // rax
  int v7; // ecx
  ULONG Index; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  if ( (v1 & 0x10) == 0 )
    goto LABEL_11;
  if ( v1 >= 0 )
  {
    v4 = *(ACL **)(a1 + 24);
    goto LABEL_5;
  }
  v3 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v3 )
    v4 = (ACL *)(a1 + v3);
  else
LABEL_11:
    v4 = 0LL;
LABEL_5:
  v5 = SepDefaultMandatorySid;
  Index = 0;
  while ( 1 )
  {
    AceByType = (char *)RtlFindAceByType(v4, 0x11u, &Index);
    if ( AceByType )
    {
      if ( (AceByType[1] & 8) == 0 )
        break;
    }
    ++Index;
    if ( !AceByType )
      goto LABEL_8;
  }
  v5 = AceByType + 8;
LABEL_8:
  v7 = *RtlSubAuthorityCountSid(v5);
  if ( (_BYTE)v7 )
    return *RtlSubAuthoritySid(v5, v7 - 1);
  return v2;
}
