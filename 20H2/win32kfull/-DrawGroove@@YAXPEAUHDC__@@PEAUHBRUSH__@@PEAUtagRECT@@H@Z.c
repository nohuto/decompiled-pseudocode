/*
 * XREFs of ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C014CEFC
 * Callers:
 *     DrawThumb2 @ 0x1C014CDC4 (DrawThumb2.c)
 * Callees:
 *     DrawEdge @ 0x1C00375E4 (DrawEdge.c)
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 */

void __fastcall DrawGroove(HDC a1, HBRUSH a2, struct tagRECT *a3, int a4)
{
  HDC v5; // rdi
  const RECT *v6; // rdx
  RECT v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  if ( a2 == *(HBRUSH *)(gpsi + 4856LL) || a2 == *(HBRUSH *)(gpsi + 4944LL) )
  {
    v6 = a3;
  }
  else
  {
    v7 = *a3;
    DrawEdge(a1, &v7, 10, a4 != 0 ? 24581 : 24586);
    v6 = &v7;
    a1 = v5;
  }
  FillRect(a1, v6, a2);
}
