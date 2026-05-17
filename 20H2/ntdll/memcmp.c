/*
 * XREFs of memcmp @ 0x180090100
 * Callers:
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800144C0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlEqualSid @ 0x180038310 (RtlEqualSid.c)
 *     EtwpFindGuidEntry @ 0x1800433D4 (EtwpFindGuidEntry.c)
 *     EtwpGenerateFileName @ 0x18005819C (EtwpGenerateFileName.c)
 *     EtwpRegistrationCompare @ 0x18006DB60 (EtwpRegistrationCompare.c)
 *     RtlpCompareProtectedPolicyEntry @ 0x180075C80 (RtlpCompareProtectedPolicyEntry.c)
 *     RtlSidHashLookup @ 0x180077B70 (RtlSidHashLookup.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x18007B5B0 (RtlpCheckDynamicTimeZoneInformation.c)
 *     EtwpGuidEntryCompare @ 0x180082758 (EtwpGuidEntryCompare.c)
 *     RtlFindUnicodeSubstring @ 0x180087220 (RtlFindUnicodeSubstring.c)
 *     RtlReplaceSidInSd @ 0x1800E6E60 (RtlReplaceSidInSd.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800EAAE0 (RtlpIsAttributeAceInSacl.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800FB89C (RtlpIsNameInExpressionPrivate.c)
 *     RtlpStackDbEntryIsEqual @ 0x18011946C (RtlpStackDbEntryIsEqual.c)
 *     RtlpStackDbSegmentComparitor @ 0x180119578 (RtlpStackDbSegmentComparitor.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
