/*
 * XREFs of ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C023A864
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C023A5DC (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C023A81C (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall ValidateRectBounds(const struct tagRECT *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v4; // edi
  __int64 right; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  v4 = a2;
  if ( ValidateRect(a1, a2) )
  {
    right = (unsigned int)a1->right;
    if ( !v4 )
      v4 = a1->right;
    v7 = v4 * (unsigned __int64)(unsigned int)(a1->bottom - 1);
    if ( v7 > 0xFFFFFFFF )
    {
      v9 = WdLogNewEntry5_WdError(v7, right);
      *(_QWORD *)(v9 + 24) = 1869LL;
    }
    else
    {
      v8 = (unsigned int)(v7 + right);
      if ( (unsigned int)v8 < (unsigned int)v7 )
      {
        v9 = WdLogNewEntry5_WdError(v7, right);
        *(_QWORD *)(v9 + 24) = 1874LL;
      }
      else
      {
        if ( v8 <= a3 )
          return 1;
        v9 = WdLogNewEntry5_WdError(v7, right);
        *(_QWORD *)(v9 + 24) = 1879LL;
      }
    }
    WdLogEvent5_WdError(v9);
  }
  return 0;
}
