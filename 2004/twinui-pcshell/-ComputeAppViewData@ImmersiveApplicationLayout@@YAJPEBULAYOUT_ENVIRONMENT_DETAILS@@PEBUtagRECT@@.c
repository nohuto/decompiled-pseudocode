/*
 * XREFs of ?ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180471718
 * Callers:
 *     ?_CommitLayoutItems@CAppLayout@@AEAAJXZ @ 0x180483E5C (-_CommitLayoutItems@CAppLayout@@AEAAJXZ.c)
 * Callees:
 *     ?ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY_EDGES@@@Z @ 0x1804716D0 (-ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY.c)
 *     ?ComputeAppViewState@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAW4APPLICATION_VIEW_STATE@@@Z @ 0x1804717AC (-ComputeAppViewState@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@.c)
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeAppViewData(
        ImmersiveApplicationLayout *this,
        struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  LONG v4; // ebx
  __int64 result; // rax
  enum APPLICATION_VIEW_STATE *v10; // [rsp+20h] [rbp-28h]

  v4 = 0;
  *(_QWORD *)&a4[2].left = 3LL;
  *(_QWORD *)&a4->left = 0LL;
  *(_QWORD *)&a4->right = 0LL;
  *(_QWORD *)&a4[1].left = 0LL;
  *(_QWORD *)&a4[1].right = 0LL;
  a4[2].right = 0;
  result = ImmersiveApplicationLayout::ComputeAppViewState(
             this,
             (const struct LAYOUT_ENVIRONMENT_DETAILS *)a2,
             a3,
             a4,
             v10);
  if ( (int)result >= 0 )
  {
    a4->top = a2->right - a2->left < a2->bottom - a2->top;
    result = ImmersiveApplicationLayout::ComputeAdjacentDisplayEdges(this, a2, a3, (const struct tagRECT *)&a4->right);
    if ( (int)result >= 0 )
    {
      LOBYTE(v4) = *((_DWORD *)this + 5) == 1;
      a4->bottom = v4;
    }
  }
  return result;
}
