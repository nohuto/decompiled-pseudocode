/*
 * XREFs of ?GetScreenRect@@YG?AUtagRECT@@HPBU_D3DMATRIX@@U1@@Z @ 0x179C6A
 * Callers:
 *     ?TTBetterTarget@@YGHPAUtagWND@@IPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagRECT@@K@Z @ 0x179D48 (-TTBetterTarget@@YGHPAUtagWND@@IPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagRECT@@K@Z.c)
 *     ?TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z @ 0x179F56 (-TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z.c)
 * Callees:
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?TransformRect@@YGXPBU_D3DMATRIX@@PAUtagRECT@@H@Z @ 0x17A360 (-TransformRect@@YGXPBU_D3DMATRIX@@PAUtagRECT@@H@Z.c)
 */

struct tagRECT *__userpurge GetScreenRect@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagRECT *__return_ptr retstr,
        LONG a4,
        const struct _D3DMATRIX *a5,
        struct tagRECT a6)
{
  struct tagRECT *result; // eax
  struct tagRECT *v7; // [esp+0h] [ebp-2Ch]
  int v8; // [esp+4h] [ebp-28h]

  if ( a2 && a1 && EnterFloatingPointRegion() )
  {
    TransformRect(0, v7, v8);
    KeRestoreFloatingPointState(_gfsSave);
  }
  result = retstr;
  retstr->left = a4;
  retstr->top = (LONG)a5;
  retstr->right = a6.left;
  retstr->bottom = a6.top;
  return result;
}
