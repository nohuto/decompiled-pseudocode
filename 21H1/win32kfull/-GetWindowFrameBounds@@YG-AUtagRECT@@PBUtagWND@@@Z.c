/*
 * XREFs of ?GetWindowFrameBounds@@YG?AUtagRECT@@PBUtagWND@@@Z @ 0x19E3CD
 * Callers:
 *     ?CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z @ 0x13F438 (-CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     ?PtInsideWindowFrameBounds@@YG_NABUtagPOINT@@PBUtagWND@@@Z @ 0x19E3F7 (-PtInsideWindowFrameBounds@@YG_NABUtagPOINT@@PBUtagWND@@@Z.c)
 * Callees:
 *     ?ReduceRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z @ 0x19E459 (-ReduceRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z.c)
 */

struct tagRECT *__userpurge GetWindowFrameBounds@<eax>(
        int a1@<ecx>,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3)
{
  LONG *v3; // esi
  const struct tagRECT *v5; // [esp+0h] [ebp-Ch]
  struct tagRECT *v6; // [esp+4h] [ebp-8h]

  v3 = (LONG *)(*(_DWORD *)(a1 + 20) + 52);
  retstr->left = *v3++;
  retstr->top = *v3++;
  retstr->right = *v3;
  retstr->bottom = v3[1];
  ReduceRectByWindowMargin((const struct tagWND *)retstr, v5, v6);
  return retstr;
}
