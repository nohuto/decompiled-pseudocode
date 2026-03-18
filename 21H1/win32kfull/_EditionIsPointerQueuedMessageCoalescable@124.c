/*
 * XREFs of _EditionIsPointerQueuedMessageCoalescable@124 @ 0xF35BE
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?IsPointerQueuedMessageCoalescable@@YGHPAUtagQ@@PAUtagQMSG@@KKKK@Z @ 0x16F1B8 (-IsPointerQueuedMessageCoalescable@@YGHPAUtagQ@@PAUtagQMSG@@KKKK@Z.c)
 */

int __stdcall EditionIsPointerQueuedMessageCoalescable(
        int a1,
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
        struct tagQMSG *a29,
        unsigned int a30,
        unsigned int a31)
{
  unsigned int v32; // [esp+0h] [ebp-80h]
  unsigned int v33; // [esp+4h] [ebp-7Ch]
  _DWORD v34[3]; // [esp+8h] [ebp-78h] BYREF
  _DWORD v35[26]; // [esp+14h] [ebp-6Ch] BYREF

  qmemcpy(v35, &a1, sizeof(v35));
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
    v34,
    *(_DWORD *)(*(_DWORD *)(v35[20] + 8) + 236));
  return IsPointerQueuedMessageCoalescable(a28, a29, a30, a31, v32, v33);
}
