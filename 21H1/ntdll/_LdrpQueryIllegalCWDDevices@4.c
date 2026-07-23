/*
 * XREFs of _LdrpQueryIllegalCWDDevices@4 @ 0x4B33384B
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

ULONG __thiscall LdrpQueryIllegalCWDDevices(HANDLE KeyHandle)
{
  _BYTE *v2; // edi
  NTSTATUS v3; // eax
  NTSTATUS v4; // esi
  void *v5; // ebx
  int v6; // eax
  ULONG v7; // esi
  void *ProcessHeap; // ecx
  PVOID Heap; // eax
  NTSTATUS v10; // eax
  ULONG result; // eax
  SIZE_T v12; // [esp-4h] [ebp-434h]
  ULONG ResultLength; // [esp+10h] [ebp-420h] BYREF
  ULONG Value[2]; // [esp+14h] [ebp-41Ch] BYREF
  _UNICODE_STRING DestinationString; // [esp+1Ch] [ebp-414h] BYREF
  HANDLE KeyHandlea; // [esp+24h] [ebp-40Ch]
  _BYTE KeyValueInformation[1028]; // [esp+28h] [ebp-408h] BYREF

  KeyHandlea = KeyHandle;
  if ( KeyHandle && RtlInitUnicodeStringEx(&DestinationString, L"CWDIllegalInDLLSearch") >= 0 )
  {
    v2 = KeyValueInformation;
    v3 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = 0;
LABEL_5:
      v6 = *((_DWORD *)v2 + 1);
      if ( v6 != 3 && v6 != 7 )
      {
        if ( v6 == 4 )
        {
          if ( *((_DWORD *)v2 + 2) == 4 )
          {
            ResultLength = 4;
            Value[0] = *((_DWORD *)v2 + 3);
          }
          else
          {
            v4 = -1073741820;
          }
          goto LABEL_23;
        }
        if ( v6 == 1 )
        {
          if ( ((unsigned __int8)Value & 3) != 0 )
          {
            v4 = -2147483646;
          }
          else
          {
            ResultLength = 4;
            DestinationString.Buffer = (wchar_t *)(v2 + 12);
            DestinationString.Length = *((_WORD *)v2 + 4);
            DestinationString.MaximumLength = *((_WORD *)v2 + 4);
            v4 = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
          }
LABEL_23:
          if ( v5 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
LABEL_25:
          if ( v4 >= 0 && (int)Value[0] >= -1 && (int)Value[0] <= 2 )
            goto LABEL_30;
          goto LABEL_28;
        }
      }
      v4 = -1073741788;
      goto LABEL_23;
    }
    if ( v3 != -2147483643 )
      goto LABEL_25;
    while ( 1 )
    {
      v7 = ResultLength;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      LODWORD(v12) = ResultLength;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, v12);
      v5 = Heap;
      if ( !Heap )
        break;
      v2 = Heap;
      v10 = ZwQueryValueKey(KeyHandlea, &DestinationString, KeyValuePartialInformation, Heap, v7, &ResultLength);
      v4 = v10;
      if ( v10 >= 0 )
        goto LABEL_5;
      if ( v10 != -2147483643 )
        goto LABEL_23;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
LABEL_28:
  Value[0] = (MEMORY[0x7FFE02D5] >> 4) & 3;
  if ( (MEMORY[0x7FFE02D5] & 0x30) == 0x30 )
    Value[0] = -1;
LABEL_30:
  result = Value[0];
  switch ( Value[0] )
  {
    case 0xFFFFFFFF:
      LdrpIllegalCWDDevices = -1;
      break;
    case 1u:
      LdrpIllegalCWDDevices = 0x2000;
      break;
    case 2u:
      LdrpIllegalCWDDevices = 16;
      break;
    default:
      LdrpIllegalCWDDevices = 0;
      break;
  }
  return result;
}
