/*
 * XREFs of wil::details::lambda_call__lambda_6ce62ec4f03bb3a216d20b2b9ab0e365___::_lambda_call__lambda_6ce62ec4f03bb3a216d20b2b9ab0e365___ @ 0x1800DB51C
 * Callers:
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800DE910 (AudioServerGetAudioHistoryProducerInfo.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 */

void ***__fastcall wil::details::lambda_call__lambda_6ce62ec4f03bb3a216d20b2b9ab0e365___::_lambda_call__lambda_6ce62ec4f03bb3a216d20b2b9ab0e365___(
        __int64 a1)
{
  void ***result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    operator delete(***(void ****)a1);
    result = *(void ****)a1;
    ***(_QWORD ***)a1 = 0LL;
  }
  return result;
}
