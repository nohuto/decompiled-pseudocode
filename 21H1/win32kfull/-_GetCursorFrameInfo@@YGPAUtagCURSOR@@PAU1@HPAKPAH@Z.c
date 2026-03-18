/*
 * XREFs of ?_GetCursorFrameInfo@@YGPAUtagCURSOR@@PAU1@HPAKPAH@Z @ 0x751FE
 * Callers:
 *     _NtUserGetCursorFrameInfo@16 @ 0x75144 (_NtUserGetCursorFrameInfo@16.c)
 * Callees:
 *     ?GetAnimatedCursorFrame@@YGPAUtagCURSOR@@QAUtagACON@@H@Z @ 0x7523E (-GetAnimatedCursorFrame@@YGPAUtagCURSOR@@QAUtagACON@@H@Z.c)
 */

struct tagCURSOR *__userpurge _GetCursorFrameInfo@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagCURSOR *a3,
        _DWORD *a4,
        unsigned int *a5,
        int *a6)
{
  struct tagCURSOR *result; // eax
  struct tagACON *v9; // [esp+0h] [ebp-8h]
  int v10; // [esp+4h] [ebp-4h]

  if ( (*(_BYTE *)(a2 + 44) & 8) != 0 )
  {
    result = GetAnimatedCursorFrame(v9, v10);
    if ( result )
    {
      *a4 = *(_DWORD *)(a2 + 52);
      *(_DWORD *)a3 = *(_DWORD *)(*(_DWORD *)(a2 + 64) + 4 * a1);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a4 = 1;
    *(_DWORD *)a3 = 0;
    return (struct tagCURSOR *)a2;
  }
  return result;
}
