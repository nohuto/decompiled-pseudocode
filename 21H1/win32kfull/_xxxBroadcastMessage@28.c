/*
 * XREFs of _xxxBroadcastMessage@28 @ 0xAE8A2
 * Callers:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     _EditionxxxBroadcastSPIChange@8 @ 0x145BD6 (_EditionxxxBroadcastSPIChange@8.c)
 * Callees:
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 */

int __fastcall xxxBroadcastMessage(
        int a1,
        unsigned int a2,
        struct tagWND *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        size_t a7)
{
  return xxxBroadcastMessageEx(0, a2, a3, a4, a5, a6, a7, 0);
}
