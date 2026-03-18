/*
 * XREFs of ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C006B390
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00275DC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0031FA4 (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00320CC (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitBackgroundMouseInput @ 0x1C0062A2C (CitBackgroundMouseInput.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C006B120 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C01FF608 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01FFFCC (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?CitpUTCToMS@@YAI_KI@Z @ 0x1C0026090 (-CitpUTCToMS@@YAI_KI@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0028B84 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z @ 0x1C0031B20 (-CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C006B474 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01FF578 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

struct _CIT_PROCESS *__fastcall CitpProcessEnsureContext(struct _CIT_PROCESS **a1)
{
  __int64 v2; // rcx
  struct _CIT_PROCESS *v4; // rax
  const char *v5; // rdx
  struct _CIT_PROCESS *v6; // rbx
  LONGLONG TimeQuadPart; // rax
  int v8; // eax

  if ( CitpProcessInfoIsValid(a1[116]) )
    return (struct _CIT_PROCESS *)v2;
  if ( v2 != 52976 )
    return 0LL;
  v4 = (struct _CIT_PROCESS *)Win32AllocPool(96LL, 1231254357LL);
  a1[116] = v4;
  v6 = v4;
  if ( !v4 )
  {
    a1[116] = (struct _CIT_PROCESS *)52976;
    CitpLogFailureWorker(-1073741670, v5, 0xF74u);
    return 0LL;
  }
  memset(v4, 0, 0x60uLL);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(*a1);
  v8 = CitpUTCToMS(TimeQuadPart, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  *((_QWORD *)v6 + 1) = a1;
  *((_DWORD *)v6 + 18) = v8;
  *((_DWORD *)v6 + 20) = v8;
  if ( (int)CitpProcessGetProgramId(a1, (struct _CIT_PROCESS *)((char *)v6 + 32)) >= 0 )
    *((_BYTE *)v6 + 92) ^= (*((_BYTE *)v6 + 92) ^ (2 * CitpDPGetAppIndex(v6))) & 0x1E;
  return v6;
}
