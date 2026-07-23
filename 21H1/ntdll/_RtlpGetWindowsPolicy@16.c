/*
 * XREFs of _RtlpGetWindowsPolicy@16 @ 0x4B2D8BA1
 * Callers:
 *     _RtlpMuiRegLoadLicInformation@4 @ 0x4B2D50DF (_RtlpMuiRegLoadLicInformation@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtQueryLicenseValue@20 @ 0x4B2F3EB0 (_NtQueryLicenseValue@20.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, PULONG Type, PULONG ResultDataSize, _DWORD *a4)
{
  PVOID Heap; // esi
  NTSTATUS v6; // eax
  NTSTATUS v7; // edi
  ULONG v8; // eax
  SIZE_T v10; // [esp-4h] [ebp-1Ch]
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-Ch] BYREF
  PULONG Typea; // [esp+14h] [ebp-4h]

  Heap = 0;
  Typea = Type;
  if ( !Type || !ResultDataSize || !a4 || !SourceString )
  {
    v7 = -1073741811;
    goto LABEL_13;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v6 = NtQueryLicenseValue(&DestinationString, Type, 0, 0, ResultDataSize);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = *ResultDataSize;
    if ( !*ResultDataSize )
    {
      *a4 = 0;
      return v7;
    }
LABEL_8:
    LODWORD(v10) = v8;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
    goto LABEL_9;
  }
  if ( v6 != -1073741789 )
    goto LABEL_10;
  v8 = *ResultDataSize;
  if ( *ResultDataSize )
    goto LABEL_8;
  Heap = 0;
LABEL_9:
  if ( !Heap )
    return -1073741801;
LABEL_10:
  v7 = NtQueryLicenseValue(&DestinationString, Typea, Heap, *ResultDataSize, ResultDataSize);
  if ( v7 >= 0 )
  {
    *a4 = Heap;
    return v7;
  }
LABEL_13:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v7;
}
