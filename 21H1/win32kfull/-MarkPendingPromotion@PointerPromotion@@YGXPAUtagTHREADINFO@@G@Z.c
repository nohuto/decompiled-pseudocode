/*
 * XREFs of ?MarkPendingPromotion@PointerPromotion@@YGXPAUtagTHREADINFO@@G@Z @ 0x17D0B9
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     <none>
 */

void __fastcall PointerPromotion::MarkPendingPromotion(int a1, __int16 a2)
{
  if ( (_WORD)dword_2752E0 && (_WORD)dword_2752E0 == a2 && dword_2752E8 == a1 )
    *(_DWORD *)(a1 + 628) = dword_2752E4;
}
