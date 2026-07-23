/*
 * XREFs of LdrpQueryIllegalCWDDevices @ 0x1800D4630
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D0EEC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x1800754D0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

__int64 __fastcall LdrpQueryIllegalCWDDevices(HANDLE KeyHandle)
{
  NTSTATUS inited; // ebx
  _BYTE *v3; // rdi
  NTSTATUS v4; // eax
  void *v5; // rsi
  int v6; // ecx
  ULONG Length; // ebx
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v10; // eax
  __int64 result; // rax
  ULONG ResultLength; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Value[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+58h] [rbp-B0h] BYREF

  if ( KeyHandle )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, L"CWDIllegalInDLLSearch");
    if ( inited < 0 )
      goto LABEL_27;
    v3 = KeyValueInformation;
    v4 = NtQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength);
    inited = v4;
    if ( v4 >= 0 )
    {
      v5 = 0LL;
LABEL_5:
      v6 = *((_DWORD *)v3 + 1);
      if ( ((v6 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v6 == 4 )
        {
          if ( *((_DWORD *)v3 + 2) == 4 )
          {
            ResultLength = 4;
            Value[0] = *((_DWORD *)v3 + 3);
          }
          else
          {
            inited = -1073741820;
          }
          goto LABEL_25;
        }
        if ( v6 != 1 )
        {
LABEL_17:
          inited = -1073741788;
          goto LABEL_25;
        }
        if ( ((unsigned __int8)Value & 3) != 0 )
        {
          inited = -2147483646;
        }
        else
        {
          ResultLength = 4;
          DestinationString.Buffer = (wchar_t *)(v3 + 12);
          DestinationString.Length = *((_WORD *)v3 + 4);
          DestinationString.MaximumLength = *((_WORD *)v3 + 4);
          inited = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
        }
      }
      else
      {
        if ( v6 != 4 )
          goto LABEL_17;
        ResultLength = *((_DWORD *)v3 + 2);
        if ( *((_DWORD *)v3 + 2) > 4u )
          inited = -2147483643;
        else
          memmove(Value, v3 + 12, *((unsigned int *)v3 + 2));
      }
LABEL_25:
      if ( v5 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
LABEL_27:
      if ( inited >= 0 )
      {
        result = Value[0] + 1;
        if ( (unsigned int)result <= 3 )
          goto LABEL_32;
      }
      goto LABEL_29;
    }
    if ( v4 != -2147483643 )
      goto LABEL_27;
    while ( 1 )
    {
      Length = ResultLength;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
      v5 = Heap;
      if ( !Heap )
        break;
      v3 = Heap;
      v10 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, Length, &ResultLength);
      inited = v10;
      if ( v10 >= 0 )
        goto LABEL_5;
      if ( v10 != -2147483643 )
        goto LABEL_25;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    }
  }
LABEL_29:
  result = (MEMORY[0x7FFE02D5] >> 4) & 3;
  if ( (_DWORD)result == 3 )
    result = 0xFFFFFFFFLL;
  Value[0] = result;
LABEL_32:
  if ( Value[0] == -1 )
  {
    LdrpIllegalCWDDevices = -1;
  }
  else if ( Value[0] == 1 )
  {
    LdrpIllegalCWDDevices = 0x2000;
  }
  else
  {
    result = 16LL;
    if ( Value[0] != 2 )
      result = 0LL;
    LdrpIllegalCWDDevices = result;
  }
  return result;
}
