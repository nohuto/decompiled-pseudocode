/*
 * XREFs of _LdrpLogDelayLoadTrigger@16 @ 0x4B2C02B9
 * Callers:
 *     _LdrpGetDelayloadExportDll@20 @ 0x4B2CF859 (_LdrpGetDelayloadExportDll@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitString@8 @ 0x4B2F4FA0 (_RtlInitString@8.c)
 *     _sprintf_s @ 0x4B2FFF60 (_sprintf_s.c)
 *     _LdrpGetDelayloadAPIInfo@20 @ 0x4B32F789 (_LdrpGetDelayloadAPIInfo@20.c)
 *     _LdrpEventAddAnsiString@16 @ 0x4B32FC10 (_LdrpEventAddAnsiString@16.c)
 *     _LdrpEventAddUnicodeString@16 @ 0x4B32FC55 (_LdrpEventAddUnicodeString@16.c)
 */

struct _PEB *__fastcall LdrpLogDelayLoadTrigger(int a1, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // esi
  struct _PEB *result; // eax
  char *v9; // eax
  const char *v10; // eax
  struct _PEB *v11; // ebx
  int v12; // edx
  STRING v13; // [esp+Ch] [ebp-3Ch] BYREF
  STRING DestinationString; // [esp+14h] [ebp-34h] BYREF
  int v15; // [esp+1Ch] [ebp-2Ch]
  int v16; // [esp+20h] [ebp-28h] BYREF
  int v17; // [esp+24h] [ebp-24h]
  PCSZ SourceString; // [esp+28h] [ebp-20h] BYREF
  int v19; // [esp+2Ch] [ebp-1Ch]
  int v20; // [esp+30h] [ebp-18h]
  int v21; // [esp+34h] [ebp-14h] BYREF
  char Buffer[12]; // [esp+38h] [ebp-10h] BYREF

  v17 = a3;
  v20 = a2;
  v19 = a4;
  v5 = 2147353476;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 554;
  else
    v6 = 2147353476;
  v7 = 2147353477;
  if ( *(_BYTE *)v6 )
  {
    v9 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v9 & 0x10) != 0 )
      goto LABEL_19;
  }
  result = RtlGetCurrentServiceSessionId()
         ? (struct _PEB *)((char *)NtCurrentPeb()->SharedData + 554)
         : (struct _PEB *)2147353476;
  if ( result->InheritedAddressSpace )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId();
      if ( result )
      {
        result = NtCurrentPeb();
        v7 = (int)result->SharedData + 555;
      }
      if ( (*(_BYTE *)v7 & 0x20) != 0 )
      {
LABEL_19:
        SourceString = (PCSZ)(*(_DWORD *)(v20 + 4) + *(_DWORD *)(a1 + 24));
        RtlInitString(&DestinationString, SourceString);
        LdrpGetDelayloadAPIInfo(v19, &SourceString, &v16);
        v10 = SourceString;
        if ( !SourceString )
        {
          sprintf_s(Buffer, 0xCu, "#%u", v16);
          v10 = Buffer;
        }
        RtlInitString(&v13, v10);
        v19 = a1 + 36;
        v20 = *(unsigned __int16 *)(a1 + 36)
            + *(unsigned __int16 *)(v17 + 36)
            + 8
            + 2 * (DestinationString.Length + v13.Length);
        v15 = v20 + 36;
        result = (struct _PEB *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v20 + 36);
        v11 = result;
        if ( result )
        {
          v12 = v20;
          HIWORD(result->Mutant) = 5334;
          result->AtlThunkSListPtr = (_SLIST_HEADER *volatile)3;
          LdrpEventAddUnicodeString(v12, &v21);
          v20 -= v21;
          LdrpEventAddUnicodeString(v20, &v21);
          v20 -= v21;
          LdrpEventAddAnsiString(v20, &v21);
          LdrpEventAddAnsiString(v20 - v21, &v21);
          if ( RtlGetCurrentServiceSessionId() )
            v5 = (int)NtCurrentPeb()->SharedData + 554;
          NtTraceEvent(*(unsigned __int8 *)v5, 1026, v15 - 32, v11);
          return (struct _PEB *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
        }
      }
    }
  }
  return result;
}
