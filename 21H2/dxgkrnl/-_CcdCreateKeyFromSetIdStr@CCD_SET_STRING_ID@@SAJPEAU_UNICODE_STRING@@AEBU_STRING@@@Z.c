/*
 * XREFs of ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C01AECD8
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01AF3E8 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01B6FEC (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C01D6A40 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x1C01AEC2C (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(
        PUNICODE_STRING DestinationString,
        const struct _STRING *a2,
        __int64 a3,
        __int64 a4)
{
  USHORT Length; // si
  unsigned __int64 v7; // rax
  wchar_t *v8; // rax
  NTSTATUS v9; // eax
  unsigned int v10; // r14d
  wchar_t *Buffer; // rax
  int Md5Checksum; // eax
  unsigned int v13; // esi
  __int64 result; // rax
  _STRING SourceString; // [rsp+30h] [rbp-38h] BYREF

  Length = a2->Length;
  if ( a2->Length >= 0x80u )
    Length = 128;
  v7 = 2LL * (unsigned __int16)(Length + 34);
  if ( !is_mul_ok((unsigned __int16)(Length + 34), 2uLL) )
    v7 = -1LL;
  v8 = (wchar_t *)operator new[](v7, 0x63644356u, 256LL, a4);
  DestinationString->Buffer = v8;
  if ( v8 )
  {
    DestinationString->Length = 0;
    SourceString.Length = Length;
    SourceString.MaximumLength = Length;
    DestinationString->MaximumLength = 2 * (Length + 1);
    *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
    SourceString.Buffer = a2->Buffer;
    v9 = RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 0);
    v10 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry5(1LL, v9, a2, a2->Length, Length, DestinationString->MaximumLength);
      operator delete[](DestinationString->Buffer);
      result = v10;
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
      v13 = Md5Checksum;
      if ( Md5Checksum < 0 )
      {
        WdLogSingleEntry4(1LL, Md5Checksum, a2, a2->Buffer, a2->Length);
        operator delete[](DestinationString->Buffer);
        result = v13;
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
    WdLogSingleEntry3(6LL, a2, a2->Length, (unsigned __int16)(Length + 34));
    return 3221225495LL;
  }
  return result;
}
