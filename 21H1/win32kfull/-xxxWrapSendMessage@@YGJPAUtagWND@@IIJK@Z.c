/*
 * XREFs of ?xxxWrapSendMessage@@YGJPAUtagWND@@IIJK@Z @ 0xA3882
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 */

int __stdcall xxxWrapSendMessage(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int HighLimit,
        int a4,
        unsigned int a5)
{
  return xxxSendTransformableMessageTimeout(BugCheckParameter2, a2, HighLimit, a4, 0, 0, 0, 0, 1);
}
