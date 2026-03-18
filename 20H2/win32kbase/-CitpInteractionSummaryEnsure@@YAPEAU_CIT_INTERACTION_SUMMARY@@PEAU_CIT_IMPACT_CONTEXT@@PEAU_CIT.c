/*
 * XREFs of ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C0062C58
 * Callers:
 *     CitBackgroundMouseInput @ 0x1C0032C4C (CitBackgroundMouseInput.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00628E0 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0066264 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00AD78C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00B2400 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01F8C90 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0062B2C (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C0062D64 (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0068B94 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00AAD20 (-CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00AD6C8 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C01F82CC (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryEnsure(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct tagPROCESSINFO **a2,
        __int16 a3)
{
  struct _CIT_INTERACTION_SUMMARY *v3; // rbx
  struct _CIT_PROG_DATA *v7; // rdi
  struct _CIT_INTERACTION_SUMMARY **v8; // r14
  char v9; // al
  struct _CIT_PROG_DATA *v11; // rax
  struct _GUID v12; // [rsp+20h] [rbp-38h] BYREF
  struct _CIT_INTERACTION_SUMMARY *v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  if ( (xmmword_1C024E484 & 1) == 0 )
    return v3;
  v7 = 0LL;
  if ( (xmmword_1C024E484 & 2) == 0 )
  {
    v8 = a2 + 2;
    goto LABEL_4;
  }
  v11 = CitpProcessEnsureProgData(a2[1]);
  v7 = v11;
  if ( !v11 )
    return v3;
  v8 = (struct _CIT_INTERACTION_SUMMARY **)((char *)v11 + 88);
LABEL_4:
  v3 = *v8;
  if ( *v8 )
  {
    if ( ((*((unsigned __int16 *)v3 + 50) >> 2) & 0x1FFF) == dword_1C024E49C )
      goto LABEL_6;
    CitpInteractionSummaryDelete(v8);
  }
  CitpInteractionSummaryAllocate(&v13);
  v3 = v13;
  if ( v13 )
  {
    if ( v7 )
    {
      *((_WORD *)v13 + 50) |= 1u;
      *((_QWORD *)v3 + 3) = v7;
    }
    else
    {
      *((_QWORD *)v13 + 3) = a2;
    }
    *v8 = v3;
LABEL_6:
    if ( v3 )
    {
      *((_WORD *)v3 + 57) |= a3;
      if ( *(struct _CIT_INTERACTION_SUMMARY **)v3 == v3 )
        CitpInteractionSummaryStartTracking(a1, v3);
      *((_QWORD *)v3 + 2) |= (unsigned __int64)*a2;
      *(struct _GUID *)((char *)v3 + 76) = *CitpProcessGetAppSessionId(&v12, a2[1], (unsigned int *)v3 + 24);
      v9 = *((_BYTE *)a2 + 92);
      if ( (v9 & 1) == 0 )
      {
        *((_BYTE *)a2 + 92) = v9 | 1;
        CitpStatIncrement((unsigned __int16 *)v3 + 51, 1);
      }
    }
    return v3;
  }
  return 0LL;
}
