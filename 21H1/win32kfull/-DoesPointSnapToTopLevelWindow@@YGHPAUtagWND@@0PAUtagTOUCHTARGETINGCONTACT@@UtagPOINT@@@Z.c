/*
 * XREFs of ?DoesPointSnapToTopLevelWindow@@YGHPAUtagWND@@0PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x179C2F
 * Callers:
 *     _TouchTargetChildTree@24 @ 0x17BA7D (_TouchTargetChildTree@24.c)
 * Callees:
 *     ?CanPointStartResize@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x179A47 (-CanPointStartResize@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YGHPAUtagWND@@0@Z @ 0x17A283 (-TouchTargetingIsSpecialTarget@@YGHPAUtagWND@@0@Z.c)
 */

BOOL __userpurge DoesPointSnapToTopLevelWindow@<eax>(
        int a1@<ecx>,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagTOUCHTARGETINGCONTACT *a4,
        struct tagPOINT a5)
{
  int v5; // esi
  struct tagPOINT v7; // [esp+0h] [ebp-Ch]
  struct tagWND *v8; // [esp+0h] [ebp-Ch]
  struct tagWND *v9; // [esp+4h] [ebp-8h]

  v5 = 0;
  if ( a1 && CanPointStartResize(a3, a4, v7) )
    return TouchTargetingIsSpecialTarget(v8, v9) != 0;
  return v5;
}
