/*
 * XREFs of _LdrFindResource_U@16 @ 0x4B2BB910
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

NTSTATUS __cdecl LdrFindResource_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  _DWORD *SharedData; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  NTSTATUS v8; // ebx
  _DWORD *v9; // ecx
  int v11; // eax

  SharedData = NtCurrentPeb()->SharedData;
  v5 = 2147353477;
  if ( SharedData && *SharedData )
    v6 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v6 = 2147353477;
  v7 = 2147353476;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476;
    LdrpTraceLoadMUIDll(&dword_4B281C08, *(unsigned __int8 *)v11);
  }
  v8 = LdrpSearchResourceSection_U(DllHandle, Level, 0, (int)ResourceDataEntry);
  v9 = NtCurrentPeb()->SharedData;
  if ( v9 && *v9 )
    v5 = (int)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&dword_4B281BF8, *(unsigned __int8 *)v7);
  }
  return v8;
}
