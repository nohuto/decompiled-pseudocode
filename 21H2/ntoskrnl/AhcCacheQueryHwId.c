/*
 * XREFs of AhcCacheQueryHwId @ 0x1409802AC
 * Callers:
 *     NtApphelpCacheControl @ 0x1405E5590 (NtApphelpCacheControl.c)
 * Callees:
 *     ExGetPreviousMode @ 0x14021B500 (ExGetPreviousMode.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     KseLookupHardwareId @ 0x1408C0C64 (KseLookupHardwareId.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AhcCacheQueryHwId(unsigned __int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  char *v4; // rcx
  __int64 v5; // rdx
  unsigned __int16 Length; // di
  wchar_t *Buffer; // rsi
  unsigned __int64 v8; // rcx
  bool v9; // cl
  __int64 v10; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-1A8h] BYREF
  char v13; // [rsp+30h] [rbp-198h] BYREF
  UNICODE_STRING SourceString; // [rsp+168h] [rbp-60h] BYREF

  DestinationString = 0LL;
  if ( ExGetPreviousMode() == 1 )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v3 = a1;
    v4 = &v13;
    v5 = 2LL;
    do
    {
      *(_OWORD *)v4 = *(_OWORD *)v3;
      *((_OWORD *)v4 + 1) = *(_OWORD *)(v3 + 16);
      *((_OWORD *)v4 + 2) = *(_OWORD *)(v3 + 32);
      *((_OWORD *)v4 + 3) = *(_OWORD *)(v3 + 48);
      *((_OWORD *)v4 + 4) = *(_OWORD *)(v3 + 64);
      *((_OWORD *)v4 + 5) = *(_OWORD *)(v3 + 80);
      *((_OWORD *)v4 + 6) = *(_OWORD *)(v3 + 96);
      v4 += 128;
      *((_OWORD *)v4 - 1) = *(_OWORD *)(v3 + 112);
      v3 += 128LL;
      --v5;
    }
    while ( v5 );
    *(_OWORD *)v4 = *(_OWORD *)v3;
    *((_OWORD *)v4 + 1) = *(_OWORD *)(v3 + 16);
    *((_OWORD *)v4 + 2) = *(_OWORD *)(v3 + 32);
    *((_OWORD *)v4 + 3) = *(_OWORD *)(v3 + 48);
    *((_OWORD *)v4 + 4) = *(_OWORD *)(v3 + 64);
    *((_OWORD *)v4 + 5) = *(_OWORD *)(v3 + 80);
    *((_OWORD *)v4 + 6) = *(_OWORD *)(v3 + 96);
    *((_QWORD *)v4 + 14) = *(_QWORD *)(v3 + 112);
    if ( SourceString.MaximumLength
      && (Length = SourceString.Length) != 0
      && (Buffer = SourceString.Buffer) != 0LL
      && ((SourceString.MaximumLength | SourceString.Length) & 1) == 0
      && SourceString.Length <= SourceString.MaximumLength
      && SourceString.Length <= 0xFFFCu )
    {
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, SourceString.Length + 2LL, 0x6F637061u);
      if ( DestinationString.Buffer )
      {
        DestinationString.MaximumLength = Length + 2;
        DestinationString.Length = 0;
        memset(DestinationString.Buffer, 0, (unsigned __int16)(Length + 2));
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v8 = (unsigned __int64)Buffer + SourceString.MaximumLength;
        if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        v9 = (unsigned int)KseLookupHardwareId(DestinationString.Buffer) == 0;
        v10 = a1 + 304;
        if ( a1 + 304 >= 0x7FFFFFFF0000LL )
          v10 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v10 = v9;
        v2 = 0;
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  else
  {
    v2 = -1073741822;
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x6F637061u);
  return v2;
}
