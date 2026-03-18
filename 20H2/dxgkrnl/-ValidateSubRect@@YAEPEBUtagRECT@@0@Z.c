/*
 * XREFs of ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C023A91C
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C023A5DC (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C023A81C (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall ValidateSubRect(const struct tagRECT *a1, const struct tagRECT *a2)
{
  __int64 top; // rdx
  __int64 v5; // rcx
  LONG left; // eax
  int right; // r9d
  LONG bottom; // r10d
  LONG v9; // r8d
  LONG v10; // ebx
  __int64 v12; // rax

  if ( ValidateRect(a1, (__int64)a2) )
  {
    left = a1->left;
    right = a2->right;
    if ( a1->left < right )
    {
      v5 = (unsigned int)a1->right;
      if ( (int)v5 > a2->left || (_DWORD)v5 == left )
      {
        top = (unsigned int)a1->top;
        bottom = a2->bottom;
        if ( (int)top < bottom )
        {
          v9 = a1->bottom;
          v10 = a2->top;
          if ( (v9 > v10 || (_DWORD)top == v9)
            && left >= a2->left
            && (int)v5 <= right
            && (int)top >= v10
            && v9 <= bottom )
          {
            return 1;
          }
        }
      }
    }
    v12 = WdLogNewEntry5_WdError(v5, top);
    *(_QWORD *)(v12 + 24) = 1908LL;
    WdLogEvent5_WdError(v12);
  }
  return 0;
}
