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

int __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, int a2, int *a3, int *a4)
{
  int Heap; // esi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  UNICODE_STRING DestinationString; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-4h]

  Heap = 0;
  v11 = a2;
  if ( !a2 || !a3 || !a4 || !SourceString )
  {
    v7 = -1073741811;
    goto LABEL_13;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v6 = NtQueryLicenseValue(&DestinationString, a2, 0, 0, a3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = *a3;
    if ( !*a3 )
    {
      *a4 = 0;
      return v7;
    }
LABEL_8:
    Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v8);
    goto LABEL_9;
  }
  if ( v6 != -1073741789 )
    goto LABEL_10;
  v8 = *a3;
  if ( *a3 )
    goto LABEL_8;
  Heap = 0;
LABEL_9:
  if ( !Heap )
    return -1073741801;
LABEL_10:
  v7 = NtQueryLicenseValue(&DestinationString, v11, Heap, *a3, a3);
  if ( v7 >= 0 )
  {
    *a4 = Heap;
    return v7;
  }
LABEL_13:
  if ( Heap )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v7;
}
