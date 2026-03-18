/*
 * XREFs of ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00678B8
 * Callers:
 *     CitProcessForegroundChange @ 0x1C0067870 (CitProcessForegroundChange.c)
 *     CitModerncoreProcessForegroundChange @ 0x1C01F8E70 (CitModerncoreProcessForegroundChange.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0066264 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CitpProcessForegroundChange(
        struct tagPROCESSINFO *a1,
        struct tagWND *a2,
        struct tagPROCESSINFO *a3,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a4)
{
  struct tagWND *v5; // rbp
  struct _CIT_IMPACT_CONTEXT *v7; // rbx
  unsigned __int64 v8; // rsi
  int v9; // eax
  __int16 v11; // cx

  v5 = a2;
  if ( a3 )
    PsUpdateComponentPower(*(_QWORD *)a3, 4LL);
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 3) & 0x1000) != 0 )
    {
      a1 = 0LL;
      v5 = 0LL;
    }
    else
    {
      PsUpdateComponentPower(*(_QWORD *)a1, 4LL);
    }
  }
  v7 = xmmword_1C024E4A0;
  if ( !xmmword_1C024E4A0 )
    return 0LL;
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( qword_1C0250F50 )
    v9 = qword_1C0250F50(0xFFFFF78000000004uLL, a2);
  else
    v9 = 0;
  if ( v9 )
  {
    v11 = *((_WORD *)v7 + 57);
    if ( !v11 )
    {
      if ( (unsigned int)dword_1C024334C < MEMORY[0xFFFFF7800000037C] )
      {
        EtwTelemetryCoverageReport(&off_1C0243340);
        v11 = *((_WORD *)v7 + 57);
      }
      *((_BYTE *)v7 + 112) |= 4u;
      *((_WORD *)v7 + 57) = v11 + 1;
    }
  }
  *((_QWORD *)v7 + 16) = a1;
  return CitpSetForegroundProcess(v7, v8, a1, v5, a4);
}
