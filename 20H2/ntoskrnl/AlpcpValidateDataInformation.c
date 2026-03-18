/*
 * XREFs of AlpcpValidateDataInformation @ 0x1408C5818
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E917C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1405EBDA0 (AlpcpSendMessage.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpValidateDataInformation(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  _DWORD *v4; // rdx

  v2 = *(unsigned __int16 *)(a2 + 6);
  v3 = *(unsigned __int16 *)(a2 + 2);
  if ( (unsigned int)v2 < 0x28 || v2 > v3 - 24 )
    return 3221225485LL;
  v4 = (_DWORD *)(a1 + *(unsigned __int16 *)(a2 + 6));
  if ( ((unsigned __int8)v4 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( *v4 > (unsigned int)(((unsigned __int64)(unsigned __int16)(v3 - v2) - 8) >> 4) )
    return 3221225485LL;
  else
    return 0LL;
}
