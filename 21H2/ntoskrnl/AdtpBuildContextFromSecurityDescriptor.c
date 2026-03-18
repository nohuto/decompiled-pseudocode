/*
 * XREFs of AdtpBuildContextFromSecurityDescriptor @ 0x14064C418
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14064B46C (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     SeRmReferenceFindCapName @ 0x1405F5B98 (SeRmReferenceFindCapName.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14066FE80 (RtlGetSaclSecurityDescriptor.c)
 */

int __fastcall AdtpBuildContextFromSecurityDescriptor(void *a1, __int64 a2)
{
  int result; // eax
  void *v4; // rdi
  unsigned __int8 *AceByType; // rax
  BOOLEAN v6; // [rsp+40h] [rbp+8h] BYREF
  BOOLEAN v7; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 0;
  *(_QWORD *)a2 = a1;
  v6 = 0;
  result = RtlGetSaclSecurityDescriptor(a1, &v6, (PACL *)&v9, &v7);
  if ( result < 0 )
    goto LABEL_9;
  v4 = 0LL;
  if ( v6 )
  {
    while ( 1 )
    {
      AceByType = RtlFindAceByType(v9, 19, &v8);
      if ( AceByType )
      {
        if ( (AceByType[1] & 8) == 0 )
          break;
      }
      ++v8;
      if ( !AceByType )
        goto LABEL_8;
    }
    v4 = AceByType + 8;
  }
LABEL_8:
  result = SeRmReferenceFindCapName(v4, (_DWORD *)(a2 + 8), (__int64 *)(a2 + 16));
  if ( result < 0 )
  {
LABEL_9:
    *(_DWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  return result;
}
