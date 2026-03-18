/*
 * XREFs of ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C012D984
 * Callers:
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00E059C (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C012D938 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0133F54 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C012DA1C (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_QueryStringHash(PCANSI_STRING SourceString, struct D3DKMT_HASH *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 Md5Checksum; // rbx
  __int64 v9; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  DestinationString = 0LL;
  v4 = RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 1u);
  Md5Checksum = v4;
  if ( v4 < 0
    || (Md5Checksum = (int)CcdCreateMd5Checksum(
                             (const unsigned __int8 *)DestinationString.Buffer,
                             DestinationString.Length,
                             (unsigned __int8 *)a2 + 4),
        RtlFreeUnicodeString(&DestinationString),
        (int)Md5Checksum < 0) )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v9 + 24) = Md5Checksum;
    *(_QWORD *)(v9 + 32) = SourceString;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    *(_DWORD *)a2 = 1;
  }
  return (unsigned int)Md5Checksum;
}
