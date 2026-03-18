/*
 * XREFs of AlpcpValidateMessage @ 0x140688928
 * Callers:
 *     AlpcpValidateConnectionMessage @ 0x14062AF90 (AlpcpValidateConnectionMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14062C2F8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14062CD44 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
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
