/*
 * XREFs of _RtlpGetPolicyValueForSystemCapability@8 @ 0x4B2EF60F
 * Callers:
 *     _RtlpCapabilityCheckSystemCapability@12 @ 0x4B2EF5A6 (_RtlpCapabilityCheckSystemCapability@12.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _NtQueryLicenseValue@20 @ 0x4B2F3EB0 (_NtQueryLicenseValue@20.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     RtlUnicodeStringInitWorker @ 0x4B32C921 (RtlUnicodeStringInitWorker.c)
 */

NTSTATUS __fastcall RtlpGetPolicyValueForSystemCapability(const UNICODE_STRING *a1, _UNICODE_STRING *a2)
{
  void *v2; // ebx
  wchar_t *StringRoutine; // eax
  wchar_t *v5; // esi
  NTSTATUS appended; // esi
  ULONG v8; // ebx
  PVOID v9; // eax
  int v10; // [esp-8h] [ebp-30h]
  size_t v11; // [esp-4h] [ebp-2Ch]
  SIZE_T v12; // [esp-4h] [ebp-2Ch]
  size_t v13; // [esp-4h] [ebp-2Ch]
  int v14; // [esp-4h] [ebp-2Ch]
  _UNICODE_STRING Destination; // [esp+Ch] [ebp-1Ch] BYREF
  PCUNICODE_STRING Source; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  ULONG Type; // [esp+1Ch] [ebp-Ch] BYREF
  ULONG ResultDataSize; // [esp+20h] [ebp-8h] BYREF
  size_t Size; // [esp+24h] [ebp-4h]

  Source = a1;
  v2 = 0;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0;
  ResultDataSize = 0;
  Type = 0;
  if ( !a1 || !a2 )
  {
    appended = -1073741811;
LABEL_7:
    if ( appended >= 0 )
      goto LABEL_12;
    goto LABEL_8;
  }
  v17 = (unsigned __int16)(a1->Length + 56);
  LODWORD(Size) = (unsigned __int16)v17;
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v17);
  v5 = StringRoutine;
  if ( !StringRoutine )
  {
    appended = -1073741801;
    goto LABEL_8;
  }
  LODWORD(v11) = Size;
  memset(StringRoutine, 0, v11);
  Destination.MaximumLength = v17;
  Destination.Buffer = v5;
  appended = RtlAppendUnicodeStringToString(&Destination, &stru_4B2811E0);
  if ( appended < 0 )
    goto LABEL_8;
  appended = RtlAppendUnicodeStringToString(&Destination, Source);
  if ( appended < 0 )
    goto LABEL_8;
  appended = NtQueryLicenseValue(&Destination, &Type, 0, 0, &ResultDataSize);
  if ( appended != -1073741789 )
    goto LABEL_7;
  v8 = ResultDataSize;
  LODWORD(v12) = ResultDataSize;
  LODWORD(Size) = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v12);
  appended = NtQueryLicenseValue(&Destination, &Type, (PVOID)Size, v8, &ResultDataSize);
  if ( appended < 0 )
    goto LABEL_20;
  if ( Type != 1 || !v8 || (v8 & 1) != 0 )
  {
    appended = -1073741823;
    goto LABEL_20;
  }
  v9 = NtdllpAllocateStringRoutine(v8);
  if ( !v9 )
  {
    appended = -1073741801;
LABEL_20:
    v2 = (void *)Size;
    goto LABEL_8;
  }
  LODWORD(v13) = v8;
  v2 = (void *)Size;
  memcpy(v9, (const void *)Size, v13);
  appended = RtlUnicodeStringInitWorker(v10, v14);
  if ( appended < 0 )
  {
LABEL_8:
    if ( a2 )
      RtlFreeAnsiString(a2);
    goto LABEL_10;
  }
  appended = 0;
LABEL_10:
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
LABEL_12:
  RtlFreeAnsiString(&Destination);
  return appended;
}
