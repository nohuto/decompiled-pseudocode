/*
 * XREFs of ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1C029DE30
 * Callers:
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C00DDFC0 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SESSION_VIEW::RemoveDisplaySource(SESSION_VIEW *this, struct DISPLAY_SOURCE *a2, bool *a3)
{
  __int64 v5; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  bool v10; // zf

  if ( *((SESSION_VIEW **)a2 + 6) == this )
  {
    *((_QWORD *)a2 + 6) = 0LL;
    v7 = (_QWORD *)((char *)a2 + 56);
    v8 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    v10 = (*((_DWORD *)this + 10))-- == 1;
    *a3 = v10;
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(this, this);
    *(_QWORD *)(v5 + 24) = a2;
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
