/*
 * XREFs of _EditionFindNodeQueuedMessage@116 @ 0xF3566
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?FindNodeQueuedMessageWorker@@YGPAUtagQMSG@@PAUtagQ@@KHPAPAU2@@Z @ 0x16F14F (-FindNodeQueuedMessageWorker@@YGPAUtagQMSG@@PAUtagQ@@KHPAPAU2@@Z.c)
 */

struct tagQMSG *__stdcall EditionFindNodeQueuedMessage(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        struct tagQ *a28,
        unsigned int a29)
{
  int v30[26]; // [esp+8h] [ebp-6Ch] BYREF

  qmemcpy(v30, &a1, sizeof(v30));
  if ( *(_DWORD *)(*(_DWORD *)(v30[20] + 8) + 236) )
    return FindNodeQueuedMessageWorker(a28, a29, v30[0], (struct tagQ **)v30[1]);
  else
    return 0;
}
