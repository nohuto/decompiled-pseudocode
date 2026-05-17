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

int __fastcall LdrpMUIEtwOutput(int a1, wchar_t **a2, unsigned int a3, char a4)
{
  int v4; // eax
  int ModuleInfoFromVirtualMemory; // esi
  int v7; // edi
  unsigned int v8; // edi
  char *v9; // esi
  wchar_t *v10; // eax
  int v11; // eax
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-2A8h] BYREF
  _DWORD v15[4]; // [esp+18h] [ebp-2A0h] BYREF
  WCHAR SourceString[260]; // [esp+28h] [ebp-290h] BYREF
  wchar_t Buffer[66]; // [esp+230h] [ebp-88h] BYREF

  v4 = a1;
  v15[0] = L"Type:";
  ModuleInfoFromVirtualMemory = 0;
  v15[1] = L" Name:";
  v15[2] = L" Language:";
  v7 = 2147353476;
  v15[3] = L" Item:";
  if ( (a4 & 0xE) != 0 )
  {
    *(_DWORD *)&DestinationString.Length = 34078720;
    DestinationString.Buffer = SourceString;
    v8 = 0;
    RtlAppendUnicodeToString(&DestinationString.Length, L"SR - ");
    v9 = (char *)((char *)v15 - (char *)a2);
    do
    {
      RtlAppendUnicodeToString(&DestinationString.Length, *(const unsigned __int16 **)((char *)a2 + (_DWORD)v9));
      v10 = *a2;
      if ( ((unsigned int)*a2 & 0xFFFF0000) == 0 || v8 == 3 )
      {
        _itow_s((int)v10, Buffer, 0x40u, 10);
        v10 = Buffer;
      }
      RtlAppendUnicodeToString(&DestinationString.Length, v10);
      ++v8;
      ++a2;
    }
    while ( v8 < a3 );
    v7 = 2147353476;
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476;
    LdrpTraceLoadMUIDll(&DestinationString, *(unsigned __int8 *)v11);
    ModuleInfoFromVirtualMemory = 0;
    memset(SourceString, 0, DestinationString.Length);
    v4 = a1;
  }
  if ( (a4 & 1) != 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(v4, SourceString, 0x208u, 0, 0, 0, 0);
    if ( ModuleInfoFromVirtualMemory >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlGetCurrentServiceSessionId() )
        v7 = (int)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(&DestinationString, *(unsigned __int8 *)v7);
    }
  }
  return ModuleInfoFromVirtualMemory;
}
