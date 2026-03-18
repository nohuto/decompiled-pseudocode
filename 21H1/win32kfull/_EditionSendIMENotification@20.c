/*
 * XREFs of _EditionSendIMENotification@20 @ 0x16F292
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 */

int __stdcall EditionSendIMENotification(
        int a1,
        ULONG_PTR BugCheckParameter2,
        unsigned int a3,
        unsigned int HighLimit,
        int a5)
{
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  v6[0] = *(_DWORD *)(a1 + 228);
  v6[2] = 0;
  *(_DWORD *)(a1 + 228) = v6;
  v6[1] = BugCheckParameter2;
  HMLockObject(BugCheckParameter2);
  _InterlockedIncrement(&glSendMessage);
  xxxSendTransformableMessageTimeout(BugCheckParameter2, a3, HighLimit, a5, 0, 0, 0, 1u, 1);
  return ThreadUnlock1();
}
