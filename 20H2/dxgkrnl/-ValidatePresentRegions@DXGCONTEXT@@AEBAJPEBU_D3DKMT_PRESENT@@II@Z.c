/*
 * XREFs of ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C01546E4
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FC160 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCONTEXT::ValidatePresentRegions(DXGCONTEXT *this, unsigned __int64 bottom, int a3, int a4)
{
  D3DKMT_PRESENT_RGNS *v4; // rcx
  __int64 v5; // rbx
  const struct _D3DKMT_PRESENT *v8; // r15
  UINT v9; // r11d
  UINT MoveRectCount; // r14d
  const D3DKMT_MOVE_RECT *pMoveRects; // r10
  UINT DirtyRectCount; // r11d
  UINT v13; // r9d
  const RECT *i; // rsi
  int right; // eax
  __int64 left; // rcx
  int top; // r8d
  LONG *p_bottom; // rsi
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  int v23; // ebp
  __int64 v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  _DWORD v31[2]; // [rsp+20h] [rbp-38h]
  int v32; // [rsp+28h] [rbp-30h]
  int v33; // [rsp+2Ch] [rbp-2Ch]

  v4 = *(D3DKMT_PRESENT_RGNS **)(bottom + 1440);
  v5 = 0LL;
  v8 = (const struct _D3DKMT_PRESENT *)bottom;
  v9 = 0;
  MoveRectCount = v4->MoveRectCount;
  pMoveRects = v4->pMoveRects;
  if ( MoveRectCount )
  {
    p_bottom = &pMoveRects->DestRect.bottom;
    while ( 1 )
    {
      v20 = *(p_bottom - 1);
      v21 = *(p_bottom - 3);
      if ( v20 <= v21 )
        break;
      bottom = (unsigned int)*p_bottom;
      v22 = *(p_bottom - 2);
      if ( (int)bottom <= v22 || v20 > a3 || (int)bottom > a4 || v21 < 0 || v22 < 0 )
        break;
      v23 = *(p_bottom - 4);
      bottom = (unsigned int)(bottom - v22);
      v31[0] = pMoveRects->SourcePoint.x;
      v31[1] = v23;
      v32 = v31[0] + v20 - v21;
      v33 = bottom + v23;
      if ( v32 > a3 || (int)bottom + v23 > a4 || v31[0] < 0 || v23 < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v4, bottom);
        *(_QWORD *)(v24 + 24) = -1073741811LL;
        v25 = (_QWORD *)(v24 + 32);
        do
        {
          v26 = (int)v31[v5++];
          *v25++ = v26;
        }
        while ( v5 < 4 );
        goto LABEL_30;
      }
      ++v9;
      ++pMoveRects;
      p_bottom += 6;
      if ( v9 >= MoveRectCount )
        goto LABEL_2;
    }
    v24 = WdLogNewEntry5_WdError(v4, bottom);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    v27 = (_QWORD *)(v24 + 32);
    do
    {
      v28 = p_bottom[v5++ - 3];
      *v27++ = v28;
    }
    while ( v5 < 4 );
LABEL_30:
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  else
  {
LABEL_2:
    DirtyRectCount = v4->DirtyRectCount;
    v13 = 0;
    for ( i = v4->pDirtyRects; v13 < DirtyRectCount; ++i )
    {
      right = i->right;
      left = (unsigned int)i->left;
      if ( (v8->Flags.Value & 0x10000000) != 0 )
      {
        if ( right < (int)left || (bottom = (unsigned int)i->bottom, top = i->top, (int)bottom < top) )
        {
LABEL_33:
          v24 = WdLogNewEntry5_WdError(left, bottom);
          *(_QWORD *)(v24 + 24) = -1073741811LL;
          v29 = (_QWORD *)(v24 + 32);
          do
          {
            v30 = *(&i->left + v5++);
            *v29++ = v30;
          }
          while ( v5 < 4 );
          goto LABEL_30;
        }
      }
      else
      {
        if ( right <= (int)left )
          goto LABEL_33;
        bottom = (unsigned int)i->bottom;
        top = i->top;
        if ( (int)bottom <= top )
          goto LABEL_33;
      }
      if ( right > a3 || (int)bottom > a4 || (int)left < 0 || top < 0 )
        goto LABEL_33;
      ++v13;
    }
    return 0LL;
  }
}
