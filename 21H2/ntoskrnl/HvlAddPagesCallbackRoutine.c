/*
 * XREFs of HvlAddPagesCallbackRoutine @ 0x1404F8760
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetPageList @ 0x1404FB5E8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1404FB7CC (HvlpStartPageListIteration.c)
 */

void __fastcall HvlAddPagesCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int PageList; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF

  ReasonSpecificData[3] = 0LL;
  *((_DWORD *)ReasonSpecificData + 2) = 0;
  v6[0] = 0LL;
  v7 = 0;
  if ( qword_140C475A8 && (*((_DWORD *)qword_140C475A8 + 1) & 1) != 0 && HvlpFallbackScratchPage )
  {
    if ( !*ReasonSpecificData )
    {
      *ReasonSpecificData = &HvlpCrashdumpIterationState;
      LOBYTE(HvlpCrashdumpIterationState) = 1;
      HvlpStartPageListIteration(1LL);
    }
    PageList = HvlpGetPageList(1LL, v6, &v7);
    if ( v7 )
    {
      ReasonSpecificData[3] = v7;
      ReasonSpecificData[2] = v6[0];
      *((_DWORD *)ReasonSpecificData + 2) = 2;
    }
    if ( PageList == 261 )
    {
      *((_DWORD *)ReasonSpecificData + 2) |= 0x80000000;
    }
    else
    {
      qword_140C474C8 = 0LL;
      HvlpIteratorCrashdump = 0;
      LOBYTE(HvlpCrashdumpIterationState) = 0;
      *ReasonSpecificData = 0LL;
    }
  }
}
