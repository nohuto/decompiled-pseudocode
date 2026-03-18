/*
 * XREFs of VrpBuildKeyPath @ 0x1405CC004
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1405CA8F4 (VrpCreateNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x1405CABE4 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x1405CB3C0 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x1405CB6B0 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x1405CBA18 (VrpTranslatePath.c)
 *     VrpPreLoadKey @ 0x14088029C (VrpPreLoadKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140202B70 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x1402909B0 (RtlCopyUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpBuildKeyPath(PCUNICODE_STRING SourceString, PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  unsigned int v3; // ebx
  PCUNICODE_STRING v4; // rsi
  SIZE_T v7; // rdx
  wchar_t *PoolWithTag; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v4 = (PCUNICODE_STRING)v10;
  v10[0] = 0LL;
  v10[1] = 0LL;
  if ( SourceString )
    v4 = SourceString;
  Destination->Length = 0;
  v7 = (unsigned __int16)(Source->Length + 2 + v4->MaximumLength);
  Destination->MaximumLength = v7;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x67655256u);
  Destination->Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCopyUnicodeString(Destination, v4);
    if ( Source->Length )
    {
      if ( *Source->Buffer != 92 && v4->Buffer[((unsigned __int64)v4->Length >> 1) - 1] != 92 )
        RtlAppendUnicodeToString(Destination, L"\\");
      RtlAppendUnicodeStringToString(Destination, Source);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
