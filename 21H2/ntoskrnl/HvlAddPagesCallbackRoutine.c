/*
 * XREFs of HvlAddPagesCallbackRoutine @ 0x14054A4B0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpEndPageListIteration @ 0x14054D1E8 (HvlpEndPageListIteration.c)
 *     HvlpGetPageList @ 0x14054D2AC (HvlpGetPageList.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14054D374 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x14054D424 (HvlpSetupPageListIteration.c)
 *     IoIsPartialDumpRetry @ 0x1405529A8 (IoIsPartialDumpRetry.c)
 */

void __fastcall HvlAddPagesCallbackRoutine(
        __int64 Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  int PageList; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  ReasonSpecificData[3] = 0LL;
  *((_DWORD *)ReasonSpecificData + 2) = 0;
  v8[0] = 0LL;
  v9 = 0;
  if ( qword_140C48908 && (*((_DWORD *)qword_140C48908 + 1) & 1) != 0 && HvlpFallbackScratchPage )
  {
    if ( !*ReasonSpecificData )
    {
      if ( (HvlpForceAllPages & 1) != 0
        || *((_DWORD *)ReasonSpecificData + 3) == 131073
        && !(unsigned __int8)IoIsPartialDumpRetry(Reason, Record, ReasonSpecificData, ReasonSpecificDataLength) )
      {
        HvlpAllPages = 1;
        v5 = 0LL;
      }
      else
      {
        HvlpAllPages = 0;
        v5 = 2LL;
      }
      *ReasonSpecificData = &HvlpCrashdumpIterationState;
      LOBYTE(HvlpCrashdumpIterationState) = 1;
      v6 = HvlpSetupPageListIteration(1LL, v5);
      if ( v6 )
        HvlpInvokeGetPageListHypercall(v6, 0LL);
    }
    PageList = HvlpGetPageList(1LL, v8, &v9);
    if ( v9 )
    {
      ReasonSpecificData[3] = v9;
      ReasonSpecificData[2] = v8[0];
      *((_DWORD *)ReasonSpecificData + 2) = 2;
    }
    if ( PageList == 261 )
    {
      *((_DWORD *)ReasonSpecificData + 2) |= 0x80000000;
    }
    else
    {
      HvlpEndPageListIteration(1LL);
      LOBYTE(HvlpCrashdumpIterationState) = 0;
      *ReasonSpecificData = 0LL;
    }
  }
}
