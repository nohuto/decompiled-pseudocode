/*
 * XREFs of RtlUnicodeStringCopy @ 0x140203DF0
 * Callers:
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x14032AFF0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpCopyDataEntry @ 0x14057E1E0 (SshpCopyDataEntry.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405CFBFC (VrpHandleIoctlInitializeJobForVreg.c)
 *     CmpLinkHiveToMaster @ 0x1405DA88C (CmpLinkHiveToMaster.c)
 *     CmpDoWritethroughReparse @ 0x14060C070 (CmpDoWritethroughReparse.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     PopUnicodeStringDeepCopy @ 0x1406E1710 (PopUnicodeStringDeepCopy.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406E23E4 (CmpLogTransactionAbortedWithChildName.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x1407CC03C (MiConstructNonRetpolineImageLoadRecord.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1408733F8 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     PopCloneUnicodeString @ 0x1408E3988 (PopCloneUnicodeString.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14096C3D8 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x140203EBC (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v2; // r8d
  __int16 v3; // di
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  NTSTATUS result; // eax
  size_t v9; // rdx
  __int64 v10; // rcx
  ULONG v11; // r8d
  int v12; // ecx
  wchar_t *Buffer; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rsi

  v3 = 0;
  v5 = 0LL;
  v6 = 0LL;
  result = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)SourceString, v2);
  if ( result >= 0 )
  {
    if ( v10 )
    {
      v5 = *(_QWORD *)(v10 + 8);
      v6 = (unsigned __int64)*(unsigned __int16 *)(v10 + 2) >> 1;
    }
    v12 = RtlUnicodeStringValidateWorker(SourceString, v9, v11);
    if ( v12 >= 0 )
    {
      if ( SourceString )
      {
        Buffer = SourceString->Buffer;
        v14 = (unsigned __int64)SourceString->Length >> 1;
      }
      v12 = 0;
      if ( v6 )
      {
        v15 = v5 - (_QWORD)Buffer;
        while ( v14 )
        {
          --v14;
          *(wchar_t *)((char *)Buffer + v15) = *Buffer;
          ++v3;
          ++Buffer;
          if ( !--v6 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( v14 )
          v12 = -2147483643;
      }
    }
    result = v12;
    DestinationString->Length = 2 * v3;
  }
  return result;
}
