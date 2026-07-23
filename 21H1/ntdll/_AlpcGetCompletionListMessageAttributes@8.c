/*
 * XREFs of _AlpcGetCompletionListMessageAttributes@8 @ 0x4B33EAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PALPC_MESSAGE_ATTRIBUTES __cdecl AlpcGetCompletionListMessageAttributes(PVOID CompletionList, PPORT_MESSAGE Message)
{
  int v3; // eax

  if ( !*((_DWORD *)CompletionList + 9) )
    return 0;
  v3 = ((_BYTE)Message + (unsigned __int8)Message->u1.s1.TotalLength) & 3;
  return (PALPC_MESSAGE_ATTRIBUTES)((char *)Message
                                  + (unsigned __int16)Message->u1.s1.TotalLength
                                  + (v3 != 0 ? 4 - v3 : 0));
}
