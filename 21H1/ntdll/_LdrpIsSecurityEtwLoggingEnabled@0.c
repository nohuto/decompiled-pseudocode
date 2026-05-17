/*
 * XREFs of _LdrpIsSecurityEtwLoggingEnabled@0 @ 0x4B2DE42E
 * Callers:
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 */

bool __stdcall LdrpIsSecurityEtwLoggingEnabled()
{
  int v0; // edi
  int v1; // eax
  int v2; // esi
  char *v4; // eax

  v0 = 2147353476;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (int)NtCurrentPeb()->SharedData + 554;
  else
    v1 = 2147353476;
  v2 = 2147353477;
  if ( *(_BYTE *)v1 )
  {
    v4 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v4 & 0x40) != 0 )
      return 1;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v0 = (int)NtCurrentPeb()->SharedData + 554;
  if ( !*(_BYTE *)v0 || (NtCurrentPeb()->TracingFlags & 4) == 0 )
    return 0;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (int)NtCurrentPeb()->SharedData + 555;
  return (*(_BYTE *)v2 & 0x20) != 0;
}
