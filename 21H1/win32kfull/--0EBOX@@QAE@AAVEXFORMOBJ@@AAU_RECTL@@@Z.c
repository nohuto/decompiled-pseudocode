/*
 * XREFs of ??0EBOX@@QAE@AAVEXFORMOBJ@@AAU_RECTL@@@Z @ 0x21499F
 * Callers:
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 * Callees:
 *     <none>
 */

EBOX *__thiscall EBOX::EBOX(EBOX *this, struct EXFORMOBJ *a2, struct _RECTL *a3)
{
  _DWORD *v4; // esi

  *((struct _RECTL *)this + 4) = *a3;
  *(_DWORD *)this = 0;
  v4 = (_DWORD *)((char *)this + 8);
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = a3->right;
  *((_DWORD *)this + 3) = a3->top;
  *((_DWORD *)this + 4) = a3->left;
  *((_DWORD *)this + 5) = a3->top;
  *((_DWORD *)this + 6) = a3->left;
  *((_DWORD *)this + 7) = a3->bottom;
  EXFORMOBJ::bXformRound(a2, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3u);
  *((_DWORD *)this + 12) = *v4;
  *((_DWORD *)this + 13) = *((_DWORD *)this + 3);
  *((_DWORD *)this + 12) -= *((_DWORD *)this + 4);
  *((_DWORD *)this + 13) -= *((_DWORD *)this + 5);
  *((_DWORD *)this + 14) = *((_DWORD *)this + 4);
  *((_DWORD *)this + 15) = *((_DWORD *)this + 5);
  *((_DWORD *)this + 14) -= *((_DWORD *)this + 6);
  *((_DWORD *)this + 15) -= *((_DWORD *)this + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)this + 6);
  *((_DWORD *)this + 9) = *((_DWORD *)this + 7);
  *((_DWORD *)this + 8) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 9) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 12) = (*((_DWORD *)this + 12) + 1) >> 1;
  *((_DWORD *)this + 13) = (*((_DWORD *)this + 13) + 1) >> 1;
  *((_DWORD *)this + 14) = (*((_DWORD *)this + 14) + 1) >> 1;
  *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
  *((_DWORD *)this + 10) = *((_DWORD *)this + 6);
  *((_DWORD *)this + 11) = *((_DWORD *)this + 7);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 14);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 15);
  return this;
}
