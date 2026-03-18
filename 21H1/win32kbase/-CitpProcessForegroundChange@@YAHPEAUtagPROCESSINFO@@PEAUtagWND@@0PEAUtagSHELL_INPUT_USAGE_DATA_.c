/*
 * XREFs of ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00274C8
 * Callers:
 *     CitProcessForegroundChange @ 0x1C0027480 (CitProcessForegroundChange.c)
 *     CitModerncoreProcessForegroundChange @ 0x1C02001B0 (CitModerncoreProcessForegroundChange.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00275DC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CitpProcessForegroundChange(
        struct tagPROCESSINFO *a1,
        struct tagWND *a2,
        struct tagPROCESSINFO *a3,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a4)
{
  struct _CIT_IMPACT_CONTEXT *v7; // rbx
  unsigned __int64 v8; // rsi
  int v9; // eax
  __int16 v11; // cx

  if ( a3 )
    PsUpdateComponentPower(*(_QWORD *)a3, 4LL, 0LL);
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 3) & 0x1000) != 0 )
    {
      a1 = 0LL;
      a2 = 0LL;
    }
    else
    {
      PsUpdateComponentPower(*(_QWORD *)a1, 4LL, 1LL);
    }
  }
  v7 = xmmword_1C0256430;
  if ( !xmmword_1C0256430 )
    return 0LL;
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( qword_1C0258F10 )
    v9 = qword_1C0258F10();
  else
    v9 = 0;
  if ( v9 )
  {
    v11 = *((_WORD *)v7 + 57);
    if ( !v11 )
    {
      if ( (unsigned int)dword_1C024B334 < MEMORY[0xFFFFF7800000037C] )
      {
        EtwTelemetryCoverageReport(&off_1C024B328);
        v11 = *((_WORD *)v7 + 57);
      }
      *((_BYTE *)v7 + 112) |= 4u;
      *((_WORD *)v7 + 57) = v11 + 1;
    }
  }
  *((_QWORD *)v7 + 16) = a1;
  return CitpSetForegroundProcess(v7, v8, a1, a2, a4);
}
