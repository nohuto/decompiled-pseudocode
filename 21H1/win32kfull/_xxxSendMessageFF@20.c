/*
 * XREFs of _xxxSendMessageFF@20 @ 0xED808
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxSendMessageEx@20 @ 0x9E444 (_xxxSendMessageEx@20.c)
 */

int __stdcall xxxSendMessageFF(int a1, unsigned int a2, unsigned int HighLimit, int a4, ULONG a5)
{
  if ( a5 )
    return xxxSendMessageEx(0xFFFFFFFF, a2, HighLimit, a4, a5);
  else
    return xxxSendTransformableMessageTimeout(-1, a2, HighLimit, a4, 0, 0, 0, 0, 1);
}
