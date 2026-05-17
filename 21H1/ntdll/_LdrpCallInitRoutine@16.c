/*
 * XREFs of _LdrpCallInitRoutine@16 @ 0x4B2CDCA1
 * Callers:
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _LdrpCallTlsInitializers@8 @ 0x4B2CF073 (_LdrpCallTlsInitializers@8.c)
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 *     _LdrpInitializeNode@4 @ 0x4B2D16BE (_LdrpInitializeNode@4.c)
 *     _LdrpProcessDetachNode@4 @ 0x4B2DA4B3 (_LdrpProcessDetachNode@4.c)
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 *     _AVrfpLoadAndInitializeProvider@4 @ 0x4B33908C (_AVrfpLoadAndInitializeProvider@4.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 *     _LdrpLogError@16 @ 0x4B2EC95F (_LdrpLogError@16.c)
 *     _LdrxCallInitRoutine@16 @ 0x4B2F2930 (_LdrxCallInitRoutine@16.c)
 *     @_guard_check_icall@4 @ 0x4B2F4CAB (@_guard_check_icall@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

char __fastcall LdrpCallInitRoutine(int a1, int a2, int a3, int a4)
{
  int v6; // eax
  struct _PEB *v7; // eax
  char *v8; // eax
  char v10; // [esp+1Bh] [ebp-19h]

  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 554;
  else
    v6 = 2147353476;
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v8 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v8 & 0x20) != 0 )
      LdrpLogEtwEvent(0, a3, 0, 0);
  }
  v10 = LdrxCallInitRoutine(a1, a2, a3, a4);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (struct _PEB *)*((unsigned __int8 *)NtCurrentPeb()->SharedData + 554);
  else
    v7 = (struct _PEB *)MEMORY[0x7FFE0384];
  if ( v7 )
  {
    v7 = NtCurrentPeb();
    if ( (v7->TracingFlags & 4) != 0 )
    {
      LOBYTE(v7) = RtlGetCurrentServiceSessionId() ? *((_BYTE *)NtCurrentPeb()->SharedData + 555) : MEMORY[0x7FFE0385];
      if ( ((unsigned __int8)v7 & 0x20) != 0 )
        LOBYTE(v7) = LdrpLogEtwEvent(-1, -1, 0, 0);
    }
  }
  if ( !v10 && a3 == 1 )
  {
    LdrpLogError(1, 0);
    LOBYTE(v7) = 0;
  }
  return (char)v7;
}
