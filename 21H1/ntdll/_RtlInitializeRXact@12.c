/*
 * XREFs of _RtlInitializeRXact@12 @ 0x4B345820
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _ZwDeleteKey@4 @ 0x4B2F36B0 (_ZwDeleteKey@4.c)
 *     _NtDeleteValueKey@8 @ 0x4B2F36E0 (_NtDeleteValueKey@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RXactpCommit@4 @ 0x4B34539B (_RXactpCommit@4.c)
 *     _RtlAbortRXact@4 @ 0x4B345550 (_RtlAbortRXact@4.c)
 *     _RtlpNtQueryValueKey@20 @ 0x4B36D280 (_RtlpNtQueryValueKey@20.c)
 */

NTSTATUS __stdcall RtlInitializeRXact(void *a1, char a2, PVOID *a3)
{
  NTSTATUS result; // eax
  _DWORD *Heap; // ecx
  HANDLE v5; // eax
  NTSTATUS ValueKey; // esi
  _DWORD *v7; // esi
  NTSTATUS v8; // ebx
  SIZE_T v9; // [esp-4h] [ebp-F4h]
  SIZE_T v10; // [esp-4h] [ebp-F4h]
  HANDLE KeyHandle; // [esp+Ch] [ebp-E4h] BYREF
  ULONG ResultLength; // [esp+10h] [ebp-E0h] BYREF
  int v13; // [esp+14h] [ebp-DCh] BYREF
  _UNICODE_STRING ValueName; // [esp+18h] [ebp-D8h] BYREF
  ULONG Disposition; // [esp+20h] [ebp-D0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+24h] [ebp-CCh] BYREF
  int v17; // [esp+3Ch] [ebp-B4h] BYREF
  _UNICODE_STRING v18; // [esp+40h] [ebp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [esp+48h] [ebp-A8h] BYREF
  int v20[3]; // [esp+50h] [ebp-A0h] BYREF
  _DWORD Data[3]; // [esp+5Ch] [ebp-94h] BYREF
  _BYTE KeyValueInformation[132]; // [esp+68h] [ebp-88h] BYREF

  v13 = 12;
  RtlInitUnicodeString(&DestinationString, 0);
  RtlInitUnicodeString(&v18, L"RXACT");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &v18;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 192;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  result = ZwCreateKey(&KeyHandle, 0x3001Fu, &ObjectAttributes, 0, 0, 0, &Disposition);
  if ( result >= 0 )
  {
    LODWORD(v9) = 16;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    *a3 = Heap;
    if ( !Heap )
    {
      ZwDeleteKey(KeyHandle);
      NtClose(KeyHandle);
      return -1073741801;
    }
    v5 = KeyHandle;
    *Heap = a1;
    *((_BYTE *)Heap + 8) = 1;
    Heap[3] = 0;
    Heap[1] = v5;
    if ( Disposition == 1 )
    {
      Data[0] = 1;
      ValueKey = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0, Data, 0xCu);
      if ( ValueKey < 0 )
      {
        ZwDeleteKey(KeyHandle);
LABEL_8:
        NtClose(KeyHandle);
LABEL_9:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a3);
        return ValueKey;
      }
      return 1073741828;
    }
    else
    {
      ValueKey = RtlpNtQueryValueKey(KeyHandle, (int)&v17, Data, (int)&v13, (int)v20);
      if ( ValueKey < 0 )
        goto LABEL_8;
      if ( v13 != 12 || Data[0] != 1 )
      {
        ValueKey = -1073741736;
        goto LABEL_8;
      }
      RtlInitUnicodeString(&ValueName, L"Log");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueBasicInformation, KeyValueInformation, 0x80u, &ResultLength) < 0 )
      {
        return 0;
      }
      else if ( a2 )
      {
        result = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, 0, 0, &ResultLength);
        if ( result == -1073741789 )
        {
          LODWORD(v10) = ResultLength;
          v7 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
          if ( !v7 )
            return -1073741801;
          v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v7, ResultLength, &ResultLength);
          if ( v8 < 0
            || (*((_DWORD *)*a3 + 3) = (char *)v7 + v7[2], *((_BYTE *)*a3 + 8) = 0, v8 = RXactpCommit(*a3), v8 < 0) )
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
            ValueKey = v8;
            goto LABEL_9;
          }
          NtDeleteValueKey(KeyHandle, &ValueName);
          *((_DWORD *)*a3 + 3) = v7;
          return RtlAbortRXact((int)*a3);
        }
      }
      else
      {
        return -2147483624;
      }
    }
  }
  return result;
}
