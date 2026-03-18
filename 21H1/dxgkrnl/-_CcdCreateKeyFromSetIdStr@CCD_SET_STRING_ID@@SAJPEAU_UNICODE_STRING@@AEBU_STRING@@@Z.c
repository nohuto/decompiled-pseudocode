/*
 * XREFs of ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00E8538
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00E6F7C (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C01392C8 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01398C4 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x1C00E866C (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(
        PUNICODE_STRING DestinationString,
        const struct _STRING *a2)
{
  USHORT Length; // si
  unsigned __int64 v5; // r14
  SIZE_T v6; // rax
  wchar_t *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  wchar_t *Buffer; // rax
  int Md5Checksum; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 result; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  struct _STRING SourceString; // [rsp+20h] [rbp-38h] BYREF

  Length = a2->Length;
  if ( a2->Length >= 0x80u )
    Length = 128;
  v5 = (unsigned __int16)(Length + 34);
  v6 = 2 * v5;
  if ( !is_mul_ok(v5, 2uLL) )
    v6 = -1LL;
  v7 = (wchar_t *)operator new[](v6, 0x63644356u, PagedPool);
  DestinationString->Buffer = v7;
  if ( v7 )
  {
    memset(v7, 0, 2 * v5);
    DestinationString->Length = 0;
    SourceString.Length = Length;
    DestinationString->MaximumLength = 2 * (Length + 1);
    SourceString.MaximumLength = Length;
    *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
    SourceString.Buffer = a2->Buffer;
    v12 = RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 0);
    v15 = v12;
    if ( v12 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v13);
      v23[3] = v15;
      v23[4] = a2;
      v23[5] = a2->Length;
      v23[6] = Length;
      v23[7] = DestinationString->MaximumLength;
      WdLogEvent5_WdAssertion(v23);
      operator delete[](DestinationString->Buffer);
      result = (unsigned int)v15;
      *DestinationString = 0LL;
    }
    else
    {
      Buffer = DestinationString->Buffer;
      DestinationString->MaximumLength = 2 * (Length + 34);
      Buffer[Length] = 94;
      Md5Checksum = CcdCreateMd5Checksum(
                      (const unsigned __int8 *)a2->Buffer,
                      a2->Length,
                      &DestinationString->Buffer[Length + 1]);
      v20 = Md5Checksum;
      if ( Md5Checksum < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19, v18);
        v24[3] = v20;
        v24[4] = a2;
        v24[5] = a2->Buffer;
        v24[6] = a2->Length;
        WdLogEvent5_WdAssertion(v24);
        operator delete[](DestinationString->Buffer);
        result = (unsigned int)v20;
        *DestinationString = 0LL;
      }
      else
      {
        DestinationString->Length = DestinationString->MaximumLength - 2;
        return 0LL;
      }
    }
  }
  else
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    v22[3] = a2;
    v22[4] = a2->Length;
    v22[5] = v5;
    WdLogEvent5_WdLowResource(v22);
    return 3221225495LL;
  }
  return result;
}
