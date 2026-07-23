/*
 * XREFs of _LdrpMUIEtwOutput@16 @ 0x4B33F89A
 * Callers:
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 * Callees:
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __itow_s @ 0x4B2FF3B0 (__itow_s.c)
 *     _LdrpGetModuleInfoFromVirtualMemory@28 @ 0x4B33F74C (_LdrpGetModuleInfoFromVirtualMemory@28.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

NTSTATUS __fastcall LdrpMUIEtwOutput(PVOID BaseAddress, wchar_t **a2, unsigned int a3, char a4)
{
  PVOID v4; // eax
  NTSTATUS ModuleInfoFromVirtualMemory; // esi
  int v7; // edi
  unsigned int v8; // edi
  char *v9; // esi
  wchar_t *v10; // eax
  int v11; // eax
  size_t v13; // [esp-4h] [ebp-2BCh]
  _UNICODE_STRING Destination; // [esp+10h] [ebp-2A8h] BYREF
  _DWORD v16[4]; // [esp+18h] [ebp-2A0h] BYREF
  WCHAR SourceString[260]; // [esp+28h] [ebp-290h] BYREF
  wchar_t Buffer[66]; // [esp+230h] [ebp-88h] BYREF

  v4 = BaseAddress;
  v16[0] = L"Type:";
  ModuleInfoFromVirtualMemory = 0;
  v16[1] = L" Name:";
  v16[2] = L" Language:";
  v7 = 2147353476;
  v16[3] = L" Item:";
  if ( (a4 & 0xE) != 0 )
  {
    *(_DWORD *)&Destination.Length = 34078720;
    Destination.Buffer = (wchar_t *)SourceString;
    v8 = 0;
    RtlAppendUnicodeToString(&Destination, L"SR - ");
    v9 = (char *)((char *)v16 - (char *)a2);
    do
    {
      RtlAppendUnicodeToString(&Destination, *(PCWSTR *)((char *)a2 + (_DWORD)v9));
      v10 = *a2;
      if ( ((unsigned int)*a2 & 0xFFFF0000) == 0 || v8 == 3 )
      {
        _itow_s((int)v10, Buffer, 0xA00000040uLL, SHIDWORD(v13));
        v10 = Buffer;
      }
      RtlAppendUnicodeToString(&Destination, (PCWSTR)v10);
      ++v8;
      ++a2;
    }
    while ( v8 < a3 );
    v7 = 2147353476;
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476;
    LdrpTraceLoadMUIDll(&Destination, *(unsigned __int8 *)v11);
    ModuleInfoFromVirtualMemory = 0;
    LODWORD(v13) = Destination.Length;
    memset(SourceString, 0, v13);
    v4 = BaseAddress;
  }
  if ( (a4 & 1) != 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(v4, (wchar_t *)SourceString, 0x208u, 0, 0, 0, 0);
    if ( ModuleInfoFromVirtualMemory >= 0 )
    {
      RtlInitUnicodeString(&Destination, SourceString);
      if ( RtlGetCurrentServiceSessionId() )
        v7 = (int)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(&Destination, *(unsigned __int8 *)v7);
    }
  }
  return ModuleInfoFromVirtualMemory;
}
