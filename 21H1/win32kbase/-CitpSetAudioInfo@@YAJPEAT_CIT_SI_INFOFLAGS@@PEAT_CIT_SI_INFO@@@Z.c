/*
 * XREFs of ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00320CC
 * Callers:
 *     CitSetInfo @ 0x1C0031F30 (CitSetInfo.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C006B390 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C006B498 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C00C75B8 (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 */

__int64 __fastcall CitpSetAudioInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  __int64 v3; // r15
  __int64 v4; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // r14
  struct _CIT_PROCESS *v6; // rax
  struct _CIT_PROCESS *v7; // rsi
  struct _CIT_INTERACTION_SUMMARY *v8; // rax
  char *v9; // rbx
  struct _CIT_INTERACTION_SUMMARY *v10; // rdi
  char *v11; // rcx
  __int64 v12; // rdx
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v18; // al

  v2 = xmmword_1C0256430;
  v3 = (unsigned __int16)*(_QWORD *)a1;
  v4 = (unsigned __int16)(*(_QWORD *)a1 >> 24);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  v6 = CitpProcessEnsureContext(CurrentProcessWin32Process);
  v7 = v6;
  if ( !v6 )
    return 3221225473LL;
  v8 = CitpInteractionSummaryEnsure(v2, v6, 0x10u);
  v9 = 0LL;
  v10 = v8;
  if ( v4 )
  {
    if ( (unsigned int)dword_1C024CB04 < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C024CAF8);
    v11 = (char *)v7 + 88;
    v12 = 10LL;
    if ( v10 )
      v9 = (char *)v10 + 116;
  }
  else
  {
    if ( (unsigned int)dword_1C024B31C < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C024B310);
    v11 = (char *)v7 + 89;
    v12 = 11LL;
    if ( v10 )
      v9 = (char *)v10 + 124;
  }
  v13 = *v11;
  if ( v3 == 3 )
  {
    if ( v13 != -1 )
    {
      v14 = v13 + 1;
      *v11 = v14;
      if ( v14 == 1 )
        PsUpdateComponentPower(*(_QWORD *)CurrentProcessWin32Process, v12, 1LL);
    }
    if ( v9 )
    {
      v15 = v9[3];
      if ( v15 != -1 )
      {
        v16 = v15 + 1;
        v9[3] = v16;
        if ( v16 == 1 )
          *((_DWORD *)v9 + 1) = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
      }
    }
  }
  else
  {
    if ( v13 )
    {
      v18 = v13 - 1;
      *v11 = v18;
      if ( !v18 )
        PsUpdateComponentPower(*(_QWORD *)CurrentProcessWin32Process, v12, 0LL);
    }
    if ( v9 )
      CitpAudioStatDecrementStreams((struct _CIT_AUDIO_STATS *)v9, 1u);
  }
  return 0LL;
}
