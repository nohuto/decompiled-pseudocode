/*
 * XREFs of AlpcpValidateMessage @ 0x1407A7E70
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406652DC (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpValidateConnectionMessage @ 0x14066666C (AlpcpValidateConnectionMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406666B4 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1407A9ED0 (AlpcpSendMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpValidateMessage(unsigned __int16 *a1, char a2)
{
  __int64 v2; // rax
  unsigned __int16 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax

  v2 = *a1;
  v3 = v2 + 40;
  if ( (unsigned __int16)v2 < (unsigned __int16)(v2 + 40) )
  {
    v4 = v2 + 40;
    v5 = a1[1];
    if ( a2 )
    {
      if ( v4 <= v5 )
      {
        a1[1] = v3;
        return 0LL;
      }
    }
    else if ( v4 == v5 )
    {
      return 0LL;
    }
  }
  return 3221225485LL;
}
