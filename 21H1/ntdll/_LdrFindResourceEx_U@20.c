/*
 * XREFs of _LdrFindResourceEx_U@20 @ 0x4B2EBB90
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

NTSTATUS __cdecl LdrFindResourceEx_U(
        ULONG Flags,
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  int v5; // edi
  int v6; // eax
  int v7; // esi
  NTSTATUS v8; // ebx
  int v10; // eax

  v5 = 2147353477;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v6 = 2147353477;
  v7 = 2147353476;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v10 = 2147353476;
    LdrpTraceLoadMUIDll(&dword_4B281BE8, *(unsigned __int8 *)v10);
  }
  v8 = LdrpSearchResourceSection_U(DllHandle, (int)ResourceInfo, Level, Flags, (int)ResourceDataEntry);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&dword_4B281BE0, *(unsigned __int8 *)v7);
  }
  return v8;
}
