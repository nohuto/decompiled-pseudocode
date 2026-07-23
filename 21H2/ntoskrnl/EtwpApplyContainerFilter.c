/*
 * XREFs of EtwpApplyContainerFilter @ 0x140940844
 * Callers:
 *     EtwpApplyScopeFilters @ 0x140638F28 (EtwpApplyScopeFilters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1403D2380 (_wcsnicmp.c)
 *     RtlUTF8ToUnicodeN @ 0x140615810 (RtlUTF8ToUnicodeN.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall EtwpApplyContainerFilter(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  char v4; // bl
  __int64 v5; // rsi
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rbp
  __int64 v8; // rdx
  const CHAR *v10; // r9
  unsigned __int16 v11; // di
  unsigned int v12; // r15d
  ULONG UTF8StringByteCount; // [rsp+20h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  DestinationString = 0LL;
  v4 = 1;
  v5 = *(_QWORD *)(v2 + 392);
  if ( v5 == EtwpHostSiloState )
  {
    RtlInitUnicodeString(&DestinationString, L"Host");
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
  }
  else
  {
    v8 = *(unsigned __int16 *)(v5 + 4200);
    UnicodeStringActualByteCount = 0;
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v8 + 2, 0x46777445u);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      return 1;
    v10 = *(const CHAR **)(v5 + 4192);
    UTF8StringByteCount = *(unsigned __int16 *)(v5 + 4200);
    DestinationString.MaximumLength = 2 * (UTF8StringByteCount + 1);
    RtlUTF8ToUnicodeN(
      DestinationString.Buffer,
      DestinationString.MaximumLength,
      &UnicodeStringActualByteCount,
      v10,
      UTF8StringByteCount);
    Length = UnicodeStringActualByteCount;
    DestinationString.Length = UnicodeStringActualByteCount;
  }
  v11 = 0;
  v12 = Length >> 1;
  if ( *a2 )
  {
    while ( (unsigned __int16)a2[8 * v11 + 4] != v12 || wcsnicmp(*(const wchar_t **)&a2[8 * v11 + 8], Buffer, v12) )
    {
      if ( ++v11 >= *a2 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v4 = 0;
  }
  if ( v5 != EtwpHostSiloState )
    RtlFreeAnsiString(&DestinationString);
  return v4;
}
