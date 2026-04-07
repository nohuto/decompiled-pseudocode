/*
 * XREFs of ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800AB16C
 * Callers:
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180052854 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_1e76f73f7a25c90862b7a58f0bb45353___ @ 0x1800A9DD4 (CTransitionVisualController--ForEachOwnedWindow__lambda_1e76f73f7a25c90862b7a58f0bb45353___.c)
 */

void __fastcall CTransitionVisualController::GetOwnedInclusiveClipRect(
        CTransitionVisualController *this,
        struct tagRECT *a2,
        struct tagRECT *a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  struct tagRECT **v5; // [rsp+38h] [rbp+10h] BYREF
  struct tagRECT *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  *a3 = a2[3];
  v4 = *((_QWORD *)this + 12);
  if ( v4 != -1 || (unsigned int)GetDesktopID(1LL, &v4) )
  {
    v5 = &v6;
    CTransitionVisualController::ForEachOwnedWindow__lambda_1e76f73f7a25c90862b7a58f0bb45353___(
      (__int64)a2,
      (__int64)&v5,
      1);
  }
}
