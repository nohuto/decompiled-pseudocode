/*
 * XREFs of ?_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z @ 0x1C0156A30
 * Callers:
 *     NtUserGetCursorFrameInfo @ 0x1C0156940 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C00CD540 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 */

struct tagCURSOR *__fastcall _GetCursorFrameInfo(struct tagCURSOR *a1, unsigned int a2, unsigned int *a3, int *a4)
{
  __int64 v5; // rbp
  struct tagCURSOR *result; // rax

  v5 = (int)a2;
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    result = GetAnimatedCursorFrame(a1, a2, (__int64)a3, (__int64)a4);
    if ( result )
    {
      *a4 = *((_DWORD *)a1 + 23);
      *a3 = *(_DWORD *)(*((_QWORD *)a1 + 14) + 4 * v5);
    }
  }
  else
  {
    *a4 = 1;
    result = a1;
    *a3 = 0;
  }
  return result;
}
