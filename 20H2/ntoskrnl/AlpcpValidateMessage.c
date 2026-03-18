/*
 * XREFs of AlpcpValidateMessage @ 0x1405EB4C8
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x1405E6A28 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpValidateConnectionMessage @ 0x1405E9134 (AlpcpValidateConnectionMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E917C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1405EBDA0 (AlpcpSendMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpValidateMessage(unsigned __int16 *a1, char a2)
{
  __int64 v2; // rax
  unsigned __int16 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx

  v2 = *a1;
  v4 = v2 + 40;
  if ( (unsigned __int16)v2 < (unsigned __int16)(v2 + 40) )
  {
    v5 = v2 + 40;
    v6 = a1[1];
    if ( a2 )
    {
      if ( v5 <= v6 )
      {
        a1[1] = v4;
        return 0LL;
      }
    }
    else if ( v5 == v6 )
    {
      return 0LL;
    }
  }
  return 3221225485LL;
}
