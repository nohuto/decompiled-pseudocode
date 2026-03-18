/*
 * XREFs of ?DoesPointSnapToBorder@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x179BB8
 * Callers:
 *     ?CanPointStartResize@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x179A47 (-CanPointStartResize@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 * Callees:
 *     __TTPixelsToHm@8 @ 0x1B97F4 (__TTPixelsToHm@8.c)
 */

BOOL __userpurge DoesPointSnapToBorder@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        struct tagTOUCHTARGETINGCONTACT *a4,
        struct tagPOINT a5)
{
  _DWORD *v6; // edi
  int v8; // [esp+Ch] [ebp-4h]

  v6 = *(_DWORD **)(a2 + 20);
  v8 = *(_DWORD *)(a1 + 184);
  return _TTPixelsToHm(abs32((int)a3 - v6[17]), v8) < 120
      || _TTPixelsToHm(abs32((int)a3 - v6[19]), v8) < 120
      || _TTPixelsToHm(abs32((int)a4 - v6[20]), *(_DWORD *)(a1 + 188)) < 120;
}
