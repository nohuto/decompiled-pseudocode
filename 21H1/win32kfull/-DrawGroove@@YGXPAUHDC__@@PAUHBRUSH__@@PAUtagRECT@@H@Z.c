/*
 * XREFs of ?DrawGroove@@YGXPAUHDC__@@PAUHBRUSH__@@PAUtagRECT@@H@Z @ 0xC1DEE
 * Callers:
 *     _DrawThumb2@24 @ 0xC1CFA (_DrawThumb2@24.c)
 * Callees:
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _DrawEdge@16 @ 0x90568 (_DrawEdge@16.c)
 */

void __userpurge DrawGroove(HDC a1@<edx>, HDC a2@<ecx>, HDC a3, HBRUSH a4, struct tagRECT *a5, int a6)
{
  const RECT *v7; // [esp+0h] [ebp-20h]
  HBRUSH v8; // [esp+4h] [ebp-1Ch]
  int v9[5]; // [esp+Ch] [ebp-14h] BYREF

  v9[4] = (int)a2;
  if ( a1 != *(HDC *)(_gpsi + 4372) && a1 != *(HDC *)(_gpsi + 4416) )
  {
    v9[0] = *(_DWORD *)a3;
    v9[1] = (int)a3[1];
    v9[2] = (int)a3[2];
    v9[3] = (int)a3[3];
    DrawEdge(a2, v9, 0xAu, a4 != 0 ? 24581 : 24586);
  }
  FillRect(a1, v7, v8);
}
