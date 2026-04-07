/*
 * XREFs of ?GetShadowMargins@CAccent@@KA?AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z @ 0x180004FC0
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180004648 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _MARGINS *__fastcall CAccent::GetShadowMargins(
        struct _MARGINS *__return_ptr retstr,
        struct CTopLevelWindow::WindowFrame *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  *retstr = 0LL;
  if ( a2 )
  {
    v2 = *((_QWORD *)a2 + 223);
    if ( v2 )
      retstr->cxLeftWidth = *(_DWORD *)(v2 + 24);
    v3 = *((_QWORD *)a2 + 225);
    if ( v3 )
      retstr->cxRightWidth = *(_DWORD *)(v3 + 24);
    v4 = *((_QWORD *)a2 + 227);
    if ( v4 )
      retstr->cyTopHeight = *(_DWORD *)(v4 + 28);
    v5 = *((_QWORD *)a2 + 229);
    if ( v5 )
      retstr->cyBottomHeight = *(_DWORD *)(v5 + 28);
  }
  return retstr;
}
